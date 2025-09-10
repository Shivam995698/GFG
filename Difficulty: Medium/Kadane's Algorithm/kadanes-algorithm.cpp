class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int maxSum = arr[0];
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum+=arr[i];
            maxSum = max(sum,maxSum);
            if(sum<0)
            {
                sum = 0;
            }
        
        }
        return maxSum;;
    }
};