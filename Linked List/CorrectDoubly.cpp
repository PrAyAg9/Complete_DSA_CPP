#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

// Calculate length of the linked list
int lengthOfLL(Node* &head) {
    Node* temp = head;
    int len = 0;  // Fix: Initialize to 0
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

// Insert at head
void insertAtHead(Node* &head, int value) {
    Node* temp = new Node(value);
    if (head == NULL) {
        head = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &head, Node* &tail, int value) {
    if (tail == NULL) {
        Node* temp = new Node(value);
        head = tail = temp;  // Fix: Update both head and tail
        return;
    }
    Node* temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insert at middle
void insertAtMiddle(Node* &head, Node* &tail, int position, int data) {
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    // Handle tail insertion
    if (temp->next == NULL) {
        insertAtTail(head, tail, data);
        return;
    }

    // Insert in the middle
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = nodeToInsert;
    }
    temp->next = nodeToInsert;
}

// Print linked list
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 8);
    insertAtMiddle(head, tail, 6, 6);  // Valid position check required
    insertAtMiddle(head, tail, 7, 7);
    insertAtMiddle(head, tail, 1, 0);
    insertAtMiddle(head, tail, 10, 9);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    print(head);

    return 0;
}
