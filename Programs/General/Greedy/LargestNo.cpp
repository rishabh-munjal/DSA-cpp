//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here




        
        if (sum > 9 * n) return "-1"; // If sum is too large, not possible to form a number

        
        int currentSum = 0;
        string res = "";
        
        for(int i = 0 ; i < n ; i++){
            
            if(sum - currentSum >= 9){
                res += "9";
                currentSum += 9;
            }else if(sum - currentSum > 0 && sum - currentSum < 9){
                res += to_string(sum-currentSum);
                currentSum += sum -currentSum;
            }else{
                res += "0";
            }
            
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends