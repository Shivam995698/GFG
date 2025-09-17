class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low<high)
        {
            int pi = partition(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int i = low-1;
        int pivot =high;
        int n = arr.size();
        for(int j = low;j<high;j++)
        {
            if(arr[j]<arr[pivot])
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[pivot]);
        return i+1;
    }
};