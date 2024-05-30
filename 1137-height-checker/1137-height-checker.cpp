class Solution {
public:

    //1 normal array
    //1 sorted array
    //count non matching elements
    int heightChecker(vector<int>& heights) {

        /*Naive
        traversing heights & sorted heights and increasing order*/

        vector<int> expected = heights; 
        sort(expected.begin(), expected.end());  //O(N logN)

        int count = 0;

        for(int i = 0 ; i < heights.size() ; i++){

            if(heights[i] != expected[i]){
                count++;
            }

        }

        return count;
//----------------------------------------------------------------------------------        






        
    }
};