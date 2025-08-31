class Solution {
    public String removeUtil(String s) {
        StringBuilder sb = new StringBuilder();
        int n = s.length();
        boolean removed = false;

        for (int i = 0; i < n; i++) {
            if (i < n - 1 && s.charAt(i) == s.charAt(i + 1)) {
                removed = true;
                while (i < n - 1 && s.charAt(i) == s.charAt(i + 1)) {
                    i++; // skip duplicates
                }
            } else {
                sb.append(s.charAt(i));
            }
        }

        if (removed) {
            return removeUtil(sb.toString()); // recursive call until stable
        } else {
            return sb.toString();
        }
    }
}
