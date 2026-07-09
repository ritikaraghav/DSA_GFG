/* structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
  int maxsum(Node* root , int &sum){
      if(root == NULL)return 0;
      
      int left = maxsum(root->left,sum);
      
      int right = maxsum(root->right,sum);
      
      int currsum = root->data+left+right;
      
      sum = max(currsum , sum);
      return currsum;
  }
    int maxSubtreeSum(Node* root) {
        // code here
        int sum = INT_MIN;
        maxsum(root,sum);
        return sum;
    }
};