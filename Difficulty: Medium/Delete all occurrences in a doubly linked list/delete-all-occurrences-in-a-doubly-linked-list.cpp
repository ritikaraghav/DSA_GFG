/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/

class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {

         Node* current = head;

        // Traverse the entire list
        while (current != nullptr) {
            // Store next node before possibly deleting current
            Node* nextNode = current->next;

            // If current node matches the target value
            if (current->data == x) {
                // If not the head, link previous node to next
                if (current->prev)
                    current->prev->next = current->next;
                else
                    // If it's the head, move head forward
                    head = current->next; 

                // If not the tail, link next node to previous
                if (current->next)
                    current->next->prev = current->prev;

                // Delete the current node
                delete current;
            }

            // Move to the next node
            current = nextNode;
        }

        // Return updated head
        return head;
    }
};