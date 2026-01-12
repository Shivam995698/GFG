class Solution {
  public:
    string firstRepChar(string s) {
        int n = s.length();
        unordered_map<char,int>mp;
        for(int i =0;i<n;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>=2)
            {
                return string(1,s[i]);
            }
        }
        return "-1";
    }
};