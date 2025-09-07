

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        int maxi = arr[n-1];
        for(int i = n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                ans.push_back(arr[n-1]);
            }
            else{
                if(arr[i]>=maxi)
                {
                    ans.push_back(arr[i]);
                    maxi = max(maxi,arr[i]);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};