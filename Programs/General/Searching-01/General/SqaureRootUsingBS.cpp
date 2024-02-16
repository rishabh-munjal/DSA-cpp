//program to find the sqaure root of a number using binary search

#include <iostream>
#include <vector>
using namespace std;

int FindRoot(int num){
    //using the login the sqaure root of the number lies between 1 and the number itself

    int start = 1;
    int end = num;

    while(start<=end){
        int mid = start + (end - start)/2;

        if(mid*mid == num){
            return mid;
        }
        else if (mid*mid < num){
            start = mid + 1 ;
        }
        else{
            end = mid - 1;
        }
    }


    return -1;

}

int main()
{
    int num = 25;

    cout<<FindRoot(num);

    return 0;
}