#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void traverse(struct Node* ptr) {
    while (ptr != NULL) {
        cout << "The element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node* insertbeg(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main() {
    struct Node* head = NULL;
    int numNodes, data;
    
    cout << "Enter the number of nodes: ";
    cin >> numNodes;
 for (int i = 0; i < numNodes; i++) {
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> data;
        head = insertbeg(head, data);
    }

    cout << "Linked list elements:" << endl;
    traverse(head);

    return 0;
}
