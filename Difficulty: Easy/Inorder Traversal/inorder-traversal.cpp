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

  private:
    void InorderTraversal(Node* root, vector<int>& ans) {
        if (root == NULL) return;

       
        InorderTraversal(root->left, ans);
        ans.push_back(root->data);
        InorderTraversal(root->right, ans);
        
    }
    
  public:
  vector<int> inOrder(Node* root) {
        vector<int> ans;
        InorderTraversal(root, ans);
        return ans;
    }
};