class Solution {
public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        int n = a1.size();
        unordered_map<int, int> mp; // diff -> first index
        int prefix1 = 0, prefix2 = 0;
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            prefix1 += a1[i];
            prefix2 += a2[i];
            
            int diff = prefix1 - prefix2;

            if (diff == 0) {
                // pura 0 to i tak ka span valid hai
                maxi = i + 1;
            } 
            else if (mp.find(diff) != mp.end()) {
                maxi = max(maxi, i - mp[diff]);
            } 
            else {
                mp[diff] = i; // pehli baar aaya hai, index store karo
            }
        }

        return maxi;
    }
};
