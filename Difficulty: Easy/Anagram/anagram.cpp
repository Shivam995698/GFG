class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        unordered_map<char,int>mp1;
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1!=n2)
        {
            return false;
        }
        for(int i =0;i<n1;i++)
        {
            mp1[s1[i]]++;
        }
        for(int i =0;i<n2;i++)
        {
            if(mp1.find(s2[i])==mp1.end() || mp1[s2[i]]==0)
            {
                return false;
            }
            mp1[s2[i]]--;
          
        }
        return true; 
    }
};