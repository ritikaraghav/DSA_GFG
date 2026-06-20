class Solution {
  public:
    int height(Node* root) {
        if(root == NULL)
            return 0;

        queue<Node*> q;
        q.push(root);

        int height = 0;

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                Node* temp = q.front();
                q.pop();

                if(temp->left)
                    q.push(temp->left);

                if(temp->right)
                    q.push(temp->right);
            }

            height++;
        }

        return height-1;
    }
};