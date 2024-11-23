#include <iostream>
using namespace std;

class Node{
    // isko public karna mat bhulna
    public:
    int data;
    Node* next;
    Node(int d){
        // Mistake 1:- Not realize why we make constructor here 
        // Node -> data = data;
        // Node -> next = next;
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this->next!=NULL){
            delete next;
            this -> next = NULL;
            
        }
        cout <<"Memory is freed for value - "<< value<<endl;
    }
};

// MEmory delete karne se pehle yaad Karo memory DElete kyu kiya tha ................

// int head - kya hota head to ek pointer hai na first position ka UNDERSTAND
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

// agar ampersand nahi lagaya to value gayi -- TataByeBYe kyuki yaha firse copy ban rahi hai aur nayi bar fir se nayi copy 
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtMiddle(Node* &head, Node* &tail,int position, int d){
    // pehle ye temp sirf traverse karne ke liye
    if (position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp-> next;
        count++;
    }

    if (temp-> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* insertNode = new Node(d);
    insertNode -> next = temp -> next;
    temp -> next = insertNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp -> data <<endl;
        temp = temp-> next;
    }
    cout<<endl;
}

void deleteNode(Node* &head,Node* &tail, int position){


    if (position == 1){
        Node* temp = head;
        head = head-> next;
        temp ->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 3);
    insertAtHead(head, 2);

    insertAtTail(tail,5);
    insertAtTail(tail,6);

    insertAtTail(tail,8);
    insertAtTail(tail,9);
    insertAtHead(head,1);
    insertAtMiddle(head,tail,6,7);
    insertAtHead(head,0);
    print(head);

    cout <<"head"<<head-> data<<endl;
    cout <<"tail"<<tail-> data<<endl;

    deleteNode(head, tail, 10);
    print(head);
    cout <<"head"<<head-> data<<endl;
    cout <<"tail"<<tail-> data<<endl;
}

// SAme code mistake used assignment operator instead of equality one - temp->next == NULL;