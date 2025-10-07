class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size();
        vector<bool>v(n,false);
        queue<int>q;
        q.push(0);
        vector<int>ans;
        v[0]=true;
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            ans.push_back(front);
            for(auto i:adj[front])
            {
                if(!v[i])
                {
                    v[i]=true;
                    q.push(i);
                }
            }
            
        }
        return ans;
    }
};