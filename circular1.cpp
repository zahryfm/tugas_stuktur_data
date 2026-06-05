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


void traversalDanHitung(Node* head) {
    if (head == NULL) {
        cout << "List kosong." << endl;
        return;
    }

    Node* temp = head;
    int counter = 0;
    int urutan = 1;

   
    do {
        cout << "Data ke " << urutan << ": " << temp->data << endl;
        temp = temp->next;
        counter++;
        urutan++;
    } while (temp != head); 

    cout << "Jumlah data: " << counter << endl;
    cout << "Koneksi terakhir: " << temp->data << " kembali ke " << temp->next->data << " (Head)" << endl;
}

int main() {
    Node* head = NULL;

    tambahNode(&head, 10);
    tambahNode(&head, 20);
    tambahNode(&head, 30);

    traversalDanHitung(head);

    return 0;
}
