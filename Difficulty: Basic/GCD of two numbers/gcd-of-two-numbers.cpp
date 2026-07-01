class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int temp;
        while(b!=0){
            temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
};
