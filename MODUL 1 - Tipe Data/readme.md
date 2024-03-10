# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
Tipe data adalah konsep fundamental dalam pemrograman yang digunakan untuk menyimpan informasi dan melakukan operasi pada data. Tipe data menentukan jenis nilai yang dapat disimpan dalam variabel, serta jenis operasi yang dapat dilakukan pada nilai tersebut. Tipe data berfungsi untuk beberapa hal penting dalam pengembangan perangkat lunak, antara lain:
1. Pengalokasian memori. Setiap tipe data memerlukan jumlah memori yang berbeda untuk disimpan. Misalnya, tipe data integer biasanya memerlukan lebih sedikit memori daripada tipe data float.
2. Validasi data. Dengan menentukan tipe data yang tepat, program bisa memastikan bahwa data yang diterima sesuai dengan yang diinginkan.

### Tipe Data Primitif
Tipe data primitif adalah komponen fundamental dalam pemrograman yang mendasari representasi nilai dasar dalam sebuah program. Mereka adalah elemen dasar dari struktur data, yang memberikan fondasi bagi pembuatan algoritma, pengolahan data, dan logika program secara keseluruhan. Tipe data primitif mencakup berbagai jenis, seperti integer untuk merepresentasikan bilangan bulat, float dan double untuk bilangan riil, char untuk karakter, dan bool untuk nilai kebenaran. Tipe data primitif adalah tipe data yang hanya mampu menyimpan satu nilai pada setiap satu variabel dan tipe data ini ini merupakan tipe data dasar yang  sering digunakan program [1]. Tipe data primitif juga mendukung berbagai operasi dasar, termasuk operasi aritmatika, pembandingan, dan logika. Misalnya, kita dapat melakukan operasi penjumlahan pada integer, perkalian pada float, atau pembandingan antara dua nilai menggunakan operator pembanding [2]. Ketika kita menggunakan tipe data primitif dalam program, kita mengalokasikan ruang memori yang sesuai untuk menyimpan nilai-nilai ini. Tipe data primitif umumnya memiliki ukuran yang tetap, yang terdefinisi oleh bahasa pemrograman yang digunakan. Misalnya, integer mungkin memiliki ukuran 4 byte pada kebanyakan platform, sementara float biasanya menggunakan 4 byte juga, dan double menggunakan 8 byte. Pemahaman yang mendalam tentang tipe data primitif penting karena memengaruhi kinerja dan perilaku program secara keseluruhan. Mengetahui bagaimana tipe data primitif dikelola oleh komputer, bagaimana ruang memori dialokasikan, dan bagaimana operasi dilakukan akan membantu pengembang untuk mengoptimalkan kode. 

### Tipe Data Abstrak
Tipe data abstrak adalah tipe data yang didefinisikan dalam suatu sistem pemrograman, yang dapat digunakan untuk menyimpan dan mengelola data. Tipe data abstrak ini memiliki beberapa karakteristik yang membuatnya berbeda dengan tipe data primitive, yaitu dapat didefinisikan oleh pengguna, dapat memiliki properti dan metode, dan dapat mengelola data dengan lebih baik dan lebih efisien. Beberapa contoh tipe data abstrak yang umum digunakan dalam pemrograman termasuk:

1. Stack (Tumpukan): Tumpukan adalah tipe data abstrak yang memungkinkan penyimpanan dan pengambilan elemen dalam urutan Last-In-First-Out (LIFO). Operasi dasar yang terkait dengan tumpukan adalah push (menambahkan elemen ke tumpukan) dan pop (mengambil elemen dari tumpukan).
2. Queue (Antrian): Antrian adalah tipe data abstrak yang memungkinkan penyimpanan dan pengambilan elemen dalam urutan First-In-First-Out (FIFO) [3]. Operasi dasar yang terkait dengan antrian adalah enqueue (menambahkan elemen ke antrian) dan dequeue (mengambil elemen dari antrian).
3. List (Daftar): List adalah tipe data abstrak yang memungkinkan penyimpanan dan pengambilan elemen dalam urutan tertentu. Operasi dasar yang terkait dengan daftar meliputi penambahan elemen, penghapusan elemen, dan pencarian elemen.

Struktur data dan kelas (class) adalah dua konsep yang berbeda dalam pemrograman, dan keduanya memiliki hubungan dengan tipe data abstrak, meskipun dengan cara yang berbeda.

### Tipe Data Koleksi
Tipe data koleksi adalah kategori penting dalam pengembangan perangkat lunak yang mencakup berbagai struktur data yang dirancang untuk menyimpan dan mengelola sejumlah besar nilai atau objek. Struktur data koleksi memainkan peran yang krusial dalam pemrograman karena memungkinkan para pengembang untuk mengorganisasi dan memanipulasi data dengan cara yang efisien dan terstruktur [4]. Berbagai jenis tipe data koleksi meliputi array, list, set, tuple, dictionary, dan banyak lagi. 
1. Array adalah struktur data yang terdiri dari kumpulan elemen dengan tipe data yang sama, diindeks secara linier, dan memiliki ukuran tetap. Array umumnya digunakan untuk menyimpan sekuensial dari elemen-elemen dengan tipe data yang serupa. 
2. List, di sisi lain, mirip dengan array tetapi memiliki ukuran yang dinamis, yang berarti elemen dapat ditambahkan atau dihapus dari list sesuai kebutuhan. List memberikan fleksibilitas yang lebih besar dalam menyimpan berbagai jenis data dalam urutan tertentu.
3. Set adalah koleksi elemen unik tanpa urutan tertentu, yang berguna untuk menyimpan kumpulan nilai yang unik dan melakukan operasi matematika set seperti gabungan, irisan, dan perbedaan. 
4. Tuple adalah struktur data yang mirip dengan list, namun bersifat immutable (tidak dapat diubah setelah pembuatannya), sehingga cocok digunakan untuk menyimpan data yang bersifat statis atau tidak berubah.  
5. Dictionary adalah struktur data yang memetakan kunci unik ke nilai-nilai terkait, yang sangat berguna untuk menyimpan data yang memiliki struktur pasangan kunci-nilai.

## Guided 1
### Tipe Data Primitif

![g full1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b2ea1f35-6fdb-484a-885a-2cc39f6b422a)

```C++
#include <iostream>
using namespace std;
 main()
 {   
     char op;
     float num1, num2;
     cin >> op;
     cin >> num1 >> num2;
     switch (op)
     {
     case '+':
         cout << num1 + num2;
         break;
     case '-' :
         cout << num1 - num2;
         break;
     case '*' :
         cout << num1 * num2;
         break;
     case '/' :
         cout << num1 / num2;
         break;
     default:
         cout << "Error operator is not correct";
     }
     return 0;
 }
```
### Output 
![guided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/6e6cf31b-33ce-46d9-b547-ab93cbea98f3)

Kode di atas Program ini meminta pengguna memasukkan operator matematika dan dua angka. Kemudian, berdasarkan operator yang dipilih, program akan melakukan operasi matematika yang sesuai (penjumlahan, pengurangan, perkalian, atau pembagian) pada dua angka tersebut. Setelah menerima input dari, program akan melakukan operasi matematika sesuai dengan operator yang dipilih. Misalnya operator yang dipilih adalah '+', program akan menambahkan angka pertama dan angka kedua. Jika operator yang dipilih adalah '-', program akan mengurangi angka pertama dengan angka kedua. Jika operator yang dipilih adalah '*', program akan menghasilkan angka pertama kali dengan angka kedua. Jika operator yang dipilih adalah '/', program akan membagi angka pertama dengan angka kedua. Jika operator tidak valid, program akan menampilkan pesan kesalahan. Setelah itu, program akan berakhir dengan nilai 0. 

## Guided 2
### Tipe Data Abstark
![g full2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8ac17810-ad19-4646-8e7a-b1f5bbf941da)

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
### Output

![guided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/781ab100-47c1-48e8-9d58-8773fc7d9bc9)

Kode di atas adalah sebuah program yang menggunakan struktur (struct) untuk menyimpan informasi tentang mahasiswa. Program tersebut memberikan gambaran praktis bagaimana struktur digunakan untuk membentuk tipe data baru yang dapat menggabungkan elemen-elemen dengan tipe data yang berbeda.  Struktur Mahasiswa memiliki tiga anggota: name, address, dan age, yang digunakan untuk menyimpan nama, alamat, dan usia mahasiswa. Dalam fungsi main(), dua variabel mhs1 dan mhs2 bertipe Mahasiswa dideklarasikan untuk merepresentasikan dua mahasiswa. Nilai-nilai untuk masing-masing anggota dari kedua variabel diisi, dan kemudian informasi tentang masing-masing mahasiswa dicetak menggunakan fungsi printf(). Setelah itu, program mengembalikan nilai 0 untuk menandakan bahwa eksekusi program berhasil. 

## Guided 3
### Tipe Data Koleksi

![g full3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/a64f8ef4-2d3a-4f55-9d4a-6101667c62c5)

```C++
#include <iostream>
using namespace std;
int main()
{

    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
### Output 
![guided3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/cc3384c2-c707-4723-86d1-8e06d633d9a8)

Kode di atas  menggunakan array untuk menyimpan nilai.  Array nilai bertipe int dan memiliki panjang 5. Dalam fungsi main(), array nilai bertipe int dideklarasikan dan diinisialisasi dengan nilai 23, 50, 34, 78, dan 90. Setelah itu, informasi array nilai dicetak menggunakan cout. Informasi array nilai dicetak menggunakan cout. Informasi array dicetak satu per satu, mulai dari nilai pertama hingga nilai kelima. Setelah informasi array dicetak, program mengembalikan nilai 0 untuk menandakan bahwa eksekusi program berhasil.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

![ung full1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5a0bae32-a541-44b7-a2a7-663d8d270dcf)

```C++
#include <iostream>
using namespace std;

// Menentukan apakah sebuah bilangan bulat positif, negatif, atau nol
void cekBilangan(int bil) {
    if (bil > 0)
        cout << bil << " adalah bilangan positif." << endl;
    else if (bil < 0)
        cout << bil << " adalah bilangan negatif." << endl;
    else
        cout << bil << " adalah nol." << endl;
}

// Menghitung rata-rata 
float hitungRataRata(float a, float b) {
    return (a + b) / 2.0;
}

int main() {
    int bilangan;
    float num1, num2;

    // Input bilangan bulat
    cout << "Masukkan angka ";
    cin >> bilangan;
    cekBilangan(bilangan);

    // Input dua bilangan pecahan
    cout << "Masukkan angka: ";
    cin >> num1 >> num2;

    // Menghitung rata-rata 
    float average = hitungRataRata(num1, num2);
    cout << "Rata-rata dari " << num1 << " dan " << num2 << " adalah: " << average << endl;

    return 0;
}
```
### Output
![unguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/df465e76-4460-41fd-a17b-8c331b352c42)

Kode program diatas terdiri dari dua fungsi. Fungsi pertama, cekBilangan(), digunakan untuk menentukan apakah sebuah bilangan bulat positif, negatif, atau nol. Fungsi kedua, hitungRataRata(), digunakan untuk menghitung rata-rata dari dua bilangan pecahan. Di dalam fungsi main(), pengguna diminta untuk memasukkan sebuah bilangan bulat dan dua bilangan pecahan. Setelah memasukkan bilangan-bilangan tersebut, program memanggil fungsi cekBilangan() untuk menentukan jenis bilangan bulat yang dimasukkan. Kemudian, program memanggil fungsi hitungRataRata() untuk menghitung rata-rata dari dua bilangan pecahan yang dimasukkan pengguna. Hasil rata-rata dari dua bilangan pecahan kemudian dicetak ke layar.

Kesimpulan:
Dari contoh program di atas, kita dapat melihat penggunaan tipe data primitif bool untuk menentukan jenis bilangan (positif, negatif, atau nol) dan tipe data float untuk menyimpan bilangan pecahan. Kombinasi tipe data  primitif ini memungkinkan program untuk melakukan operasi logika dan perhitungan matematika dengan efisien dan akurat.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

![ung full2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/407a2ddc-8c40-4f2e-9690-159ad75ae89e)

```C++
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
        cout << "Merek: " << merek << endl;
        cout << "Warna: " << warna << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
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

    return 0;
}
```
### Output
![unguided2a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/938c0713-4b6f-4f54-b925-ea17d64c4f47)

Dalam pemrograman berorientasi objek (OOP), class adalah sebuah blueprint atau cetak biru yang digunakan untuk membuat objek. Class mendefinisikan atribut (data) dan metode (fungsi) yang digunakan untuk mengoperasikan objek yang akan dibuat. Sebuah class dapat memiliki atribut (variabel) dan metode (fungsi) yang mendefinisikan perilaku objek tersebut. Class memungkinkan untuk melakukan enkapsulasi, yaitu menyembunyikan detail implementasi dan hanya menampilkan antarmuka yang diperlukan. Atribut biasanya merepresentasikan data yang dimiliki oleh objek, sedangkan metode adalah perilaku atau tindakan yang dapat dilakukan oleh objek tersebut. Objek dibuat berdasarkan class, dan setiap objek dapat memiliki data yang unik. 

```C++
// Struct
#include <iostream>
#include <string>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;

    // Metode untuk menampilkan informasi mahasiswa
    void tampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};

int main() {
    // Membuat objek dari struct Mahasiswa
    Mahasiswa mhs1;
    mhs1.nama = "Ferdi";
    mhs1.umur = 19;
    mhs1.jurusan = "Sains Data";

    // Menampilkan informasi mahasiswa
    mhs1.tampilkanInfo();

    return 0;
}
```
### Output
![unguided2b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ab597fb6-ded1-4a7c-a084-f282e81ad5cd)

Struct adalah tipe data yang digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda ke dalam satu unit. Secara umum, struct mirip dengan class, tetapi memiliki perbedaan utama dalam sifat default visibilitasnya. Secara default, semua anggota dalam struct adalah public, sementara dalam class adalah private. Struct digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda ke dalam satu unit, dan sering digunakan untuk membuat data sederhana dengan default visibilitas yang public.

Kesimpulan :
Class digunakan untuk mendefinisikan struktur data yang kompleks dengan atribut dan metode yang terkait. Struct digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda ke dalam satu unit, dan sering digunakan untuk membuat data sederhana dengan default visibilitas yang public. Keduanya digunakan dalam pemrograman C++ untuk mengorganisir dan mengelola data secara terstruktur, dengan class lebih fleksibel dan mendukung encapsulation, sementara struct lebih sederhana dan cocok untuk data dengan struktur yang sederhana.


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

![ung full3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d96e3af9-1a35-4f65-b569-d8276b083fc6)

```C++
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map untuk menyimpan data siswa (nama sebagai kunci, nilai sebagai umur)
    map<string, int> dataSiswa;

    // Menambahkan data siswa ke dalam map
    dataSiswa["gustap"] = 27;
    dataSiswa["joel"] = 15;
    dataSiswa["munib"] = 18;
    dataSiswa["ahmad"] = 24;

    // Menampilkan umur siswa menggunakan map
    cout << "Umur gustap: " << dataSiswa["gustap"] << " tahun" << endl;
    cout << "Umur joel: " << dataSiswa["joel"] << " tahun" << endl;
    cout << "Umur munib: " << dataSiswa["munib"] << " tahun" << endl;
    cout << "Umur ahmad: " << dataSiswa["ahmad"] << " tahun" << endl;

    return 0;
}

```
### Output 
![unguided3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/e8e7fac7-3932-4ef9-9405-21cab06761c7)

Kode di atas menggunakan pustaka iostream dan map untuk membuat dan mengelola kumpulan data siswa berupa nama dan umur. Pada awalnya, sebuah map dengan tipe data map <string,int> dideklarasikan untuk menyimpan data siswa, di mana kunci berupa nama siswa (bertipe string) dan nilai berupa umur siswa (bertipe integer). Kemudian, data siswa ditambahkan ke dalam map menggunakan operator indeks, di mana nama siswa menjadi kunci dan umur siswa menjadi nilainya. Setelah itu, program menampilkan umur siswa dengan menggunakan kunci yang sesuai dari map tersebut. Hasilnya adalah umur dari setiap siswa yang ditampilkan ke layar dengan disertai keterangan tahun.
### Perbedaan antara Array dan Map:
#### 1.Representasi Data
Array adalah struktur data terdiri dari kumpulan elemen dengan tipe data yang sama, yang tersusun secara berurutan dalam memori. Sedangkan map adalah struktur data terdiri dari pasangan kunci-nilai, di mana setiap kunci unik dan memiliki nilai yang terkait dengannya.
#### Pengaksesan Data
Pada array data diakses berdasarkan indeks, yang merupakan posisi atau lokasi elemen dalam array. Sedangkan map, data diakses berdasarkan kunci, yang merupakan nilai unik yang terkait dengan setiap elemen.
#### Ukuran
Array memiliki ukuran tetap yang didefinisikan pada saat deklarasi, dan tidak dapat diubah setelahnya. Ukuran map dapat dinamis, karena dapat menambahkan atau menghapus pasangan kunci-nilai sesuai kebutuhan.
#### Kompleksitas Pencarian
Pencarian dalam array memiliki kompleksitas waktu O(n), di mana n adalah jumlah elemen dalam array, karena pencarian dilakukan secara sekuensial. Pencarian dalam map memiliki kompleksitas waktu O(log n) untuk map yang diimplementasikan dengan struktur data tree (seperti std::map), atau O(1) untuk map yang diimplementasikan dengan hash table (seperti std::unordered_map). Hal ini membuat map lebih efisien dalam pencarian, terutama untuk jumlah data yang besar.

## Kesimpulan
Data primitif, data abstrak, dan data koleksi merupakan komponen penting dalam pengembangan perangkat lunak. Data primitif menyediakan dasar untuk menyimpan nilai sederhana seperti angka dan teks, sementara data abstrak memungkinkan pemrogram untuk mengorganisasi dan memanipulasi data secara lebih terstruktur melalui penggunaan struktur data kompleks seperti class dan struktur data khusus. Di sisi lain, data koleksi menyediakan cara yang efisien untuk menyimpan dan mengelola sejumlah besar data dalam program, dengan berbagai struktur seperti array, list, set, dan dictionary. Ketiga jenis data ini memainkan peran penting dalam pengembangan perangkat lunak, dan pemahaman yang baik tentang masing-masing jenis data ini penting untuk merancang dan mengimplementasikan solusi yang efisien dan efektif dalam pemrograman.

## Referensi
[1] Antonius   Rachmat   C.   (2010).   Algoritma   dan Pemrograman   dengan   Bahasa   C. Yogyakarta: AndiOffset.

[2] Kernighan, B. W., & Ritchie, D. M. (1988). The C programming language (2nd ed.). Prentice Hall.

[3] Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). Introduction to Algorithms (3rd ed.). MIT Press.

[4] Brown, C., & Jones, D. (2019). Exploring the Role of Collections in Data Management Systems. International Journal of Data Science and Management, 7(2), 112-127.