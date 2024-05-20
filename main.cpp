#include "header.h"
#include <iostream>
using namespace std;

int main() {
    Mahasiswa mahasiswa;
    int pilihan;
    string nama;
    int pertemuan, jumlah;

    while(true) {
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Tambah Kehadiran" << endl;
        cout << "3. Cetak Data Mahasiswa" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Nama: ";
                cin >> nama;
                mahasiswa.tambahData(nama);
                break;
            case 2:
                cout << "Nama: ";
                cin >> nama;
                cout << "Pertemuan: ";
                cin >> pertemuan;
                cout << "Jumlah kehadiran: ";
                cin >> jumlah;
                mahasiswa.tambahKehadiran(nama, pertemuan, jumlah);
                break;
            case 3:
                mahasiswa.cetakData();
                break;
            case 4:
                return 0;
            default:
                cout << "Pilihan tidak tersedia." << endl;
        }
    }
    return 0;
}

