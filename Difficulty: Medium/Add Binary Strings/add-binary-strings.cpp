// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int i = n1-1;
        int j = n2-1;
        int carry = 0;
        string ans = "";
        while(i>=0 || j>=0)
        {
            int sum = 0;
            if(i>=0 && s1[i]=='1')
            {
                sum++;
            }
            if(j>=0 && s2[j]=='1')
            {
                sum++;
            }
            if(sum+carry ==0)
            {
                carry = 0;
                ans='0'+ans;
            }
            else if(sum+carry == 1)
            {
                carry = 0;
                ans = '1'+ans;
            }
            else if(sum+carry==2)
            {
                carry = 1;
                ans = '0'+ans;
            }
            else if(sum+carry == 3)
            {
                carry =1;
                ans = '1'+ans;
            }
            i--;
            j--;
        }
        if(carry==1)
        {
            ans = '1'+ans;
        }
        string finalans = "";
        int n = ans.length();
        bool flag = true;
        for(int i =0;i<n;i++)
        {
            if(ans[i]=='0' && flag)
            {
                continue;
            }
            else{
                flag = false;
                finalans+=ans[i];
            }
        }
        return finalans;
    }
};