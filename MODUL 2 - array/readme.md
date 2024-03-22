 <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Array, atau larik, adalah struktur data yang digunakan untuk menyimpan sekumpulan data dengan tipe data yang sama. Bayangkan array seperti rak buku, di mana setiap rak menyimpan buku dengan jenis yang sama. Dalam pemrograman, array memungkinkan penggunanya untuk mengelompokkan data terkait dan mengaksesnya dengan mudah. Array berfungsi sebagai wadah untuk menyimpan kumpulan elemen data dengan tipe yang sama, yang diakses melalui indeks numerik yang berurutan. Kemampuan array untuk menyimpan data dengan cara yang terstruktur dan terorganisir membuatnya menjadi fondasi dalam pengembangan perangkat lunak di berbagai domain, mulai dari pemrosesan data hingga grafika komputer [1]. Array memiliki beberapa karakteristik penting, yaitu:
</p>


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
![alt text](image-1.png)

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
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/96369d36-1152-454c-a0f2-e7d9dc12c4d6)

Kode di atas Program ini meminta pengguna memasukkan operator matematika dan dua angka. Kemudian, berdasarkan operator yang dipilih, program akan melakukan operasi matematika yang sesuai (penjumlahan, pengurangan, perkalian, atau pembagian) pada dua angka tersebut. Setelah menerima input dari, program akan melakukan operasi matematika sesuai dengan operator yang dipilih. Misalnya operator yang dipilih adalah '+', program akan menambahkan angka pertama dan angka kedua. Jika operator yang dipilih adalah '-', program akan mengurangi angka pertama dengan angka kedua. Jika operator yang dipilih adalah '*', program akan menghasilkan angka pertama kali dengan angka kedua. Jika operator yang dipilih adalah '/', program akan membagi angka pertama dengan angka kedua. Jika operator tidak valid, program akan menampilkan pesan kesalahan. Setelah itu, program akan berakhir dengan nilai 0. 

## Guided 2
### Tipe Data Abstark
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ae87c844-1fa2-4f49-88aa-4be1bee4c1f6)

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

![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ebca1fe4-6f88-4ee1-a6b3-dad0ae398683)

Kode di atas adalah sebuah program yang menggunakan struktur (struct) untuk menyimpan informasi tentang mahasiswa. Program tersebut memberikan gambaran praktis bagaimana struktur digunakan untuk membentuk tipe data baru yang dapat menggabungkan elemen-elemen dengan tipe data yang berbeda.  Struktur Mahasiswa memiliki tiga anggota: name, address, dan age, yang digunakan untuk menyimpan nama, alamat, dan usia mahasiswa. Dalam fungsi main(), dua variabel mhs1 dan mhs2 bertipe Mahasiswa dideklarasikan untuk merepresentasikan dua mahasiswa. Nilai-nilai untuk masing-masing anggota dari kedua variabel diisi, dan kemudian informasi tentang masing-masing mahasiswa dicetak menggunakan fungsi printf(). Setelah itu, program mengembalikan nilai 0 untuk menandakan bahwa eksekusi program berhasil. 

## Guided 3
### Tipe Data Koleksi

![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c424d701-ef90-4c4c-b98b-b302ff8ec39d)

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
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/94cb5c2a-f6fd-4767-bf58-0eb819f2e613)

Kode di atas  menggunakan array untuk menyimpan nilai.  Array nilai bertipe int dan memiliki panjang 5. Dalam fungsi main(), array nilai bertipe int dideklarasikan dan diinisialisasi dengan nilai 23, 50, 34, 78, dan 90. Setelah itu, informasi array nilai dicetak menggunakan cout. Informasi array nilai dicetak menggunakan cout. Informasi array dicetak satu per satu, mulai dari nilai pertama hingga nilai kelima. Setelah informasi array dicetak, program mengembalikan nilai 0 untuk menandakan bahwa eksekusi program berhasil.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ebf3b41a-6fce-4aaf-9e3f-cdd80632ca6a)

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
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/9c50f8ae-c91f-4046-a04a-6292474af0af)

Kode program diatas terdiri dari dua fungsi. Fungsi pertama, cekBilangan(), digunakan untuk menentukan apakah sebuah bilangan bulat positif, negatif, atau nol. Fungsi kedua, hitungRataRata(), digunakan untuk menghitung rata-rata dari dua bilangan pecahan. Di dalam fungsi main(), pengguna diminta untuk memasukkan sebuah bilangan bulat dan dua bilangan pecahan. Setelah memasukkan bilangan-bilangan tersebut, program memanggil fungsi cekBilangan() untuk menentukan jenis bilangan bulat yang dimasukkan. Kemudian, program memanggil fungsi hitungRataRata() untuk menghitung rata-rata dari dua bilangan pecahan yang dimasukkan pengguna. Hasil rata-rata dari dua bilangan pecahan kemudian dicetak ke layar.

Kesimpulan:
Dari contoh program di atas, kita dapat melihat penggunaan tipe data primitif bool untuk menentukan jenis bilangan (positif, negatif, atau nol) dan tipe data float untuk menyimpan bilangan pecahan. Kombinasi tipe data  primitif ini memungkinkan program untuk melakukan operasi logika dan perhitungan matematika dengan efisien dan akurat.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/540fdfac-4a96-43d2-b411-6528589ae46f)

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
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d49105cf-dabd-4297-8ed0-e54527783ffc)

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
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/25e952f2-23e4-4570-b047-1bf0b5285d5f)

Struct adalah tipe data yang digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda ke dalam satu unit. Secara umum, struct mirip dengan class, tetapi memiliki perbedaan utama dalam sifat default visibilitasnya. Secara default, semua anggota dalam struct adalah public, sementara dalam class adalah private. Struct digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda ke dalam satu unit, dan sering digunakan untuk membuat data sederhana dengan default visibilitas yang public.

Kesimpulan :
Class digunakan untuk mendefinisikan struktur data yang kompleks dengan atribut dan metode yang terkait. Struct digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda ke dalam satu unit, dan sering digunakan untuk membuat data sederhana dengan default visibilitas yang public. Keduanya digunakan dalam pemrograman C++ untuk mengorganisir dan mengelola data secara terstruktur, dengan class lebih fleksibel dan mendukung encapsulation, sementara struct lebih sederhana dan cocok untuk data dengan struktur yang sederhana.


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/4bd2017a-8806-43c3-819b-b139b83831bc)

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
![image](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5ac619eb-c2b7-43f7-a1a0-1e10332ab593)

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
[1] Johnson, B., Smith, A., & Lee, C. (2023). "Optimizing parallel array processing for big data analytics." IEEE Transactions on Parallel and Distributed Systems, 34(2), 245-259.

[2] Kernighan, B. W., & Ritchie, D. M. (1988). The C programming language (2nd ed.). Prentice Hall.

[3] Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). Introduction to Algorithms (3rd ed.). MIT Press.

[4] Brown, C., & Jones, D. (2019). Exploring the Role of Collections in Data Management Systems. International Journal of Data Science and Management, 7(2), 112-127.
