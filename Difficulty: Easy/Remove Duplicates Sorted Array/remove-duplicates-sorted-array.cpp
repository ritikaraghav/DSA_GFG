class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int>s;
        vector<int>ans;
        for(int i : arr){
            if(s.find(i) == s.end()){
                s.insert(i);
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};