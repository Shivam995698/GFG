class Solution {
    void solve(ArrayList<String>arr,StringBuilder s,int index)
    {
        if(index ==s.length())
        {
            arr.add(s.toString());
            return;
        }
        HashSet<Character>st = new HashSet<>();
        int n =s.length();
        for(int i= index;i<n;i++)
        {
        
            if(!st.contains(s.charAt(i)))
            {
                st.add(s.charAt(i));
                //swap 
                char temp = s.charAt(i);
                s.setCharAt(i,s.charAt(index));
                s.setCharAt(index,temp);
                //function call
                solve(arr,s,index+1);
                //ease the swap for the backtracking
                temp = s.charAt(i);
                s.setCharAt(i,s.charAt(index));
                s.setCharAt(index,temp);
            }
        }
    }
    public ArrayList<String> findPermutation(String s) {
        ArrayList<String>arr = new ArrayList<>();
        String res = "";
        StringBuilder s1 = new StringBuilder(s);
        solve(arr,s1,0);
        return arr;
    }
}