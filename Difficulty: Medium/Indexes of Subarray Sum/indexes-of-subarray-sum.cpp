class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        for(int i = 0;i<n;i++)
        {
            vector<int>ans;
            int sum = arr[i];
            for(int j = i+1;j<=n;
            j++)
            {
                
                if(sum==target)
                {
                    return {i+1,j};
                }
                if(j==n)
                {
                    break;
                }
                sum+=arr[j];
            }
        }
        return {-1};
    }
};