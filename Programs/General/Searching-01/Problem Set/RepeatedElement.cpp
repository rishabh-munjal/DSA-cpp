/*You are given an array of N+2 integer elements.
 All elements of the array are in range 1 to N.
  Also, all elements occur once except two numbers which occur twice.
   Find the two repeating numbers*/

   #include <iostream>
   #include <vector>
   using namespace std;

   int RepeatedElement(vector <int> nums ,  int N){
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
        int mid = end + (start - end)/2;

        //ERROR


    }
   }
   
   int main()
   {
       vector <int> nums = {1,2,1,3,4,3};
       int N = 4;

        cout<<RepeatedElement(nums,N);


       return 0;
   }