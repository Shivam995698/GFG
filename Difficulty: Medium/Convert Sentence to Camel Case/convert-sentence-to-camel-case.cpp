// User function Template for C++

class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
        string ans;
        bool flag = false; 
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                flag = true;
            }
            else if(flag)
            {
                ans+=toupper(s[i]);
                flag = false;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
        
    }
};
