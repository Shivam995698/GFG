class Solution {
    public boolean areIsomorphic(String s1, String s2) {
        // code here
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1!=n2)
        {
            return false;
        }
        HashMap<Character,Character>mp = new HashMap<>();
        HashMap<Character,Character>mp2 = new HashMap<>();
        int i = 0;
        int j = 0;
        while(i<n1)
        {
            char ch1 = s1.charAt(i);
            char ch2 = s2.charAt(j);
            if(mp.containsKey(ch1))
            {
                if(mp.get(ch1)!=ch2)
                {
                    return false;
                }
            }
            else{
                mp.put(ch1,ch2);
            }
            if(mp2.containsKey(ch2))
            {
                if(mp2.get(ch2)!=ch1)
                {
                    return false;
                }
            }
            else{
                mp2.put(ch2,ch1);
            }
            
            i++;
            j++;
        }
        return true;
        
    }
}