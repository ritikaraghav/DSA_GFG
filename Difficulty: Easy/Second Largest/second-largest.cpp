class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        int largest2 = INT_MIN;
        for(int a : arr){
            if(a > largest){
                largest2 = largest;
                largest = a;
            }
            if( a < largest && a > largest2){
                largest2 = a;
            }
         
        }
      return (largest2 == INT_MIN) ? -1 : largest2;
    }
};