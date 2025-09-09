
class Solution {
  public:
      int solve(vector<int>&prices,int buy,int index,vector<vector<int>>dp)
    {
        if(index == prices.size())
        {
            return 0;
        }
        if(dp[index][buy]!=-1)
        {
            return dp[index][buy];
        }
        int profit = 0;
        if(buy)
        {
            profit =max(-prices[index]+solve(prices,0,index+1,dp),0+solve(prices,1,index+1,dp));
        }
        else{
            profit =max(prices[index]+solve(prices,1,index+1,dp),0+solve(prices,0,index+1,dp));
        }
        return dp[index][buy] = profit;
    }
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0]=0;
        dp[n][1]=0;
        for(int index = n-1;index>=0;index--)
        {
            for(int buy= 0; buy<=1;buy++){
                int profit = 0;
                if(buy)
                {
                    profit =max(-prices[index]+dp[index+1][0],0+dp[index+1][1]);
                }
                else{
                    profit =max(prices[index]+dp[index+1][1],0+dp[index+1][0]);
                }
                dp[index][buy] = profit;
            }
        }
        return dp[0][1];
    }
};
