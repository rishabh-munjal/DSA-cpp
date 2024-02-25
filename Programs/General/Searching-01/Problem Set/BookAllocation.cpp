
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool isFeasible(int range , int Arr[] , int M , int N){
        int stu = 1 , pages = 0;
        
        for(int i=0 ; i<N ; i++){
            if(Arr[i] > range){
                return false;                                      
            }
            if(pages + Arr[i] > range){
                stu++;
                pages = Arr[i];
            }
            else{
                pages  += Arr[i];
            }
        }
        
        if(stu > M){
            return false;
        }
        
        
    }
    int findPages(int A[], int N, int M) 
    {
        int res = -1;
        if(N < M){
            return -1;
        }
        
        //LOW
        
        int l = A[0]; //Finding the max of A  
        for(int i = 1; i <N ; i++){
            if(A[i] > l){
                l = A[i];
            }
        }
        
        //HIGH
        
        int h = 0; //Finding the sum of array
        for(int j = 0 ; j<N ; j++){
            h += A[j];
        }
        
        while(l <= h ){
            int mid = (l+h)/2;
            
            if(isFeasible(mid , A , M , N)){
                res = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

