class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        for(int i = 1;i<n;i++)
        {
            if((i+1)%2==0)
            {
                if(arr[i]>=arr[i-1])
                {
                    continue;
                }
                else if(arr[i]<arr[i-1])
                {
                    swap(arr[i],arr[i-1]);
                }
            }
            else if((i+1)%2==1)
            {
                if(arr[i]<=arr[i-1])
                {
                    continue;
                }
                else if(arr[i]>arr[i-1])
                {
                    swap(arr[i],arr[i-1]);
                }  
            }
        }
        return arr;
    }
};