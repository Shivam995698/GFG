class Solution {
  public:
    int binaryToDecimal(string &b) {
        int sum = 0;
        int n = b.length();
        int j = n-1;
        for(int i =0;i<n;i++)
        {
            if(b[i]=='1'){
                sum+=pow(2,j);
            }
            j--;
        }
        return sum;
    }
};