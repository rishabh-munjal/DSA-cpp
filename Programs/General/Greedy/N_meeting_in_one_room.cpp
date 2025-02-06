class Solution {
private:
    static bool cmp(const pair<int , int>& a , const pair<int,int>&b ){
        
        return a.second < b.second;
        
    }
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        
        int n = start.size();
        vector<pair<int,int>> meetings;
        
        for(int i = 0 ; i < n ;i++){
            meetings.push_back({start[i] , end[i]});
        }
        
        
        sort(meetings.begin() , meetings.end() , cmp);
        
        int prev = meetings[0].second;
        
        int res = 1;
        
        for(int i = 1 ; i < n ; i++ ){
            if(meetings[i].first > prev){
                res++;
                
                prev = meetings[i].second;
            }
        }
        
        return res;
             
    }
};
