class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          // Code Here
          int n = arr.size();
          sort(arr.begin(),arr.end(),greater<int>());
         for(int i=1;i<n;i++)  {
             if(arr[i]<arr[0]){
                 return arr[i];
             }
         }
         return -1;
      }
  };