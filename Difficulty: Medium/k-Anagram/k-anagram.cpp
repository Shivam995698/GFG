class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1!=n2)
        {
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        unordered_set<char>st1;
        for(int i =0;i<n1;i++)
        {
            mp1[s1[i]]++;
            st1.insert(s1[i]);
        }
        for(int i = 0;i<n2;i++)
        {
            mp2[s2[i]]++;
            st1.insert(s2[i]);
        }
        int diff = 0;
        for(char ch: st1)
        {
            diff = diff + abs(mp1[ch]-mp2[ch]);
        }
 
        if(diff/2<=k)
        {
            return true;
  
        }
        return false;
        
    }
};