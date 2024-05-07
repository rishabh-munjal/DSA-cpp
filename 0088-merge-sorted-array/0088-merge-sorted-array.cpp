class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


        int mix[m+n]; 
        int i = 0;
        int j = 0;
        int k = 0;


        //using two pointer until 1 end reached
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                mix[k] = nums1[i];
                i++;
             }
             else{
                mix[k] = nums2[j];
                j++;
             }

             k++;
        }

        //copying the edge elements incase left

        while(i < m){
            mix[k] = nums1[i];
            i++;
            k++;
        }

        while(j < n){
            mix[k] = nums2[j];
            j++;
            k++;
        }

        for(int i = 0 ; i < n+m ; i++){
            nums1[i] = mix[i];
        }
        
    }
};