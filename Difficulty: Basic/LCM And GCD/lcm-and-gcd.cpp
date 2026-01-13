class Solution {
   public:
  int HCF(int a,int b)
  {
    while(b!=0)
    {
        int rem = a%b;
        a = b;
        b=rem;
    }
    return a;
  }
  int LCM(int a,int b)
  {
    int ans = (a/HCF(a,b))*b;
    return ans;
  }
    vector<int> lcmAndGcd(int a, int b) {
        vector<int>ans;
        int a1 = LCM(a,b);
        int b1 = HCF(a,b);
        ans.push_back(a1);
        ans.push_back(b1);
        return ans;
    }
};