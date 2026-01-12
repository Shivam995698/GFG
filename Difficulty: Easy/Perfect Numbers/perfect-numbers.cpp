class Solution {
  public:
    bool isPerfect(int n) {
        int ans =0;
        for(int i =1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                ans+=i;
                if(i!=1 && i!=n/i)
                {
                    ans+=n/i;
                }
            }
        }
        return ans==n ? true:false;
    }
};