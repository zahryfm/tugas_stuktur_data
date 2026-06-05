#include <iostream>

using namespace std;

	
const int MAX_UNDO = 10;      
const int MAX_CHAR = 100;     

char stack[MAX_UNDO][MAX_CHAR]; 
int top = -1;                   


void copyText(char* tujuan, const char* sumber) {
    int i = 0;
    while (sumber[i] != '\0' && i < MAX_CHAR - 1) {
        tujuan[i] = sumber[i];
        i++;
    }
    tujuan[i] = '\0';
}

int main() {
    int pilihan;
    char inputTeks[MAX_CHAR];

    while (true) {
        cout << "\n===== TEXT EDITOR =====" << endl;
        cout << "1. Ketik Teks" << endl;
        cout << "2. Undo" << endl;
        cout << "3. Tampilkan Dokumen" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore(); 

        if (pilihan == 1) {
            if (top < MAX_UNDO - 1) {
                cout << "Masukkan teks: ";
                cin.getline(inputTeks, MAX_CHAR);
                
                top++;
                copyText(stack[top], inputTeks);
                cout << "Teks tersimpan." << endl;
            } else {
                cout << "Stack penuh! Tidak bisa menambah teks." << endl;
            }
        } 
        else if (pilihan == 2) {
            if (top >= 0) {
                top--;
                cout << "Undo berhasil." << endl;
            } else {
                cout << "Tidak ada yang bisa di-undo!" << endl;
            }
        } 
        else if (pilihan == 3) {
            if (top >= 0) {
                cout << "\nIsi Dokumen: " << stack[top] << endl;
            } else {
                cout << "\nDokumen Kosong." << endl;
            }
        } 
        else if (pilihan == 4) {
            break;
        } 
        else {
            cout << "Pilihan salah!" << endl;
        }
    }

    return 0;
}
