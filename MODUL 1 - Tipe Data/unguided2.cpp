// Class
#include <iostream>
using namespace std;

// Contoh class
class Mobil {
public:
    string merek;
    string warna;
    int tahunProduksi;

    void tampilkanInfo() {
        cout << "=== Mobil ====" << endl;
        cout << "Merek: " << merek << endl;
        cout << "Warna: " << warna << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
    }
};

// Definisi struct
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;

    // Metode untuk menampilkan informasi mahasiswa
    void tampilkanInfo() {
        cout << "\n=== Mahasiswa ====" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};

int main() {
    // Membuat objek dari class Mobil
    Mobil mobil1;
    mobil1.merek = "Wuling";
    mobil1.warna = "Putih";
    mobil1.tahunProduksi = 2021;

    // Menampilkan informasi mobil
    mobil1.tampilkanInfo();
    
    // Membuat objek dari Struct Mhs
    Mahasiswa mhs1;
    mhs1.nama = "Ferdi";
    mhs1.umur = 19;
    mhs1.jurusan = "Sains Data";

    // Menampilkan informasi mahasiswa
    mhs1.tampilkanInfo();

    return 0;
}