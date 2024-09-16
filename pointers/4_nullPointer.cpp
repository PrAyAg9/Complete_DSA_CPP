#include <iostream>
using namespace std;

int main(){
    int* ptr = nullptr; // Initialize a null pointer

    // Older C++:
    int* ptr2 = NULL; // Initialize a null pointer

    struct Node {
        int data;
        Node* next;
    };

    Node* head = nullptr; // Initially, the list is empty

    // Add nodes to the list
    // ...

    // Iterate through the list
    Node* current = head;
    while (current != nullptr) {
        // Process the current node
        current = current->next;
    }
}