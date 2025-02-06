/*
i) sort the finish time (increasing order)

ii) initialize solution as first activity in sorted activities.

iii) DO the following for reaming activities
    a) if current activity overlaps with last picked activity , ignore
    b) else add current activity to solution
*/

int maxActivities(pair<int , int> arr[] , int n){
    sort(arr ,  arr+n , myCmp); //inc order of finish time

    int prev = 0;
    int res = 1;

        for(int curr = 1 ; curr < n ; curr+){
            if(arr[curr].first >= arr[prev].second){
                res++;
                prev = curr;
            }
        }

        return res;

}