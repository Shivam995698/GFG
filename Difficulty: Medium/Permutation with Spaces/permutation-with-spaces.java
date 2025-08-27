// User function Template for Java

class Solution {
    void solve(String s,ArrayList<String>ans,int n,int index,String res)
    {
        if(index==n)
        {
            ans.add(res);
            return;
        }
        if(index<n-1)
            solve(s,ans,n,index+1,res+s.charAt(index)+" ");
        solve(s,ans,n,index+1,res+s.charAt(index));
    }
    ArrayList<String> permutation(String s) {
        // Code Here
        int n = s.length();
        ArrayList<String>ans = new ArrayList<>();
        int index = 0;
        solve(s,ans,n,index,"");
        return ans;
    }
}