/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        queue<Node*>q;
        
        vector<int>ans;
        
        if(root != NULL){
            q.push(root);
            ans.push_back(root -> data);
        }
        
        else {
            return ans;
        }
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            Node* first = temp-> left;
            if(first != NULL)
            {
                ans.push_back(first -> data);
                q.push(first);
            }
                
            Node* second = temp-> right;
            if(second != NULL)
            {
                ans.push_back(second -> data);
                q.push(second);
            }
            
        }
        return ans;
    }
};