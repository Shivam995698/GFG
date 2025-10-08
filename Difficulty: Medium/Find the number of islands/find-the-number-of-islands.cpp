class Solution {
  public:
     void bfs(vector<vector<char>>&grid,vector<vector<int>>&vis,int row,int col)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            vis[row][col]=1;
            for(int i= -1;i<=1;i++)
            {
                for(int j = -1;j<=1;j++)
                {
                    int nrow = row+i;
                    int ncol = col+j;
                    if(nrow>=0 && ncol>=0 && nrow<n && ncol<m
                     && grid[nrow][ncol]=='L' && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});                       
                    }
                }
            }
        }
    }
    
    int countIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='L')
                {
                    bfs(grid,vis,i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
};