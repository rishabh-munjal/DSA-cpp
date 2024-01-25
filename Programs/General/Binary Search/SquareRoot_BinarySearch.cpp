//square root using binary search

#include<iostream>
using namespace std;

int sqrt(int n)
{
	int s=0;
	int e=n;
	int m=s+(e-s)/2;
	int answer=-1;
	
	while(s<=e)
	{
		if(m*m<=n)
		{
			answer=m;
			s=m+1;
		}
		else
		{
			e = m-1;
		}
		m=s+(e-s)/2;
	}
	
	return answer;
	
}

int main()
{
	
	int n;
	cout<<"Enter the number to find the square root:- ";
	cin>>n;
	
	int ans=sqrt(n);
	cout<<"Square root is:- "<<ans;
	
	return  0;
}