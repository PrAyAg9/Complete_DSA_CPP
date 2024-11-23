#include <iostream>
using namespace std;

// OOPS PADH LE POINTER REVISE KAR LE FIR AANA BAHUT SIMPLE MISTAKE CLASS ME SIRF STRUCTURE FUNCTION TO BAHAR HAI CLASS KE __ LEAEN CPP
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this-> data = d;
        this-> next = NULL;
    }
};
void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
}

void insertAtTail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
}

void insertAtMiddle( Node* &tail,Node* &head, int position, int d){
        int count = 1;
        Node* temp = head;
        // yeh pointer kaha point karega wo simple se baat thi
        if (position == 1){
            insertAtHead(head, d);
            return;
        }
        if (temp -> next == NULL){
            insertAtTail(tail,d);
            return;     
        }

        while(count < position -1){
            temp = temp-> next;
          
            count++;
        }

        Node* nodeToInsert = new Node(d);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;

}

void print(Node* &head){
    if(head==NULL){
        cout<<"List is empty";
    }
        Node* temp = head;
        // while(temp->next != NULL){
        while(temp != NULL){
            cout << temp -> data<<" ";
            temp = temp -> next;
        }
        cout << endl;
}

int main(){
    Node* node1 = new Node(2);
    // cout << node1->data<<endl;
    // cout << node1->next<<endl;
    // head aur tail ka declaration mat bhulna...
    Node* head = node1;
    Node* tail = node1;
    // print(head);
    insertAtTail(tail,1);
    insertAtHead(head,4);

    insertAtHead(head, 5);
    print(head);
    insertAtTail(tail,0);
    print(head);

    insertAtMiddle(tail,head,3,3);
    print(head);
}

// Still lot to learn man. --