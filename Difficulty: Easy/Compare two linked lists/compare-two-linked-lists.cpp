/* Linked List Node Structure
class Node {
  public:
    char data;
    Node *next;

    Node(char x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        // Code Here
        Node* temp1 = head1;
        Node* temp2 = head2;

                while (temp1 != NULL && temp2 != NULL) {
                    if (temp1->data > temp2->data) {
                        return 1;
                    }
                    if (temp1->data < temp2->data) {
                        return -1;
                    }

                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }

                if (temp1 != NULL) return 1;
                if (temp2 != NULL) return -1;

                return 0;
    }
};