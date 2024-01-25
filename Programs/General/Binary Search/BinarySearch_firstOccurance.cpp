//find the first occuracne of the element


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int firstoccurance(vector<int> v,int target)
{
	int ans = -1;
	int s=0;
	int e=v.size() - 1 ;
	
	int m = s + (e-s)/2;
	
	while(s<=e)
	{
		if(v[m]==target)
		{
			e=m-1;
			ans = m;
			
		}
		else if(v[m]<target)
		{
			s=m+1;
			
		}
		else if(target<v[m])
		{
			e=m-1;
		}
		
		m=s + (e-s)/2;
	}
	
	return ans;
	
}


int main()
{
	
	vector<int>v = {1,3,4,4,4,4,4,6,7,9};
	
	int target = 4;
	int ans = firstoccurance(v,target);
	
	cout<<"Answer is"<<ans<<endl;
	
	return  0;
}