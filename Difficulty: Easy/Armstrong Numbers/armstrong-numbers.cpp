// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int length = 0;
        while(n!=0)
        {
            length++;
            n=n/10;
        }
        n = original;
        int num = 0;
        while(n!=0)
        {
            int digit = n%10;
            num+=pow(digit,length);
            n=n/10;
        }
    if(original == num)
    {
        return true;   
    }
    return false;
    }
};