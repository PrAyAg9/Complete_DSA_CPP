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

void deleteNode(Node* &tail, int element){
    // Node* temp = tail;
    // while(temp -> data != element){                                            REE CHUTIYA
    //     temp = temp -> next;

    // }
    // if(temp->next != NULL){
    //     delete next;
    //     temp->next = NULL;
    // }

    if ( tail == NULL){
        cout <<"List is empty - Check again"<<endl;
    }
    else{
        // Node* curr = tail; -----                Wrong way for circular linked list
        // Node* prev = NULL;
        Node* prev = tail;
        Node* curr = prev-> next;
        while(curr -> data != element){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 Node linked list
        if(curr  == prev){
            tail = NULL;
        }
        // 2 Node linked list
        if (tail == curr){
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

void insertNode(Node* &tail, int element, int data){
    // man lete if case me ki pura LL khali hai 
    if (tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = tail;
    }
    else{
        Node* temp = tail;
        while(temp -> data != element){
            temp = temp -> next;
        }
        Node* newNode = new Node(data);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void print(Node* &tail){
    Node* temp = tail;

    if (tail == NULL){
        cout <<"List is empty"<<endl;
        return;
    }
    do{
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }while(temp != tail);
    cout<< tail -> data<<endl;
}

int main(){
    Node* tail = NULL;
    insertNode(tail, 3,2);
    print(tail);
    // insertNode(tail , 2 ,4);
    // print (tail);

    // insertNode(tail,4,5);
    // insertNode(tail,2,3);
    // print(tail);

    // deleteNode(tail, 4);
    // print(tail);

    deleteNode(tail,2);
    cout << "tail - "<< tail -> data << endl;
    print(tail); 

    return 0;
}