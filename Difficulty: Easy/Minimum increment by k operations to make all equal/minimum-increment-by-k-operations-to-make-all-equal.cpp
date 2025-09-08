class Solution {
  public:
    // Function to find minimum operations to make all elements equal.
    int minOps(vector<int> arr, int k) {
        // Your code here
        int maxi = arr[0];
        int n = arr.size();
        for(int i = 0;i<n;i++)
        {
            maxi = max(maxi,arr[i]);
        }
        int count = 0;
        int ans = 0;
        for(int i =0;i<n;i++)
        {
            if(maxi!=arr[i])
            {
                while(maxi>arr[i])
                {
                    arr[i]+=k;
                    ans++;
                }
                if(maxi!=arr[i])
                {
                    return -1;
                }
            }
            // cout<<count<<endl;
        }

        return ans;
    }
};