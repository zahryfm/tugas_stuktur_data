#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


void insertDepan(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        Node* temp = *head;
        
        while (temp->next != *head) {
            temp = temp->next;
        }
        
        newNode->next = *head;
        temp->next = newNode; 
        *head = newNode;      
    }
}


void insertBelakang(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
        return;
    }

    Node* temp = *head;
    
    while (temp->next != *head) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->next = *head; 
}


void tampilkanList(Node* head) {
    if (head == NULL) {
        cout << "List Kosong" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    
    cout << "(kembali ke " << head->data << ")" << endl;
}

int main() {
    Node* head = NULL;
    int jumlah, nilai, dataBaru;

    cout << "Masukkan jumlah data: ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Masukkan data ke " << i << ": ";
        cin >> nilai;
        insertBelakang(&head, nilai);
    }

    cout << "\nMasukkan data yang ditambahkan di awal: ";
    cin >> dataBaru;
    insertDepan(&head, dataBaru);

    cout << "\nData setelah ditambah di awal (Sirkular):" << endl;
    tampilkanList(head);

    return 0;
}
