
class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%3)
        {
            return {-1,-1};
        }
        int requiredSum = sum/3;
        int first = -1;
        int second = -1;
        int sum2 = 0;
        for(int i = 0;i<n;i++)
        {
            sum2+=arr[i];
            if(sum2 == requiredSum)
            {
                if(first == -1)
                {
                    first = i;
                }
                else if(second == -1)
                {
                    second = i;
                    break;
                }
                sum2 =0;
            }
        }
        if(first!=-1 && second !=-1)
        {
            return {first,second};
        }
        return {-1,-1};
    }
};