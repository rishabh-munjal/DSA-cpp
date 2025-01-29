class Solution
{
public:
    bool hasCycleDFS(int node, vector<bool> &visited, vector<bool> &recStack, vector<vector<int>> &graph)
    {
        // Mark the current node as visited and add it to the recursion stack
        visited[node] = true;
        recStack[node] = true;

        // Explore all neighbors
        for (int neighbor : graph[node])
        {
            // If neighbor is not visited, recurse on it
            if (!visited[neighbor])
            {
                if (hasCycleDFS(neighbor, visited, recStack, graph))
                {
                    return true;
                }
            }
            // If neighbor is in recStack, cycle is detected
            else if (recStack[neighbor])
            {
                return true;
            }
        }

        // Remove the node from the recursion stack before returning
        recStack[node] = false;
        return false;
    }

    bool isCycle(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<bool> visited(n, false);
        vector<bool> recStack(n, false);

        // Perform DFS for each unvisited node
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (hasCycleDFS(i, visited, recStack, graph))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
