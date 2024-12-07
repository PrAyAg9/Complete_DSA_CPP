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
        if (this -> next != NULL){
            this -> next = NULL;
            delete next;
        }
    }
};

void circularOrNot(Node* &tail){
    // use hasp map to store key to remeber other type of linked list
}

void printCircularLL(Node* &tail){
    Node* temp = tail;
    do{
        cout<<temp-> data<<" "<<endl;
        temp = temp -> next;
    }while(temp->next!=tail);
}

int main(){
    return 0;
}