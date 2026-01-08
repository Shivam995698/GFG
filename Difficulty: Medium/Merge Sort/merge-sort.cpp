class Solution {
  public:
    void merge(int l,int mid,int r,vector<int>&ans)
    {
        vector<int>temp;
        int i = l;
        int j = mid+1;
        while(i<=mid && j<=r)
        {
            if(ans[i]<ans[j])
            {
                temp.push_back(ans[i]);
                i++;
            }
            else{
                temp.push_back(ans[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(ans[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(ans[j]);
            j++;
        }
        int n =temp.size();
        for(int i = 0;i<n;i++)
        {
            ans[l+i]=temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        int n = arr.size();
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