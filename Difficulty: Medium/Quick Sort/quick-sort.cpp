class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low<high)
        {
            int pi = partition(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        int n = arr.size();
        int i = low-1;
        int pivot = high;
        for(int j = low;j<=high-1;j++)
        {
            if(arr[j]<arr[pivot])
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        i++;
        swap(arr[i],arr[pivot]);
        return i;
    }
};