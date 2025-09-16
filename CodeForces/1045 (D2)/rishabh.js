const fs = require('fs');
const path = require('path');
const rawData = fs.readFileSync(path.join(__dirname, 'input.json'));
const json = JSON.parse(rawData);

const { n, k } = json.keys;

let points = [];

function parseBigInt(str, base) {
    const chars = str.toLowerCase().split('');
    const digits = '0123456789abcdefghijklmnopqrstuvwxyz';
    let result = 0n;

    for (let i = 0; i < chars.length; i++) {
        const digit = BigInt(digits.indexOf(chars[i]));
        result = result * BigInt(base) + digit;
    }

    return result;
}

for (const key in json) {
    if (key === "keys") continue;

    const x = BigInt(key);
    const base = parseInt(json[key].base);
    const yStr = json[key].value;
    const y = parseBigInt(yStr, base); 

    points.push([x, y]);
}

points.sort((a, b) => (a[0] < b[0] ? -1 : 1));

const selectedPoints = points.slice(0, k);

function lagrangeInterpolationAtZero(points) {
    let secret = 0n;

    for (let i = 0; i < points.length; i++) {
        const [xi, yi] = points[i];
        let num = 1n;
        let denom = 1n;

        for (let j = 0; j < points.length; j++) {
            if (i === j) continue;
            const [xj] = points[j];
            num *= -xj;
            denom *= xi - xj;
        }

        let term = yi * num;
        if (denom < 0n) {
            term = -term;
            denom = -denom;
        }

        term = term / denom;
        secret += term;
    }

    return secret;
}

const secret = lagrangeInterpolationAtZero(selectedPoints);
console.log("Recovered secret (c):", secret.toString());