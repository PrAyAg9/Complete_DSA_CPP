#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

// Reverse in groups of size k
Node* reverseLLK(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* forw = NULL;
    int count = 0;

    // Reverse the first k nodes
    while (curr != NULL && count < k) {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
        count++;
    }

    // Recursively reverse the remaining list
    if (forw != NULL) {
        head->next = reverseLLK(forw, k);
    }

    // Return the new head of the reversed list
    return prev;
}

// Print function for linear linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at the head of the linked list
void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

int main() {
    Node* head = new Node(4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 12);
    insertAtHead(head, 13);

    cout << "Original List: ";
    print(head);

    // Reverse in groups of size 2
    head = reverseLLK(head, 2);
    cout << "Reversed in Groups of 2: ";
    print(head);

    return 0;
}
