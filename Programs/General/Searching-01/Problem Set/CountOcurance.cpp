/*Given an array arr[] of size N and an element k.
 The task is to find all elements in array that appear more than n/k times.*/

 #include <iostream>
 #include <vector>
 #include<algorithm>
 #include <set>

 using namespace std;

 int CountOccurance(vector <int> nums , int k , int N){

    vector <int> temp;

    sort(nums.begin() , nums.end());
    int count = 0;
    int i = 0;
    int j = 0;

    set<int> uniqueSet1;

    for (int element : nums) {
        uniqueSet1.insert(element);
    }

    for (int element : uniqueSet1) {
        temp.push_back(element);
    }


    while(i <= N){

        i = i + N/k + 1;
        if(nums[i] == temp[j]){

            count++;

        }
        j++;
    }

    return count;

 }
 
 int main()
 {
     vector <int> nums = {3,1,2,2,1,2,3,3};
     int N = nums.size();
     int k = 4;

     cout<<CountOccurance(nums , k , N);
     return 0;
 }