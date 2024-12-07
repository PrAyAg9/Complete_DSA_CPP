#include <iostream>
#include <map>
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

void removeLL(Node* &head,Node* &point){
    Node* temp = head;
    while(temp -> next != point){
        temp = temp -> next;
    }
    temp -> next = point -> next;
    point -> next = NULL;
    delete point;
}

void removeDUplicates(Node* &head){
    if (head == NULL)return;
    Node* temp  = head;
    Node* prev = NULL;
    map<int, bool>visited;
    while(temp!= NULL){
        if (visited[temp->data] == true){
            removeLL(head,temp);
        }
        visited[temp->data] = true;
        temp = temp -> next;
    }

}

class Solution {
public:
    Node* deleteDuplicates(Node* head) {
        // empty list
        if (head == NULL) {
            return head;
        }
        // non-empty list
        Node* curr = head;

        while (curr != NULL && curr->next != NULL) {
            if (curr->data == curr->next->data) {
                // Ye save karna bhul ja raha tha pajj=u
                Node* next = curr->next->next;
                delete (curr->next);
                curr->next = next;

            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};

int main(){
    Node* newNode = new Node(4);
    Node* head = newNode;
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtHead(head,1);
    print (head);

    removeDUplicates(head);
    print(head);

}


