
// } Driver Code Ends
class Solution
{
public:
    bool hasCycleDFS(int node, int parent, vector<bool> &visited, vector<vector<int>> &graph)
    {
        visited[node] = true;

        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                if (hasCycleDFS(neighbor, node, visited, graph))
                {
                    return true;
                }
            }
            else if (neighbor != parent)
            {
                return true;
            }
        }
        return false;
    }

    bool isCycle(vector<vector<int>> &graph)
    {
        vector<bool> visited(graph.size(), false);

        for (int i = 0; i < graph.size(); i++)
        {
            if (!visited[i])
            {
                if (hasCycleDFS(i, -1, visited, graph))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
