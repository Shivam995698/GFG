import java.math.BigInteger;

class Solution {
    String solve(String s1, String s2, int sign) {
        BigInteger num1 = new BigInteger(s1);
        BigInteger num2 = new BigInteger(s2);
        BigInteger ans = num1.multiply(num2);

        if (sign == -1 && !ans.equals(BigInteger.ZERO)) {
            return "-" + ans.toString();
        }
        return ans.toString();
    }

    public String multiplyStrings(String s1, String s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int i = 0;
        int j = 0;
        int sign = 1;

        for (int k = 0; k < n1; k++) {
            if (s1.charAt(k) == '-') {
                sign = -1;
                i++;
            } else if (s1.charAt(k) == '+') {
                i++;
            } else if (s1.charAt(k) == '0') {
                i++;
            } else {
                break;
            }
        }

        for (int k = 0; k < n2; k++) {
            if (s2.charAt(k) == '-') {
                sign = -1 * sign;
                j++;
            } else if (s2.charAt(k) == '+') {
                j++;
            } else if (s2.charAt(k) == '0') {
                j++;
            } else {
                break;
            }
        }

        String sub1 = s1.substring(i, n1);
        String sub2 = s2.substring(j, n2);

        if (sub1.isEmpty()) sub1 = "0";
        if (sub2.isEmpty()) sub2 = "0";

        return solve(sub1, sub2, sign);
    }
}
