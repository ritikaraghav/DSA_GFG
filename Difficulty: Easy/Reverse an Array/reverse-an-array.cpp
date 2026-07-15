class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        stack<int>st;
      
        for( int i : arr){
            st.push(i);
        }
        int i = 0;
        while(!st.empty() && i < arr.size()){
            arr[i] = st.top();
            st.pop();
            i++;
        }
       
    }
};