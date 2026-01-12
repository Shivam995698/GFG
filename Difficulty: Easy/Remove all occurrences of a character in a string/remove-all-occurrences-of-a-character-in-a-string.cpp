// User function Template for C++
class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        int n = s.length();
        s.erase(remove(s.begin(),s.end(),c),s.end());
    }
};