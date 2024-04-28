 <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Secara umum, struktur atau struct dalam pemrograman adalah fitur yang memungkinkan pengelompokkan beberapa variabel dengan berbagai tipe data ke dalam satu unit yang lebih besar. Ini memungkinkan pembuatan tipe data baru yang terdiri dari anggota-anggota dengan tipe data yang berbeda. Struct dalam bahasa pemrograman sering juga disebut sebagai rekaman (record) dalam beberapa konteks [1]. Ini karena struktur tersebut menggabungkan beberapa variabel dengan tipe data yang berbeda ke dalam satu entitas yang terorganisir. Konsep ini mirip dengan bagaimana sebuah "rekaman" dalam dunia nyata bisa memiliki beberapa atribut yang berbeda, misalnya sebuah rekaman mahasiswa bisa memiliki atribut nama, NIM, fakultas, dan program studi. Dalam pemrograman, kita menggunakan struktur untuk merepresentasikan entitas semacam itu dalam program komputer. Dengan struct, kita bisa mengatur data kita dengan lebih terstruktur. Bayangkan jika kita memiliki banyak informasi tentang produk dalam sebuah toko. Dengan struct, seseorang bisa mengelompokkan semua informasi ini menjadi satu entitas yang lebih besar, seperti produk. Ini membuatnya lebih mudah untuk memahami dan mengelola data. Ada beberapa keuntungan menggunakan struct diantaranya: 

### 1.  Pengelompokkan Data

<p align="justify">
Struct memungkinkan kita untuk mengelompokkan data terkait bersama-sama. Ini sangat berguna ketika Anda memiliki sejumlah variabel yang saling terkait dan ingin memperlakukan mereka sebagai satu kesatuan. Misalnya, dalam pengelompokan mahaiswa di kelas, Anda dapat menggunakan struct untuk menyimpan informasi seperti nama, NIM, umur, asal daerah dan informasi lainnya dalam satu unit [2].

### 2. Representasi Objek yang Lebih Mudah

<p align="justify">Dalam pemrograman berorientasi objek, struct sering digunakan untuk merepresentasikan objek dalam program. Setiap anggota struct dapat mewakili atribut atau sifat objek tertentu, sehingga struct secara efektif mewakili objek tersebut. Misalnya, Anda dapat menggunakan struct untuk membuat representasi objek motor, dengan anggota-anggota seperti merek, model, tahun, dan warna.

### 3. Fleksibilitas

 <p align="justify">Struct memungkinkan Anda untuk menyimpan berbagai jenis data dalam satu unit. Anda dapat memiliki anggota struct dengan tipe data yang berbeda-beda, seperti integer, float, string, atau bahkan struct lain. Ini memberikan fleksibilitas dalam desain dan penggunaan struktur, sehingga Anda dapat membuat struktur yang sesuai dengan kebutuhan spesifik program Anda.

### 4. Penghematan memori

 <p align="justify">Ketika Anda menggunakan struct untuk menyimpan sekumpulan data terkait, penggunaan memori dapat dioptimalkan. Struct menggabungkan variabel-variabel terkait ke dalam satu unit, sehingga dapat mengurangi overhead memori yang terkait dengan menyimpan setiap variabel secara terpisah.

### Contoh penggunaan struct:
```C++
#include <iostream>
using namespace std;

// Definisi struct Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

int main() {
    // Deklarasi variabel bertipe struct Mahasiswa
    Mahasiswa mhs1;

    // Mengisi nilai ke dalam variabel struct
    mhs1.nama = "Ferdinan";
    mhs1.umur = 18;
    mhs1.jurusan = "Sains Data";

    // Menampilkan nilai variabel struct
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << " tahun" << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;

    return 0;
}
```
<p align="justify">Dalam contoh di atas, kita menggunakan struct Mahasiswa untuk mengelompokkan informasi tentang seorang mahasiswa, seperti nama, umur, dan jurusan. Kemudian, kita mendeklarasikan variabel mhs1 bertipe Mahasiswa dan mengisi nilai ke dalam anggota-anggotanya. Akhirnya, kita menampilkan nilai-nilai tersebut.

## Guided 1
### Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

### Full code screenshoot
![guided1full](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/648fa267-2129-4185-96df-1e2656ed0ade)


```C++
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
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}
```
### Output 
![outputguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d3c45d5a-f2de-4544-ba79-61304d5caca4)


<p align="justify"> Dalam kode tersebut, kita mendefinisikan sebuah struktur buku, yang memiliki anggota-anggota seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Selanjutnya, kita mendeklarasikan sebuah variabel favorit dengan tipe buku, yang akan digunakan untuk menyimpan informasi tentang buku favorit. Setelah itu, kita mengisi data data tentang buku tersebut ke dalam variabel favorit. Terakhir, kita menampilkan informasi tentang buku favorit menggunakan perintah cout. Setiap baris mencantumkan detail tertentu tentang buku, seperti judul, pengarang, penerbit, tebal halaman, dan harga. Dengan demikian, kode tersebut menggambarkan bagaimana struct dapat digunakan untuk mengorganisir data terkait bersama-sama dalam satu unit yang lebih besar, serta bagaimana data tersebut dapat diakses dan digunakan dalam program.

## Guided 2
### Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.
![soal](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/716a8ebc-c25e-43bb-8cf1-5aedfe76eae7)

### Full code screenshoot
![guided2full](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/158b04cc-206d-4b5b-83b8-df08d50a1376)

```C++
#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}
```
### Output
![outputguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/cc20053a-bf03-4e1c-9919-a82e46947359)

<p align ="justify">Dalam kode tersebut, kita mendefinisikan tiga struktur yang berbeda yaitu hewan, hewan darat, dan hewan laut. Struktur hewan memiliki beberapa anggota seperti nama hewan, jenis kelamin, cara berkembangbiak, alat pernafasan, tempat hidup, dan karnivora atau tidak yang merepresentasikan atribut-atribut yang terkait dengan hewan secara umum. Selanjutnya, kita mendefinisikan struktur hewan darat yang memiliki atribut khusus untuk hewan darat, seperti jumlah kaki, menyusui, dan suara. Sedangkan struktur hewan laut memiliki atribut khusus untuk hewan laut, seperti bentuk sirip dan bentuk pertahanan diri. Kemudian dalam fungsi main(), kita membuat beberapa objek berdasarkan struktur yang telah didefinisikan sebelumnya. Kita membuat objek kelinci dengan sebagai hewan darat, objek ikan sebagai hewan laut, dan objek serigala sebagai tipe hewan. Setelah itu, kita mengisi nilai untuk masing-masing anggota dari setiap objek yang telah dibuat. Terakhir, kita menampilkan informasi tentang setiap objek dengan menggunakan perintah cout, termasuk informasi spesifik mengenai hewan darat dan hewan laut. Dengan demikian, kode ini menggunakan struktur untuk mengorganisir informasi tentang hewan-hewan yang berbeda dalam satu program, dan kemudian mencetak informasi tersebut ke layar agar bisa dibaca oleh pengguna.

## Unguided 

<p align="justify"> 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

### Full code screenshoot
![unguided1full](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/495c93d6-4524-4083-ad2b-d1e1507c527b)

```C++
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
```
### Output
![outputunguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/0131856b-e268-4280-a2b6-795db68f676a)


<p align="justify"> Pada kode diatas kita mendefinisikan sebuah struktur bernama buku yang memiliki lima anggota berupa array, yaitu judulBuku, pengarang, penerbit, tebal halaman, dan harga buku. Setiap anggota array ini dapat menyimpan informasi tentang lima buku yang berbeda. Kemudian dalam fungsi main(), kita membuat sebuah objek dari struktur buku dengan nama favorit. Selanjutnya, kita mengisi data ke dalam objek ini dengan memberikan nilai untuk setiap elemen array dalam anggota struktur buku. Setelah itu, kita menggunakan loop for untuk menampilkan informasi tentang setiap buku favorit ke layar. Dalam loop ini, kita mencetak judul buku, pengarang, penerbit, jumlah halaman, dan harga buku untuk setiap buku yang tersimpan dalam objek favorit. Dengan demikian, kode ini menghasilkan output yang mencetak daftar buku favorit beserta informasi-informasi terkaitnya ke layar. Setiap buku dipisahkan dengan judul "Buku ke-n", dan informasi masing-masing buku dicetak secara terstruktur menggunakan perintah cout.

<p align="justify">2.Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

### Full code screenshoot
![unguided2full](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/a2fe5d0c-1ae4-402b-bb8e-597a93fb1489)

```C++
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
```
### Output
![outputunguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d9169177-6e04-43d0-9182-973f17e9e01a)


<p align="justify">Kode di atas meminta pengguna untuk memasukkan informasi tentang dua buku favorit, seperti judul buku, pengarang, penerbit, jumlah halaman, dan harga buku. Pada awal program, kita mendefinisikan sebuah struktur bernama buku yang memiliki anggota-anggota seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Kemudian, kita mendeklarasikan sebuah array dari struktur buku dengan nama favorit, jumlah buku yang ingin disimpan kali ini adalah 2 buku. Selanjutnya, kita menggunakan loop for untuk mengisi data ke dalam array favorit. Dalam setiap iterasi loop, program meminta pengguna untuk memasukkan informasi tentang buku, seperti judul, pengarang, penerbit, jumlah halaman, dan harga buku. Data tersebut kemudian disimpan dalam elemen-elemen array favorit. Kita menggunakan getline(cin, variabel) untuk membaca input string. Hal ini memastikan bahwa semua karakter dalam baris input akan dibaca, termasuk spasi, hingga ditemui karakter newline (baris baru). Selain itu, kita tetap menggunakan cin untuk membaca masukan angka tebal halaman dan harga buku. Setelah selesai memasukkan data, program mencetak informasi tentang setiap buku favorit. Dengan menggunakan loop for, program mencetak judul buku, pengarang, penerbit, jumlah halaman, dan harga buku untuk setiap buku yang telah dimasukkan sebelumnya.

## Kesimpulan
<p align="justify">Struct dalam pemrograman memungkinkan pengelompokkan data terkait bersama-sama dalam satu unit yang lebih besar. Ini mirip dengan struktur data atau rekaman dalam dunia nyata, di mana sebuah entitas dapat memiliki beberapa atribut yang berbeda. Dengan menggunakan struct, kita dapat mengorganisir data dengan lebih terstruktur dan membuat representasi yang lebih terinci dari entitas dalam program komputer.  Mirip dengan bagaimana kita mengorganisir barang-barang di dalam kotak atau tas untuk memudahkan pengaturan, struct memungkinkan kita untuk mengatur informasi terkait ke dalam satu entitas yang lebih besar dan mudah diakses. Dengan menggunakan struct, kita dapat membuat tipe data baru yang sesuai dengan kebutuhan program kita, yang terdiri dari beberapa variabel dengan tipe data yang berbeda. 

## Referensi
[1] Riki Setiawan, Dwi Setiawan, & Ahmad Fauzan. Analisis Perbandingan Kinerja Struct dan Class dalam Pemrograman C++. Jurnal Ilmiah Teknik Informatika, 2023.

[2] Sari, R., Pangaribuan, H., & Hasibuan, R. (2020). Implementasi Struct untuk Menyimpan Data Mahasiswa dan Nilai Mata Kuliah pada Sistem Informasi Akademik. Jurnal Komputer dan Sistem Informasi, 11(1), 1-10.
