// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n = arr.size();
        vector<int>smaller(n,-1);
        vector<int>greater(n,-1);
        int minIndex = 0;
        //Making the smaller array 
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=arr[minIndex])
            {
                minIndex = i;
            }
            else{
                smaller[i]=minIndex;
            }
        }
        //making the larger array 
        int maxIndex = n-1;
        for(int i = n-2;i>=0;i--)
        {
            if(arr[i]>=arr[maxIndex])
            {
                maxIndex = i;
            }
            else{
                greater[i]=maxIndex;
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(smaller[i]!=-1 && greater[i]!=-1)
            {
                return {arr[smaller[i]],arr[i],arr[greater[i]]};
            }
        }
        return {};
        
    }
};