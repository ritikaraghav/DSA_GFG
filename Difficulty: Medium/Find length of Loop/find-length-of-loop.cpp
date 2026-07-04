/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        unordered_map<Node*, int>mp;
        Node* temp = head;
        int timer = 0;
        while(temp!=NULL){
            if(mp.find(temp) != mp.end()){
                int looplen = timer - mp[temp];
                return looplen;
            }
       
            mp[temp] = timer;
            timer++;
            temp = temp->next;
        }
        return 0;
    }
};