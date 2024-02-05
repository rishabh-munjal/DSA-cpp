/*Given an array arr[] of size N and two elements x and y, 
use counter variables to find which element appears most in the array, x or y.
 If both elements have the same frequency, then return the smaller element.
Note:  We need to return the element, not its count.
*/

#include <iostream>
#include <vector>
using namespace std;

void MajorityWins(vector<int> nums , int N ,int x , int y){

    int countX = 0;
    int countY = 0;

    
    for(int i=0 ; i<N ; i++){
        if(nums[i]==x){
            countX++;
        }
        if(nums[i]==y){
            countY++;
        }
    }

    if(countX > countY){
        cout<<x;
    }
    else if(countX < countY){
        cout<<y;
    }
    else{
        cout<<min(x,y);
    }
}

int main()
{
    vector <int> nums = {1,2,3,4,5,6,7,8};
    int N = 8;
    int x = 1;
    int y = 7;

    MajorityWins(nums , N , x , y);



    return 0;
}