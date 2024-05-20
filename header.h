#ifndef header.h
#define header.h

#include <iostream>
#include <string>

using namespace std;

struct Node {
    string nama;
    int kehadiran[14];
    Node* next;
};

class Mahasiswa {
public:
    Mahasiswa();
    void tambahData(string nama);
    void tambahKehadiran(string nama, int pertemuan, int jumlah);
    void cetakData();
private:
    Node* head;
};

#endif

