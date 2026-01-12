class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int prev1 =1;
        int prev2 = 0;
        int ans = 0;
        for(int i =2;i<=n;i++)
        {
            ans = prev1+prev2;
            prev2 = prev1;
            prev1 =ans; 
            
        }
        return ans;
    
    }
};