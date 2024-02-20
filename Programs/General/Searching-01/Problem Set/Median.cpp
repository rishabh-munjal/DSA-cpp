//Median of two sorted array

#include <iostream>
#include <vector>
using namespace std;

int findMedian(vector <int> a , vector <int> b){

    int MedianA = 0;
    int MedianB = 0;
    
    if(a.size()%2 != 0){  
     //median is middle element
        MedianA = a[a.size()/2];
    }

    if(a.size()%2 == 0){
        MedianA =  (a[a.size()/2] + a[a.size()/2])/2;
    }

    if(b.size()%2 != 0){  
     //median is middle element
        MedianB = b[b.size()/2];
    }

    if(b.size()%2 == 0){
        MedianB =  (b[b.size()/2] + b[b.size()/2])/2;
    }

    return (MedianA + MedianB)/2;


}

int main()
{
    vector <int> a = {1 , 2 ,3 , 4 , 5};
    vector <int> b = {3 , 4 , 5 , 6, 7, 8};

    cout<<findMedian(a,b);
    return 0;
}