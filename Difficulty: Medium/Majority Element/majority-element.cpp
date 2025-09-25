class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int count = 0,c = -1;
        for (auto i:arr) {
            if (i == c) count++;
            else if (count == 0) {
                c= i;
                count++;

            }
            else count--;
           
        }
        int tot =0;
        for (auto i:arr) if (i == c) tot++;
        if (tot>arr.size()/2) return c;
        return -1;
    }
};