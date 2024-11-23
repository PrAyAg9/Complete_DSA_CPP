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
        if (this -> next != NULL){
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

Node* reverseLL(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forw = NULL;
    if ( head == NULL || head -> next == NULL){
        return head;
    }
    else{
        while(curr != NULL){
            forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            // curr = curr -> next; -- this is my error
            curr = forw;
        }
        return prev;
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

int main(){
    Node* newNode = new Node(4);
    Node* head = newNode;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print (head);
    // Mistake -- How to print reversed List:- 
    // print (head);
    // cout << reverseLL(head) -> data;

    head = reverseLL(head);
    print (head);
}