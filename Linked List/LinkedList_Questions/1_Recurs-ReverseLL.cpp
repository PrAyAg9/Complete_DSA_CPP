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
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

//  Good Recursion
Node* reverse1(Node* &head){
    if (head == NULL || head -> next == NULL){
        return head;
    }

    Node* chotahead = reverse1(head -> next);

    // a V -- Tricky line in this code
    head -> next -> next = head;
    head -> next = NULL;
    return chotahead; 
}

// Other Recursion
// Node* reverse(Node* &head){
//     // Writing it in Main function
//     Node* curr = head;
//     Node* prev = NULL; 
//     reverseNormal(head,curr,prev);
//     return head;
// }

Node* reverseNormal(Node* curr, Node* prev) {
    if (curr == NULL) {
        return prev; // New head of the reversed list
    }

    Node* forw = curr->next;
    curr->next = prev;

    // Recursive call with the next node
    return reverseNormal(forw, curr);
}

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

int main(){
    Node* newNode = new Node(4);
    Node* head = newNode;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print (head);

    head = reverse1(head);
    print(head);

//  Using Recursion for normal linked list implementaion
    Node* curr = head;
    Node* prev = NULL; 
    head = reverseNormal(head, NULL);
    print(head);


    return 0;
}