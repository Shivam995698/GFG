class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        int sum1 = n+n+1;
        int sum2 = 0;
        for(int i=0;i<n;i++)
        {
            sum1+=i;
            sum2+=arr[i];
        }
        return sum1-sum2;
    }
};