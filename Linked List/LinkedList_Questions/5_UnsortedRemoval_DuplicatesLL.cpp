#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int data){
    if (head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }
    else{
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout <<temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* removeduplicates(Node* head){
    Node* temp = head;
    if (head == NULL || head -> next == NULL){
        return NULL;
    }
    while(temp!=NULL){
        Node* move = temp -> next;
        int num = temp -> data;
        while(move!=NULL){
            if(temp -> data == move -> data){
                Node* next = move -> next;
                delete(move->next);
                temp -> next = next;
            }
            else{
                move = move -> next;
            }
        }
        temp = temp -> next;
    }
    return head;
}

int main(){
    Node* list = new Node(6);
    Node* head = list;
    insertAtHead(head, 12);
    insertAtHead(head, 78);
    insertAtHead(head, 6);
    insertAtHead(head, 6);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 3);
    insertAtHead(head, 78);
    insertAtHead(head, 12);
    insertAtHead(head, 12);
    insertAtHead(head, 1);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    print(head);

    removeduplicates(head);
    print(head);
}