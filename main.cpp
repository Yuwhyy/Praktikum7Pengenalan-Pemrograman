#include <iostream>
using namespace std;

int main() {
    int stok = 0; // stok awal mie instan
    int pilihan;
    int jumlah;

    cout << "=== PROGRAM PENGELOLAAN STOK WARUNG ===" << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah stok mie instan" << endl;
        cout << "2. Kurangi stok mie instan" << endl;
        cout << "3. Lihat stok mie instan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Masukkan jumlah mie instan yang ditambahkan: ";
                cin >> jumlah;
                if (jumlah > 0) {
                    stok += jumlah;
                    cout << "Stok berhasil ditambahkan. Stok sekarang: " << stok << endl;
                } else {
                    cout << "Jumlah harus lebih dari 0!" << endl;
                }
                break;

            case 2:
                cout << "Masukkan jumlah mie instan yang dikurangi: ";
                cin >> jumlah;
                if (jumlah > 0) {
                    if (jumlah <= stok) {
                        stok -= jumlah;
                        cout << "Stok berhasil dikurangi. Stok sekarang: " << stok << endl;
                    } else {
                        cout << "Stok tidak cukup! Stok saat ini: " << stok << endl;
                    }
                } else {
                    cout << "Jumlah harus lebih dari 0!" << endl;
                }
                break;

            case 3:
                cout << "Stok mie instan saat ini: " << stok << endl;
                break;

            case 4:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid! Silakan pilih 1-4." << endl;
                break;
        }

    } while (pilihan != 4);

    return 0;
}