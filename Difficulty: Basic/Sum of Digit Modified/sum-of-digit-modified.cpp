// User function template for C++

class Solution {
  public:
    int isMagic(int N) {
        int sum = 0;
        int n=N;
        while(n>9)
        {
            sum =0;
            while(n!=0)
            {
                sum+=n%10;
                n = n/10;
            }
            n=sum;
        }
        if(n==1)
        {
            return 1;
        }
        return 0;
    }
};