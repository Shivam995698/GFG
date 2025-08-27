// User function Template for Java

class Sol {
    long equalPairs(String s) {
        int n = s.length();
        HashMap<Character,Integer>p = new HashMap<>();
        for(char i:s.toCharArray())
        {
            p.put(i,p.getOrDefault(i,0)+1);
        }
        int count = 0;
        for(int i:p.values())
        {
            count+=i*i;
        }
        return count;
    }
}