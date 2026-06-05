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


void hitungTotal(Node* head) {
    Node* temp = head;
    int total = 0;
    int urutan = 1;

    while (temp != NULL) {
        
        cout << "Data ke " << urutan << ": " << temp->data << endl;
        
        
        total += temp->data;
        
        temp = temp->next;
        urutan++;
    }

    
    cout << "Total nilai adalah : " << total << endl;
}

int main() {
    Node* head = NULL;

    
    tambahNode(&head, 10);
    tambahNode(&head, 20);
    tambahNode(&head, 30);

    
    hitungTotal(head);

    return 0;
}
