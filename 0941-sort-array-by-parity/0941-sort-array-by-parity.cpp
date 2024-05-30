class Solution {
public:
    //using Horare Partition Algorithm
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = -1;
        int j = nums.size();

        while(true){
            do{
                i++;
            }
            while( i<nums.size() && nums[i] % 2 == 0);

            do{
                j--;
            }
            while(j>=0 && nums[j] % 2 != 0);

            if(i < j) {
                swap(nums[i], nums[j]);
            } else {
                break;  
            }
            
        }

        return nums;
    }
};