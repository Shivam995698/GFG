// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& arr) {
        int n = arr.size();
        int mini = arr[0];
        for(int i =0;i<n;i++)
        {
            mini = min(arr[i],mini);
        }
        int cost= 0;
        for(int i =0;i<n-1;i++)
        {
                cost+=mini;
            
        }
        return cost;
    }
};