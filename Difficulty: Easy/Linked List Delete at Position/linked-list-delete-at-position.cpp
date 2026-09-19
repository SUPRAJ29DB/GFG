/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if (head==NULL){
            return head;
        }
        if(x==1){
            return head->next;
        }
        Node* temp= head;
        int count=1;
        while(count<x-1 && temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        if(temp->next!=NULL){
            temp->next=temp->next->next;
        }
        return head;
    }
};