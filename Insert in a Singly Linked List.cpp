/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        Node* newNode = new Node(val);
        if(pos == 1) {
                  newNode->next = head;
                  return newNode;
              }

        Node* temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return head;
    }
};
