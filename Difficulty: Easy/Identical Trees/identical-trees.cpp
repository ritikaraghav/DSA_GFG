/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        
        if(r1 == NULL && r2 == NULL)
            return true;

        if(r1 == NULL || r2 == NULL)
            return false;

        queue<Node*> q1, q2;

        q1.push(r1);
        q2.push(r2);
        
        
        while(!q1.empty() && !q2.empty()) {

            Node* n1 = q1.front();
            q1.pop();

            Node* n2 = q2.front();
            q2.pop();

           
            if(n1->data != n2->data)
                return false;


            if(n1->left && n2->left) {
                q1.push(n1->left);
                q2.push(n2->left);
            }
            else if(n1->left || n2->left) {
                return false;
            }

          
            if(n1->right && n2->right) {
                q1.push(n1->right);
                q2.push(n2->right);
            }
            else if(n1->right || n2->right) {
                return false;
            }
        }

        return q1.empty() && q2.empty();
    }
};