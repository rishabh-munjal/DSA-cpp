#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> &a , int start ,  int end , int x  ){

    int mid;
	
	while(start <= end)
	{
		mid = (start+end)/2;	
		if(a[mid] == x)
		{
			return mid;
		}
		else if(a[mid]>x)
		{
			end = mid-1;
		}
		else if(a[mid]<x)	
		{
			start =mid+1;
		}
	}
	return -1;

}

int ExpSearch(vector<int> a , int x){

    if(a[0]==x){
        return 0;
    }

    int i = 1;
    while(i<a.size() && a[i]<=x){
        i*=2;
    }

    return binary_search(a , i/2 ,min(i,static_cast<int>(a.size()) - 1), x);
    
}

int main(){
    vector<int> a {3,4,5,6,11,13,14,15,56,70};
    int x = 5;
    int ans = ExpSearch(a,x); // exponential search is used for searching in big data

    cout<<ans;
    return 0;
}