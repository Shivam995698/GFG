class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        // for(int i = 0;i<n;i++)
        // {
        //     vector<int>prefix(n,-1);
        //     vector<int>postfix(n,-1);
        //     int sum = 0;
        //     for(int i=0;i<n;i++)
        //     {
        //         sum+=arr[i];
        //         prefix[i]=sum;
        //     }
        //     sum =0;
        //     for(int i=n-1;i>=0;i--)
        //     {
        //         sum+=arr[i];
        //         postfix[i]=sum;
        //     }
        //     for(int i = 0;i<n;i++)
        //     {
        //         if(prefix[i]==postfix[i])
        //         {
        //             return i;
        //         }
        //     }
        // }
        // return -1;
        
        int totalSum = 0;
        for(int i =0;i<n;i++)
        {
            totalSum+=arr[i];
        }
        int leftSum = 0;
        for(int i =0;i<n;i++)
        {
           int rightSum = totalSum-leftSum-arr[i];
           if(rightSum == leftSum)
           {
               return i;
           }
           leftSum+=arr[i];
        }
        return -1;
    }
};