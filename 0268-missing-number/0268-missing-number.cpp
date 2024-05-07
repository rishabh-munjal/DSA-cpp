class Solution {
public:

    //1.Distinct Numbers --> No duplicates
    int missingNumber(vector<int>& nums) {

        //1.Brute Force -> Using Sort STL -- Traversing the array
        
        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < nums.size() ; i++){
            if(i != nums[i]){
                return i;
            }
        }

        return nums.size();



        
    }
};