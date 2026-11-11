/*
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
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp=head;
        Node* end=new Node(x);
        if (head == nullptr) {
                   return end;
               }

        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=end;
        end->next=nullptr;
        return head;
    }
};
