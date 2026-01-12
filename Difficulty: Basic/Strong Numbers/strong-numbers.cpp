class Solution {
  public:
    int facto(int n)
    {
        int ans = 1;
        for(int i =1;i<=n;i++)
        {
            ans = ans*i;
        }
        return ans;
    }
    int isStrong(int N) {
        int original =N;
        int sum =0;
        while(N!=0)
        {
            int digit = N%10;
            sum = sum+facto(digit);
            N=N/10;
        }
        return original == sum;
    }
};