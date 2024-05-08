class Solution {
public:

    //1.Distinct Numbers --> No duplicates
    int missingNumber(vector<int>& nums) {

        //1.Brute Force -> Using Sort STL -- Traversing the array
        
        /*sort(nums.begin() , nums.end());

        for(int i = 0 ; i < nums.size() ; i++){
            if(i != nums[i]){
                return i;
            }
        }

        return nums.size();*/

        //2. Optimized (O(1) SPACE & O(N) Runtime)

        //using XOR opertator

        // XOR of two sane no is 0

        int AllXor = 0;

        for(int i = 0 ; i <= nums.size() ; i++){
            AllXor = AllXor ^ i;
        }

        for(int num:nums){
            AllXor = AllXor ^ num;
        }

        return AllXor;







        



        
    }
};