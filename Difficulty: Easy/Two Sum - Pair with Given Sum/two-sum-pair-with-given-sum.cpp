class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int left = 0;
        int right = n-1;
        // int sum = 0;
        while(left<right)
        {
            int sum = arr[left]+arr[right];
            if(sum==target)
            {
                return true;
            }
            else if(sum<target)
            {
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};