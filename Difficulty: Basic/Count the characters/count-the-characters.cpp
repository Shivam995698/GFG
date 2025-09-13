
class Solution {
  public:
    int getCount(string S, int N) {
        string ans = "";
        int count =0;
        int n = S.length();
        for(int i = 0;i<n;i++)
        {
            if(S[i-1]!=S[i])
            {
                ans+=S[i];
            }
        }
        unordered_map<char,int>mp;
        n= ans.length();
        for(int i = 0;i<n;i++)
        {
            mp[ans[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second==N)
            {
                count++;
            }
        }
        return count;
    }
};