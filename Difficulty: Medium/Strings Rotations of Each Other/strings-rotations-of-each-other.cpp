class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        string final = s1+s1;
        size_t  idx = final.find(s2);
        if(idx!=string::npos)
        {
            return true;
        }
        return false;
    }
};