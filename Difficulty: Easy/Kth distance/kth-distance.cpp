// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++)
        {
            if(mp.find(arr[i])!=mp.end())
            {
                if(abs(mp[arr[i]]-i)<=k)
                {
                    return true;
                }
            }
            mp[arr[i]]=i;
        }
        return false;
    }
};