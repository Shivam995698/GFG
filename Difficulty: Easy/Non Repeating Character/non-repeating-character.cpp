
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n = s.length();
        unordered_map<char,int>mp1;
        for(int i =0;i<n;i++)
        {
            mp1[s[i]]++;
        }
        for(int i =0;i<n;i++)
        {
            if(mp1[s[i]]==1)
            {
                return s[i];
            }
        }
        return '$';
    }
};