class Solution {
    public static boolean areAnagrams(String s1, String s2) {
        // code here
        int n1 = s1.length();
        int n2 = s2.length();
        HashMap<Character,Integer>mp1 = new HashMap<>();
        HashMap<Character,Integer>mp2 = new HashMap<>();
        for(int i=0;i<n1;i++)
        {
            char ch = s1.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<n2;i++)
        {
            char ch = s2.charAt(i);
            mp2.put(ch,mp2.getOrDefault(ch,0)+1);
        }
        return mp1.equals(mp2);
    }
}