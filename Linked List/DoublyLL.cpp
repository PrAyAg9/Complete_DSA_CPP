#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
    // ~Node(){
    //     int value = this -> data;
    //     if(this->next != NULL && this->prev != NULL){
    //         delete next;
    //         delete prev;
    //         this -> next = NULL;
    //         this -> prev = NULL;
    //     }
    // }
    ~Node(){
        int value = this -> data;
        if(next!= NULL){
            delete next;
            next = NULL;
        }
        cout <<"Memoery freed for value - "<<value <<endl;
    }
};

void removeNode(Node* &head, Node* &tail, int position){
    if (position ==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        temp -> next = NULL;
        head = temp -> next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr-> next = NULL;
        delete curr;
    }

}

int lengthOfLL(Node* &head){
    Node* temp = head;
    int len = 1;
    while(temp!= NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, int value){
    if (head == NULL){
        Node* node = new Node(value);
        head = node;
        // return;
    }
    else{
        Node* temp = new Node(value);
        head -> prev = temp;
        temp -> next = head;
        head = temp;
    }

}

void insertAtTail(Node* &tail, int value){
    if(tail == NULL){
        Node* temp = new Node(value);
        tail = temp;
        // return;  --- KYU AGAR IF AUR DO HI CONDITION HAI TO KYU ELSE me daal na
    }
    else{
        Node* temp = new Node(value);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data){
    if (position ==1){
        insertAtHead(head,data);
        return;
    }
    Node* forw = head;
    Node* back = NULL;
    int count = 1;
    while(count < position){
        if (forw->next == NULL){
            insertAtTail(tail, data);
            return;
        }
        back = forw;
        forw = forw -> next;
        count++;
    }
    

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = back->next;
    nodeToInsert -> prev = forw-> prev;
    back -> next = nodeToInsert;
    forw->prev = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp -> data<<endl;
        temp = temp -> next;
    }
}
int main(){
    Node* node1 = new Node(3);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,8);
    insertAtMiddle(head,tail,6,6);
    insertAtMiddle(head,tail,7,7);
    insertAtMiddle(head,tail,1,0);
    insertAtMiddle(head,tail,10,9);
    // cout<<node1-> head<<"head"<<endl;
    // cout<< node1-> tail <<"tail"<<endl;
    
    // Samjho ----- Node ka koi member head nahi hai head ek pointer hai member nahi aur wo ek value ko point kar raha hai
    cout <<"head - "<< head -> data <<endl;
    cout <<"tail - "<< tail -> data <<endl;
    print (head);
    return 0;
}