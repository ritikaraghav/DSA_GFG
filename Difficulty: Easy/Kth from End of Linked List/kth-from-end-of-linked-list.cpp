/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int count = 0;
        
        Node*temp = head;
        while(temp!= NULL){
            count++;
            temp = temp->next;
        }
        
        if(count < k)return -1;
        if(count == k)return head->data;
        
        Node* dummy = head;
        
        Node* slow = dummy;
        Node* fast = dummy;
        
        for(int i=0 ;i<=k;i++){
            fast = fast->next;
        }
        while(fast!= NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        int ans = slow->next->data;
        
        return ans;
    }
};