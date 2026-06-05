#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;
};


void tambahNode(Node** head, int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
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

    while (temp != NULL) {
        
        cout << "Data ke " << urutan << ": " << temp->data << endl;

        
        if (temp->data > terbesar) {
            terbesar = temp->data;
        }

        temp = temp->next;
        urutan++;
    }

    
    cout << "Terbesar adalah : " << terbesar << endl;
}

int main() {
    Node* head = NULL;

    
    tambahNode(&head, 10);
    tambahNode(&head, 20);
    tambahNode(&head, 30);

    
    cariTerbesar(head);

    return 0;
}
