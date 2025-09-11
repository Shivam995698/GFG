class Solution {
public:
    int closestToZero(int arr[], int n) {
        sort(arr, arr + n);
        int i = 0, j = n - 1;
        int mini = INT_MAX;

        while (i < j) {
            int sum = arr[i] + arr[j];

            // update answer if closer to zero
            if (abs(sum) < abs(mini) || (abs(sum) == abs(mini) && sum > mini)) {
                mini = sum;
            }

            if (sum < 0)
                i++;
            else
                j--;
        }

        return mini;
    }
};
