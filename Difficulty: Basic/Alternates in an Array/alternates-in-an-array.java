class Solution {
    // function to print alternate elements of an array
    public ArrayList<Integer> getAlternates(int arr[]) {
        int n = arr.length;
        ArrayList<Integer>lst = new ArrayList<>();

        for(int i =0;i<n;i+=2)
        {
            lst.add(arr[i]);
        }
        return lst;
    }
}