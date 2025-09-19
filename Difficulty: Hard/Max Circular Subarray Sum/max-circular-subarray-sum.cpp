class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int total = 0;
        int n = arr.size();
        int currMax = 0, maxSum = INT_MIN;
        int currMin = 0, minSum = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            int x = arr[i];
            total += x;
            currMax = max(x, currMax + x);
            maxSum = max(maxSum, currMax);
            currMin = min(x, currMin + x);
            minSum = min(minSum, currMin);
        }
        if (maxSum < 0) return maxSum;

     
        return max(maxSum, total - minSum);
    }
};