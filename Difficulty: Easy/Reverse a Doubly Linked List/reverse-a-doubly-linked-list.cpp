/* Structure of doubly linked list node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head == NULL || head-> next == NULL)return head;
        Node* curr = head;
        while(curr != NULL){
            Node* temp = curr-> next;
            curr->next = curr-> prev;
            curr-> prev = temp;
            
            head = curr;
            curr = temp;
        }
        return head;
    }
};