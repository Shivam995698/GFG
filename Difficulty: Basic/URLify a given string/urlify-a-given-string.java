// User function Template for Java
class Solution {
    String URLify(String s) {
        int n = s.length();
        String ans="";
        for(int i = 0;i<n;i++)
        {
            if(s.charAt(i)==' ')
            {   
                ans+="%20";
            }
            else
            {
                ans+=s.charAt(i);
            }
        }
        return ans;
    } 
}