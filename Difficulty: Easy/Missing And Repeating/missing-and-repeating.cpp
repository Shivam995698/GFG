class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        int dupli = 0;
        long long sum_arr = 0;

        // count & find duplicate while summing
        for (int x : arr) {
            sum_arr += x;
            if (++mp[x] == 2) dupli = x;
        }

        // ensure 64-bit multiplication BEFORE division
        long long total = 1LL * n * (n + 1) / 2;
        long long missing = total - (sum_arr - dupli);

        return {dupli, (int)missing};
    }
};
