// User function Template for Java

class Solution {
    int countStrings(int n) {
        // code here
        if(n==1)
        {
            return 2;
        }
        if(n==2)
        {
            return 3;
        }
        int[] dp = new int[n+1];
        dp[0]=2;
        dp[1]=3;
        for(int i=2;i<n;i++)
        {
            dp[i]= dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }
}