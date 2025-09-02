class Solution {
    public String getLongestPal(String s) {
        // code here
                int n = s.length();
        int start = 0;
        int end = 0;
        int maxi = Integer.MIN_VALUE;
        //in case o fone center 
        for(int i =0;i<n;i++)
        {
            char center = s.charAt(i);
            int l = i;
            int r= i;
            while(l>=0 && r<n)
            {
                if( s.charAt(l)==s.charAt(r))
                {
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            int len = r-l-1;
            if(maxi<len)
            {
                maxi = len;
                start = l+1;
                end = r-1;
            }
        }
        //in case of two center 
        for(int i =0;i<n;i++)
        {
            char center = s.charAt(i);
            int l = i;
            int r= i+1;
            while(l>=0 && r<n)
            {
                if( s.charAt(l)==s.charAt(r))
                {
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            int len = r-l-1;
            if(maxi<len)
            {
                maxi = len;
                start = l+1;
                end = r-1;
            }
        }
        return s.substring(start,start+maxi);
    }
}