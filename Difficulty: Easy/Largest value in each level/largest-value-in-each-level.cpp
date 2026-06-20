class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        if(root == NULL)
            return {};

        queue<Node*> q;
        q.push(root);

        
        vector<int>ans;
        int val;

        while(!q.empty()) {
            int size = q.size();
            int maximum = INT_MIN;
            while(size--) {
                Node* temp = q.front();
                q.pop();
                
                if(temp->data > maximum)
                    maximum = temp->data;

                if(temp->left)
                {
                    q.push(temp->left);
                    
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
                    
            }

            ans.push_back(maximum);
        }

        return ans;
    }
};