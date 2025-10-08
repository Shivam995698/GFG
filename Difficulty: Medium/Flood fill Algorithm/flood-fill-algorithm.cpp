class Solution {
  public:
    void dfs(vector<vector<int>>&image,vector<vector<int>>&copy,
    int sr,int sc,int newColor,int inColr,vector<int>row1,vector<int>col1)
    {
        copy[sr][sc]=newColor;
        int n = image.size();
        int m = image[0].size();
        for(int i = 0;i<4;i++)
        {
            int nrow = sr+row1[i];
            int nCol = sc+col1[i];
            if(nrow>=0 && nCol>=0 && nrow<n && nCol<m && image[nrow][nCol]==inColr && 
            copy[nrow][nCol]!=newColor)
            {
                dfs(image,copy,nrow,nCol,newColor,inColr,row1,col1);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        int n = image.size();
        int m = image[0].size();
        int inColr = image[sr][sc];
        vector<vector<int>>copy = image;
        vector<int>row1 = {-1,0,1,0};
        vector<int>col1 = {0,1,0,-1};
        dfs(image,copy,sr,sc,newColor,inColr,row1,col1);
        return copy;
        
    }
};