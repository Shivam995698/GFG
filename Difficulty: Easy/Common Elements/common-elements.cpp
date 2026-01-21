//Back-end complete function Template for C++

class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        unordered_map<int,int>mp;
        for(int i =0;i<n1;i++)
        {
            mp[a[i]]++;
        }
        vector<int>ans;
        for(int i =0;i<n2;i++)
        {
            if(mp.find(b[i])!=mp.end())
            {
                if(mp[b[i]]!=0){
                    mp[b[i]]--;
                    ans.push_back(b[i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};