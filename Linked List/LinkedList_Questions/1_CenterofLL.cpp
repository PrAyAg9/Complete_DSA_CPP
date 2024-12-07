#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

int centerLL(Node* &head){
    if(head == NULL || head->next == NULL){
        return -1;
    }
    if(head->next == NULL){
        return 1;
    }
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL){
        fast = fast -> next;
        if( fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow-> data;
}

void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<< temp -> data << " ";
        temp = temp -> next;
    }while(tail != temp);
    cout << endl;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

int main(){
    Node* currentNode = new Node(4);
    Node* head = currentNode;
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 2);

    cout << centerLL(head);


}
