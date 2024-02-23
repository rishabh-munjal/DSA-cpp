//Median of two sorted array

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMedian(vector <int> a , vector <int> b){

    a.insert(a.end(), b.begin(), b.end());
    sort(a.begin(), a.end());

    if(a.size()%2 != 0){  
     //median is middle element
        return a[a.size()/2];     
    }

    if(a.size()%2 == 0){

        return (a[a.size()/2] + a[a.size()/2])/2;
    }

    return -1;
}

int main()
{
    vector <int> a = {1 , 2 };
    vector <int> b = {2 , 3 , 4};

    cout<<findMedian(a,b);
    return 0;
}