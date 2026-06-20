/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int getSize(Node* root) {
        // code here
         queue<Node*>q;
        
        int count = 0;
        
        if(root != NULL){
            q.push(root);
            count++;
        }
        
        else {
            return -1;
        }
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            Node* first = temp-> left;
            if(first != NULL)
            {
                count++;
                q.push(first);
            }
                
            Node* second = temp-> right;
            if(second != NULL)
            {
                count++;
                q.push(second);
            }
            
        }
        return count;
    }
};