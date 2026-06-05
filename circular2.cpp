#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


void tambahNode(Node** head, int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head; 
    } else {
        Node* temp = *head;
        
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head; 
    }
}


void cariTerbesar(Node* head) {
    if (head == NULL) {
        cout << "List kosong." << endl;
        return;
    }

    Node* temp = head;
    int urutan = 1;
    int terbesar = head->data;

    cout << "--- Traversal List Sirkular ---" << endl;
    
    
    do {
        cout << "Data ke " << urutan << ": " << temp->data << endl;

        if (temp->data > terbesar) {
            terbesar = temp->data;
        }

        temp = temp->next;
        urutan++;
    } while (temp != head); 

    cout << "-------------------------------" << endl;
    cout << "Terbesar adalah : " << terbesar << endl;
}

int main() {
    Node* head = NULL;

    tambahNode(&head, 15);
    tambahNode(&head, 50);
    tambahNode(&head, 25);
    tambahNode(&head, 30);

    cariTerbesar(head);

    return 0;
}
