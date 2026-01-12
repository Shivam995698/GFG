// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        int n = s.length();
        reverse(s.begin(),s.end());
        return s;
    }
};
