class Solution {
    boolean solve(String s1,String s2,String s3,int i,int j,int k,Boolean[][] dp)
    {
        if(k==s3.length())
        {
            return j==s2.length() && i == s1.length(); 
        }
        if(dp[i][j]!=null)
        {
            return dp[i][j];
        }
        boolean valid = false;
        if(i<s1.length() && s1.charAt(i)==s3.charAt(k))
        {
            valid = valid || solve(s1,s2,s3,i+1,j,k+1,dp);
        }
        if(j<s2.length() && s2.charAt(j)==s3.charAt(k))
        {
            valid = valid || solve(s1,s2,s3,i,j+1,k+1,dp);
        }
        dp[i][j]=valid;
        return dp[i][j];
    }
    public boolean isInterLeave(String s1, String s2, String s3) {
        int n1 = s1.length();
        int n2 = s2.length();
        int n3 = s3.length();
        Boolean[][] dp = new Boolean[n1+1][n2+1];
        boolean ans = solve(s1,s2,s3,0,0,0,dp);
        return ans;
    }
}