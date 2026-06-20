/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        queue<Node*>q;
        
        int count  = 0;
        
        if(root != NULL){
            q.push(root);
            count = count + (root -> data);
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
                count = count + (first -> data);
                q.push(first);
            }
                
            Node* second = temp-> right;
            if(second != NULL)
            {
                count = count + (second -> data);
                q.push(second);
            }
            
        }
        return count;
    }
};