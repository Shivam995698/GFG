class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};
        if (n == 1) return {1};

        vector<int> ans(n, 1);

        // Step 1: store prefix product in ans
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= arr[i];
        }

        // Step 2: multiply suffix product into ans
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= arr[i];
        }

        return ans;
    }
};
