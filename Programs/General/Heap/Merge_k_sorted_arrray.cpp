//The main concept behind is to create a min hip of size k with stores the
// first elements value 
// element index
// array index

//then we extract min and stores in res and push the next to the element we extracted from using the indices we stores


class Solution
{
    struct Triplet {
        int val, aPos, vPos;
        
        Triplet(int v, int ap, int vp) {
            val = v;
            aPos = ap;
            vPos = vp;
        }
    };
    
    struct Mycmp {
        bool operator()(Triplet &t1, Triplet &t2) {
            return t1.val > t2.val; // Min-heap for smallest elements first
        }
    };
    
public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> res;
        priority_queue<Triplet, vector<Triplet>, Mycmp> pq;
        
        // Push the first element of each array into the priority queue
        for (int i = 0; i < arr.size(); i++) {
            Triplet t(arr[i][0], i, 0);
            pq.push(t);
        }
        
        // Process the priority queue
        while (!pq.empty()) {
            Triplet curr = pq.top();
            pq.pop();
            
            res.push_back(curr.val); // Add the smallest element to the result
            
            int arrayPos = curr.aPos, valuePos = curr.vPos;
            
            // If there are more elements in the current array, push the next element
            if (valuePos + 1 < arr[arrayPos].size()) {
                Triplet t(arr[arrayPos][valuePos + 1], arrayPos, valuePos + 1);
                pq.push(t);
            }
        }
        
        return res;
    }
}; 