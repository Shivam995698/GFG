class Solution {
  public:
    void solve(int node,vector<vector<int>>&adj,vector<int>&vis,vector<int>&ans)
    {
        vis[node]=true;
        ans.push_back(node);
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                solve(i,adj,vis,ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int>ans;
        vector<int>vis(n,false);
        int start = 0;
        solve(start,adj,vis,ans);
        return ans;
    }
};