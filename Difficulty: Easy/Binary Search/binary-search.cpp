class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int i =0;
        int j = n-1;
        int ans = -1;
        while(i<=j)
        {
            int mid = i+(j-i)/2;
            if(arr[mid]==k)
            {
                ans =  mid;
                j = mid-1;
            }
            else if(arr[mid]>k)
            {
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return ans;
    }
};