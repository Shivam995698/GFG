class Solution {
  public:
  void solve(string s,vector<string>&ans,int index)
  {
      if(index==s.length())
      {
          ans.push_back(s);
          return;
      }
      int n = s.length();
      unordered_set<char>st;
        for(int i = index;i<n;i++)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                swap(s[i],s[index]);
                solve(s,ans,index+1);
                swap(s[i],s[index]);
            }
        }
  }
    vector<string> findPermutation(string &s) {
        vector<string>ans;
        solve(s,ans,0);
        return ans;
    }
};
