/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
 
        // code here
      
  private:
    void postorderTraversal(Node* root, vector<int>& ans) {
        if (root == NULL) return;

        postorderTraversal(root->left, ans);
        postorderTraversal(root->right, ans);
        ans.push_back(root->data);

    }

  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        postorderTraversal(root, ans);
        return ans;
    }
};