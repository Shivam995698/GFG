class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        
        int maxi = max(a,b);
        int mini = min(a,b);
        while(mini!=0)
        {
            int rem = maxi%mini;
            maxi = mini;
            mini = rem;
        }
        return maxi;
    }
};
