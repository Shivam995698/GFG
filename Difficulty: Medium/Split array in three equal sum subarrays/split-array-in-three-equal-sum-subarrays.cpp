// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
vector<int> findSplit(vector<int>& arr) {
        // code here
       int n = arr.size() ,sum = 0 ;
       for(int i = 0 ; i<n ; i++) sum+=arr[i];
       
       if(sum%3) return {-1, -1};
       int requiredSum = sum/3 , first =-1 , second = -1 ;
       sum = 0 ;
       for(int i = 0 ; i<n ; i++ ){
           sum += arr[i];
           if(sum == requiredSum){
               if(first ==-1) first = i;
               else if(second == -1){
                   second = i;
                   break;
               }
               sum =0;
               
               
           }
       }
       if(first != -1 && second != -1 ) return {first , second};
       return {-1 , -1};
    }
};