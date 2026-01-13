
class Solution {
  public:
    string is_AutomorphicNumber(int n) {
        long long num = n*n;
        int square = num%10;
        if(n%10 == square)
        {
            return "Automorphic";
        }
        return "Not Automorphic";
        
    }
};