#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
  string judulBuku[5]; 
  string pengarang[5]; 
  string penerbit[5]; 
  int tebalHalaman[5]; 
  int hargaBuku[5]; 
};

int main() {
  buku favorit;

  // Mengisi data ke dalam variabel favorit
  favorit.judulBuku[0] = "The Alpha Girl's Guide";
  favorit.judulBuku[1] = "Laskar Pelangi";
  favorit.judulBuku[2] = "Sejarah Dunia yang Disembunyikan";
  favorit.judulBuku[3] = "You Do You";
  favorit.judulBuku[4] = "Atomic Habits";

  favorit.pengarang[0] = "Henry Manampiring";
  favorit.pengarang[1] = "Andrea Hirata";
  favorit.pengarang[2] = "Jonathan Black";
  favorit.pengarang[3] = "Fellexandro Ruby";
  favorit.pengarang[4] = "Clear James";

  favorit.penerbit[0] = "Gagas Media";
  favorit.penerbit[1] = "Laskar Pustaka";
  favorit.penerbit[2] = "Alvabet";
  favorit.penerbit[3] = "Gramedia Pustaka Utama";
  favorit.penerbit[4] = "Penguin Books";

  favorit.tebalHalaman[0] = 253;
  favorit.tebalHalaman[1] = 336;
  favorit.tebalHalaman[2] = 636;
  favorit.tebalHalaman[3] = 252;
  favorit.tebalHalaman[4] = 352;

  favorit.hargaBuku[0] = 79000;
  favorit.hargaBuku[1] = 55000;
  favorit.hargaBuku[2] = 135000;
  favorit.hargaBuku[3] = 120000;
  favorit.hargaBuku[4] = 108000;

  // Menampilkan informasi buku favorit
  cout << "\tDaftar Buku Favorit Saya" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "\nBuku ke-" << i + 1 << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku[i] << endl;
    cout << "\tPengarang : " << favorit.pengarang[i] << endl;
    cout << "\tPenerbit : " << favorit.penerbit[i] << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman[i] << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku[i] << endl;
  }

  return 0;
}
