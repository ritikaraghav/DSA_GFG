class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        if(arr.size() == 1)return true;
        for(int i = 0;i<arr.size()-2;i++){
            if(arr[i+1] < arr[i])return false;
        }
        return true;
    }
};