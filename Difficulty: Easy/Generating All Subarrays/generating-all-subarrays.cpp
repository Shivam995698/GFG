// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        vector<vector<int>>ans;
        int n = arr.size();
        for(int i =0;i<n;i++)
        {
            for(int j = i;j<n;j++)
            {
                vector<int>ans1;
                for(int k = i;k<=j;k++)
                {
                    ans1.push_back(arr[k]);
                }
                ans.push_back(ans1);
            }
        }
        return ans;
        
    }
};