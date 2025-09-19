// User function Template for C++

class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        // code
        
        int n = arr.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=-1)
            {
                ans[arr[i]]=arr[i];
            }
        }
        arr=ans;
    }
};
