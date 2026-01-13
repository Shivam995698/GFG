class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if(n<2)
        {
            return -1;
        }
        priority_queue<int>pq;
        for(int i =0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        int largest = pq.top();
        pq.pop();
        while(!pq.empty() && pq.top()==largest)
        {
            pq.pop();
        }
        if(pq.empty())
        {
            return -1;
        }
        return pq.top();
    }
};