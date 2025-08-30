// User function Template for Java
import java.math.*;
class Solution {
    String longDivision(String S, int D) {
        // // code here
        // BigInteger a1 = new BigInteger(S);
        // BigInteger a2 = BigInteger.valueOf(D);
        // BigInteger ans = a1.divide(a2);
        // return ans.toString();
        
        int n = S.length();
        
        StringBuilder temp = new StringBuilder("");
        int index = 0;
        long number = S.charAt(index)-'0';
        while(number<D && index+1<n)
        {
            index++;
            number = number*10+(S.charAt(index)-'0');
        }
        while(S.length()>index)
        {
            temp.append(number/D);
            index++;
            long remainder = number%D;
            if(index<n){
                number = remainder*10+(S.charAt(index)-'0');
            }
            else{
                number = remainder;
            }
        }
        return temp.toString();
        
    }
}
