#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};


void insertBelakang(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
        newNode->prev = *head;
    } else {
        Node* last = (*head)->prev; 

        newNode->next = *head;      
        newNode->prev = last;       
        
        last->next = newNode;       
        (*head)->prev = newNode;    
    }
}


void tampilkanList(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    cout << "Maju: ";
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(kembali ke " << head->data << ")" << endl;

    Node* last = head->prev;
    cout << "Mundur: ";
    temp = last;
    do {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    } while (temp != last);
    cout << "(kembali ke " << last->data << ")" << endl;
}

int main() {
    Node* head = NULL;
    
    insertBelakang(&head, 10);
    insertBelakang(&head, 20);
    insertBelakang(&head, 30);

    cout << "Data Double Circular Linked List:" << endl;
    tampilkanList(head);

    return 0;
}
