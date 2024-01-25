//program to find the odd occuring elemnt in a array using XOR

#include <iostream>
#include <bit>
#include <vector>

using namespace std;

void OddOccur(vector <int>v){
    //we will xor all the elements , the even numbers ones will cancel each other
    int result = 0;

    for(int i=0; i<v.size() ; i++){

        result = v[i] ^ result;

    }

    cout<<result;

}

int main()
{
    vector <int> v {4,3,3,4,4,5,5};

    OddOccur(v);



    return 0;
}