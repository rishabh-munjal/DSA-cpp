//Given an array A[] of n positive integers which can contain
 //integers from 1 to n where elements can be repeated or can be absent
 // from the array. Your task is to count the frequency of all elements from 1 to n

 #include <iostream>
 #include <vector>
 using namespace std;                       //error

 vector <int> FrequencyCount(vector <int>& nums, int n){

    vector <int> result (n,0) ;
    
    


        

    return result;

 }
 
 int main()
 {
    vector <int> nums = {2,3,2,3,5};
    int n = 5;


    FrequencyCount(nums , n);

    for(int i=0 ; i<nums.size() ; i++){
        cout<<nums[i]<<" ";
    }

     return 0;
 }