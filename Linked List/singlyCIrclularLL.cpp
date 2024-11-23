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
            next = NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int data){
    // element de pao aisa soch ke function banaye hai fir bhi
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* newNode = new Node(data);
        Node* curr = tail;
        while (curr -> data != element){
            curr = curr -> next;
        }
        newNode-> next = curr -> next;
        curr-> next = newNode;
    }
}

void removeNode(Node* &tail, int element){
    Node* temp = tail;
    while(temp-> data != element){
        temp = temp -> next;
    }

}

void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<< temp -> data << " ";
        temp = temp -> next;
    }while(tail != temp);
    cout << endl;
}

int main(){
    Node* tail = NULL;

    insertNode(tail,5,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);

    print(tail);

    return 0;
}