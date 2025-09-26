class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int low = arr[j]-arr[i];
                int high = arr[j]+arr[i];
                int l = upper_bound(arr.begin(),arr.end(),low)-arr.begin();
                int h = lower_bound(arr.begin(),arr.end(),high)-arr.begin()-1;
                if(h<=j) continue;
                l = max(l,j+1);
                l = min(l,n-1);
                h = max(h,j+1);
                h = min(h,n-1);
                ans+=max(0,h-l+1);
            }
        }
        return ans;
    }
};