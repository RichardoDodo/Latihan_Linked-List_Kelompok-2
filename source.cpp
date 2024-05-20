#include "header.h"

Mahasiswa::Mahasiswa() {
    head = NULL;
}

void Mahasiswa::tambahData(string nama) {
    Node* newNode = new Node;
    newNode->nama = nama;
    for(int i = 0; i < 14; i++) {
        newNode->kehadiran[i] = 0;
    }
    newNode->next = head;
    head = newNode;
}

void Mahasiswa::tambahKehadiran(string nama, int pertemuan, int jumlah) {
    Node* current = head;
    while(current != NULL) {
        if(current->nama == nama) {
            current->kehadiran[pertemuan - 1] = jumlah;
            return;
        }
        current = current->next;
    }
    cout << "Data mahasiswa tidak ditemukan." << endl;
}

void Mahasiswa::cetakData() {
    Node* current = head;
    while(current != NULL) {
        cout << "Nama: " << current->nama << endl;
        for(int i = 0; i < 14; i++) {
            cout << "Pertemuan " << i + 1 << ": " << current->kehadiran[i] << endl;
        }
        cout << endl;
        current = current->next;
    }
}

