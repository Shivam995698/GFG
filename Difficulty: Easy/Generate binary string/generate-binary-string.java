// User function Template for Java

class Solution {
    void solve(String s,String res,List<String>ans,int index)
    {
        if(index>=s.length())
        {
            ans.add(res);
            return;
        }
        if(s.charAt(index)=='?')
        {
            solve(s,res+'0',ans,index+1);
            solve(s,res+'1',ans,index+1);
        }
        else{
            solve(s,res+s.charAt(index),ans,index+1);
        }
    }
    public List<String> generate_binary_string(String s) {
        int n = s.length();
        List<String>ans = new ArrayList<>();
        solve(s,"",ans,0);
        return ans;
    }
}