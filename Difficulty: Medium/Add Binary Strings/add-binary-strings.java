// User function Template for Java

class Solution {
    public String addBinary(String s1, String s2) {
        // code here
        // int num1 = Integer.parseInt(s1);
        // int num2 = Integer.valueOf(s1);
        // int ans = num1+num2;
        // // String ans1 = Integer.valueOf(ans);
        // String ans1 = Integer.toString(ans);
        // return ans1;
        
        
        int n1 = s1.length();
        int n2 = s2.length();
        int i = n1-1;
        int j = n2-1;
        int carry = 0;
        String ans ="";
        while(i>=0 || j>=0)
        {
            int sum = 0;
            if(i>=0 && s1.charAt(i)=='1')
            {
                sum++;
            }
            if(j>=0 && s2.charAt(j)=='1')
            {
                sum++;
            }
            if(sum+carry == 0)
            {
                carry = 0;
                // sum = 0;
                ans='0'+ans;
            }
            else if(sum+carry==1)
            {
                carry = 0;
                // sum = 0;
                ans='1'+ans;
            }
            else if(sum+carry==2)
            {
                carry = 1;
                ans='0'+ans;
            }
            else if(sum+carry==3)
            {
                carry = 1;
                ans='1'+ans;
            }
            i--;
            j--;
        }
        if (carry > 0) {
            ans = "1" + ans;
        }
        String finalans = "";
        int n = ans.length();
        boolean flag = true;
        for(int k =0;k<n;k++)
        {
            if(ans.charAt(k)=='0' && flag)
            {
                continue;
            }
            else{
                flag=false;
                finalans+=ans.charAt(k);
            }
        }
        // if(i!=0)
        // {
        //     while(i!=0)
        //     {
        //         ans = s1.charAt(i)+ans;
        //     }
        //     i--;
        // }
        // if(j!=0)
        // {
        //     while(j!=0)
        //     {
        //         ans = s1.charAt(j)+ans;
        //     }
        //     j--;
        // }
        return finalans;
    }
}