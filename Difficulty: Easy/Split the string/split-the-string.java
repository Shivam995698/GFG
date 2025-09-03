class Solution{
    static int isPossible(String S){
        // code here
        HashSet<String> st = new HashSet<>();
        StringBuilder str = new StringBuilder();

        for(char ch: S.toCharArray()){
            str.append(ch);
            if(!st.contains(str.toString())){
                st.add(str.toString());
                str.setLength(0);
            }
            if(st.size() == 4) return 1;
        }return 0;
    }
}