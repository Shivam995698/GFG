// User function Template for Java
class Solution {
    static int minimumNumberOfSwaps(String s) {
        int n = s.length();
        int open = 0;
        int close = 0;
        int imbalance = 0;
        int swap = 0;
        for(int i =0;i<n;i++)
        {
            if(s.charAt(i)=='[')
            {
                open++;
                if(imbalance>0)
                {
                    swap+=imbalance;
                    imbalance--;
                }
            }
            else if(s.charAt(i)==']')
            {
                close++;
                imbalance
        =close-open;
            }
        }
        return swap;
    }
}