#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <nlohmann/json.hpp>

using Big = boost::multiprecision::cpp_int;
using json = nlohmann::json;

struct Rational {
    Big num{0}, den{1}; // num/den
    static Big absBig(Big v){ return v < 0 ? -v : v; }
    static Big gcdBig(Big a, Big b){
        a = absBig(a); b = absBig(b);
        while (b != 0){ Big r = a % b; a = b; b = r; }
        return a;
    }
    void normalize(){
        if (den == 0) throw std::runtime_error("Zero denominator");
        if (den < 0){ num = -num; den = -den; }
        Big g = gcdBig(num, den);
        if (g != 0){ num /= g; den /= g; }
    }
};

Rational operator+(Rational a, const Rational& b){
    Rational r;
    r.num = a.num * b.den + b.num * a.den;
    r.den = a.den * b.den;
    r.normalize();
    return r;
}
Rational operator-(Rational a, const Rational& b){
    Rational r;
    r.num = a.num * b.den - b.num * a.den;
    r.den = a.den * b.den;
    r.normalize();
    return r;
}
Rational operator*(Rational a, const Rational& b){
    Rational r;
    r.num = a.num * b.num;
    r.den = a.den * b.den;
    r.normalize();
    return r;
}
Rational operator/(Rational a, const Rational& b){
    if (b.num == 0) throw std::runtime_error("Division by zero");
    Rational r;
    r.num = a.num * b.den;
    r.den = a.den * b.num;
    r.normalize();
    return r;
}

Big charToDigit(char c){
    if ('0' <= c && c <= '9') return c - '0';
    if ('A' <= c && c <= 'Z') return 10 + (c - 'A');
    if ('a' <= c && c <= 'z') return 10 + (c - 'a');
    throw std::runtime_error("Invalid digit char");
}

Big parseInBase(const std::string& s, int base){
    if (base < 2 || base > 36) throw std::runtime_error("Unsupported base");
    Big value = 0;
    for(char c : s){
        if (c == '_' || c == ' ') continue; // allow separators
        Big d = charToDigit(c);
        if (d >= base) throw std::runtime_error("Digit out of base range");
        value = value * base + d;
    }
    return value;
}

// Evaluate f(0) by Lagrange interpolation: c = f(0) = sum y_i * L_i(0)
// L_i(0) = Π_{m!=i} (0 - x_m) / (x_i - x_m)
Rational lagrangeAtZero(const std::vector<std::pair<Big, Big>>& pts){
    if (pts.size() < 3) throw std::runtime_error("Need at least 3 points for quadratic");
    // Use first 3 points (assumes quadratic). Ensure distinct x.
    std::vector<std::pair<Big, Big>> p3;
    for (auto &p: pts){
        bool duplicate = false;
        for (auto &q: p3) if (q.first == p.first) duplicate = true;
        if (!duplicate) p3.push_back(p);
        if (p3.size() == 3) break;
    }
    if (p3.size() < 3) throw std::runtime_error("Need 3 points with distinct x");

    Rational result; // 0/1
    for (int i = 0; i < 3; ++i){
        Big xi = p3[i].first;
        Big yi = p3[i].second;

        Rational Li; Li.num = 1; Li.den = 1;
        for (int m = 0; m < 3; ++m){
            if (m == i) continue;
            Big xm = p3[m].first;
            Rational term;
            term.num = -xm;         // (0 - x_m)
            term.den = xi - xm;     // (x_i - x_m)
            if (term.den == 0) throw std::runtime_error("Duplicate x in chosen points");
            term.normalize();
            Li = Li * term;
        }
        Rational yiRat; yiRat.num = yi; yiRat.den = 1;
        result = result + (yiRat * Li);
    }
    result.normalize();
    return result;
}

int main(int argc, char** argv){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (argc < 2){
        std::cerr << "Usage: " << argv[0] << " <data.json>\n";
        return 1;
    }

    // Read entire JSON file
    std::ifstream in(argv[1]);
    if (!in) { std::cerr << "Failed to open JSON file\n"; return 1; }
    json J;
    in >> J;

    // Extract points
    std::vector<std::pair<Big, Big>> pts;
    for (auto& node : J.at("points")){
        // x as integer (supports big via string too)
        Big x = 0;
        if (node["x"].is_number_integer()){
            x = Big(node["x"].get<long long>());
        } else if (node["x"].is_string()){
            // allow decimal string for huge x
            std::string xs = node["x"].get<std::string>();
            // parse as base-10 string
            bool neg = false;
            if (!xs.empty() && xs[0]=='-'){ neg=true; xs.erase(xs.begin()); }
            for(char c: xs){ if (!std::isdigit((unsigned char)c)) throw std::runtime_error("x must be integer"); x = x*10 + (c-'0'); }
            if (neg) x = -x;
        } else {
            throw std::runtime_error("Unsupported x type");
        }

        // y: {base, value}
        int base = node["y"].at("base").get<int>();
        std::string ystr = node["y"].at("value").get<std::string>();
        Big y = parseInBase(ystr, base);

        pts.emplace_back(x, y);
    }

    // Compute c = f(0)
    Rational c = lagrangeAtZero(pts);

    // Expect integer if truly quadratic with integer coefficients
    if (c.den != 1){
        // Still print exact rational and floor/rounded integer as fallback view
        std::cout << "c = " << c.num << " / " << c.den << "\n";
    } else {
        std::cout << c.num << "\n";
    }
    return 0;
}
