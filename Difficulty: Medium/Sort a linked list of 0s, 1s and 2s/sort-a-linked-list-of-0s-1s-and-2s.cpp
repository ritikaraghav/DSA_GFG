/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* One = new Node(-1);
        Node* Zero = new Node(-1);
        Node* Two = new Node(-1);
        
        Node* zeroTail = Zero;
        Node* oneTail = One;
        Node* twoTail = Two;

        Node* curr = head;
        while(curr){
            if(curr->data == 0){
             zeroTail->next = curr;
             zeroTail = zeroTail->next;
            }
            else if(curr->data == 1){
                oneTail -> next = curr;
                oneTail = oneTail->next;
            }
            else{
                twoTail -> next = curr;
                twoTail = twoTail->next;
            }
            curr = curr->next;
        }
        
        zeroTail->next = One ->next ? One ->next : Two->next;
        oneTail->next = Two->next;
        twoTail->next = nullptr;
        
        head = Zero->next;
        
        return head;
    }
};