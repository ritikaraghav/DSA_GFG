/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
          queue<Node*>q;
        
        int count  = 0;
        
        if(root != NULL){
            q.push(root);
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

                q.push(first);
            }
                
            Node* second = temp-> right;
            if(second != NULL)
            {

                q.push(second);
            }
            
            if(second != NULL || first != NULL)count++;
            
        }
        return count;
    }
};