class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int n = arr.size();
        int zeroCount = 0;
        int i = 0;
        int maxi = INT_MIN;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==0)
            {
                zeroCount++;
            }
            while(zeroCount>k)
            {
                if(arr[i]==0)
                    zeroCount--;
                i++;
            }
            maxi = max(maxi,j-i+1);
        }
        return maxi;
    }
};
