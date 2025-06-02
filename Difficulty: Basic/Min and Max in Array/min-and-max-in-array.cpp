// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        pair<int,int>MinMax;
        int n =arr.size();
        sort(arr.begin(),arr.end());
        MinMax.first=arr[0];
        MinMax.second=arr[n-1];
        return MinMax;
        
        // code here
        
    }
};