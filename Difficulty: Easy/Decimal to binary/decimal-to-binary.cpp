class Solution {
  public:
    string decToBinary(int n) {
        string ans = "";
        while(n!=0)
        {
            int rem = n%2;
            ans = char(rem+'0')+ans;
            n = n/2;
        }
        return ans;
    }
};