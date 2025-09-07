class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        set<int>st;
        int n = arr.size();
        for(int i =0;i<n;i++)
        {
            st.insert(arr[i]);
        }
        vector<int>ans;
        for(int num:st)
        {
            ans.push_back(num);
        }
        return ans;
    }
};