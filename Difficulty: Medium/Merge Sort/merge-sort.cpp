class Solution {
  public:   
  void merge(int l,int mid,int r,vector<int>&arr)
    {
        // int n = arr.size();
        vector<int>temp;
        int i = l;
        int j = mid+1;
        while(i<=mid && j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(arr[j]);
            j++;
        }
        //coping in original arr 
        int n = temp.size();
        for(int i = 0;i<n;i++)
        {
            arr[l+i]= temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r)
        {
            return;
        }
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(l,mid,r,arr);
        
    }
};