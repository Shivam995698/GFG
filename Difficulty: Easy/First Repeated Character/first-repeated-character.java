// User function Template for Java
class Solution {
    String firstRepChar(String s) {
        int n = s.length();
        String ans = "";
        HashMap<Character,Integer>mp1 = new HashMap<>();
        for(char ch: s.toCharArray())
        {
            if(mp1.containsKey(ch) && mp1.get(ch)>=1)
            {
                ans+=ch;
                return ans;
            }
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        }
        ans+="-1";
        return ans;
        
    }
}