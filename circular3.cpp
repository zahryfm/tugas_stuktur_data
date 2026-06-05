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


void hitungTotal(Node* head) {
    if (head == NULL) {
        cout << "List kosong." << endl;
        return;
    }

    Node* temp = head;
    int total = 0;
    int urutan = 1;

    cout << "--- Traversal List Sirkular ---" << endl;
    
    
    do {
        cout << "Data ke " << urutan << ": " << temp->data << endl;
        
        total += temp->data; 
        
        temp = temp->next;
        urutan++;
    } while (temp != head); 

    cout << "-------------------------------" << endl;
    cout << "Total nilai adalah : " << total << endl;
}

int main() {
    Node* head = NULL;

   
    tambahNode(&head, 10);
    tambahNode(&head, 20);
    tambahNode(&head, 30);
    tambahNode(&head, 40);

    
    hitungTotal(head);

    return 0;
}
