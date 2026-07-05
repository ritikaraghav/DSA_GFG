/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  private:
    void preorderTraversal(Node* root, vector<int>& ans) {
        if (root == NULL) return;

        ans.push_back(root->data);
        preorderTraversal(root->left, ans);
        preorderTraversal(root->right, ans);
    }

  public:
    vector<int> preOrder(Node* root) {
        vector<int> ans;
        preorderTraversal(root, ans);
        return ans;
    }
};