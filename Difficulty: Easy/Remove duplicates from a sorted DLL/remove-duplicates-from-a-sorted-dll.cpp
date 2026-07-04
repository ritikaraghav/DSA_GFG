/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
       unordered_set<int> st;
        Node* temp = headRef;

        while(temp) {
            Node* nextNode = temp->next;

            if(st.count(temp->data)) {
                if(temp->prev)
                    temp->prev->next = temp->next;

                if(temp->next)
                    temp->next->prev = temp->prev;
            } else {
                st.insert(temp->data);
            }

            temp = nextNode;
        }

        return headRef;
    }
};