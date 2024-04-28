#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    
    const int jumlahBuku = 2; // Menentukan jumlah buku yang ingin disimpan
    buku favorit[jumlahBuku]; 

    // Mengisi data ke dalam array variabel favorit
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << "Masukkan informasi buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, favorit[i].judulBuku);
        cout << "Pengarang: ";
        getline(cin, favorit[i].pengarang);
        cout << "Penerbit: ";
        getline(cin, favorit[i].penerbit);
        cout << "Tebal Halaman: ";
        cin >> favorit[i].tebalHalaman;
        cout << "Harga Buku: Rp ";
        cin >> favorit[i].hargaBuku;
        cin.ignore(); 
    }

    // Menampilkan informasi buku favorit
    cout << "\n\tInformasi Buku Favorit" << endl;
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku : " << favorit[i].judulBuku << endl;
        cout << "Pengarang : " << favorit[i].pengarang << endl;
        cout << "Penerbit : " << favorit[i].penerbit << endl;
        cout << "Tebal Halaman: " << favorit[i].tebalHalaman << " halaman" << endl;
        cout << "Harga Buku : Rp " << favorit[i].hargaBuku << endl;
        cout << endl;
    }

    return 0;
}
