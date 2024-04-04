 <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Array, atau larik, adalah struktur data yang digunakan untuk menyimpan sekumpulan data dengan tipe data yang sama. Bayangkan array seperti rak buku, di mana setiap rak menyimpan buku dengan jenis yang sama. Dalam pemrograman, array memungkinkan penggunanya untuk mengelompokkan data terkait dan mengaksesnya dengan mudah. Array berfungsi sebagai wadah untuk menyimpan kumpulan elemen data dengan tipe yang sama, yang diakses melalui indeks numerik yang berurutan. Kemampuan array untuk menyimpan data dengan cara yang terstruktur dan terorganisir membuatnya menjadi fondasi dalam pengembangan perangkat lunak di berbagai domain, mulai dari pemrosesan data hingga grafika komputer [1]. Array memiliki beberapa karakteristik penting, yaitu: 

1. Tipe Data

    <p align="justify">Elemen array harus memiliki tipe data yang sama, memungkinkan operasi efisien seperti perbandingan dan penjumlahan. Tipe data umum termasuk integer, float, string, dan boolean. 

2. Indeks

    <p align="justify">Setiap elemen dalam array diidentifikasi oleh indeks, yang biasanya dimulai dari nol (0) dan berlanjut hingga n-1, di mana n adalah ukuran array. Indeks memungkinkan kita untuk mengakses atau memanipulasi elemen array secara individual dengan menggunakan sintaks indeks.

3. Panjang dan Dimensi

    <p align="justify">Panjang array dapat statis (ditentukan saat array dibuat dan tidak dapat diubah) atau dinamis (dapat diubah saat program berjalan)Panjang dapat statis (ditentukan saat array dibuat dan tidak dapat diubah) atau dinamis (dapat diubah saat program berjalan).

 <p align="justify"> Array memiliki beberapa jenis yang memungkinkan penggunaannya disesuaikan dengan kebutuhan dan karakteristik tertentu dari data yang akan disimpan. Berikut adalah beberapa jenis array yang umum:
 
### Array Satu Dimensi (One-Dimensional Array)

<p align="justify">Array satu dimensi adalah struktur data yang terdiri dari kumpulan elemen dengan tipe yang sama yang diatur dalam satu baris atau satu kolom. Setiap elemen dalam array memiliki indeks tunggal yang digunakan untuk mengaksesnya. Penggunaan array satu dimensi umumnya mencakup penyimpanan dan manipulasi data dalam urutan linier, seperti daftar bilangan bulat, nilai float, karakter, atau objek [2]. 
    
### Array Dua Dimensi (Two-Dimensional Array)

<p align="justify">Array dua dimensi adalah array yang terdiri dari elemen-elemen yang disusun dalam baris dan kolom. Dalam struktur ini, setiap elemen diidentifikasi oleh dua indeks, yaitu indeks baris dan kolomnya. Array ini sering digunakan untuk merepresentasikan matriks, tabel data, atau grid, di mana data harus diatur dalam struktur dua dimensi.

###  Array Multidimensi
 
<p align="justify"> Array multidimensi merupakan perluasan dari array dua dimensi, array multidimensi memiliki lebih dari dua dimensi, memungkinkan penyimpanan data yang lebih kompleks. Ini memungkinkan penyimpanan data dalam bentuk tabel dua dimensi (misalnya, matriks) atau dalam bentuk dimensi yang lebih tinggi [3]. Setiap elemen dalam array multidimensi diidentifikasi oleh serangkaian indeks, yang sesuai dengan jumlah dimensi array.

### Array Homogen 

<p align="justify">Array homogen, juga dikenal sebagai array uniform, adalah jenis array yang hanya berisi elemen dengan tipe data yang sama. Operasi data pada array ini lebih konsisten dan efisien karena semua elemen memiliki tipe data yang sama. Array homogen umumnya lebih hemat memori dibandingkan array heterogen karena hanya satu jenis data yang disimpan.

### Array Heterogen 

<p align="justify"> Array heterogen, juga dikenal sebagai array non-uniform, adalah jenis array yang dapat berisi elemen dengan berbagai tipe data. Berbeda dengan array homogen yang hanya berisi elemen dengan tipe data yang sama, array heterogen menawarkan fleksibilitas untuk menyimpan data dengan tipe data yang berbeda dalam satu struktur data. Array heterogen dapat menggabungkan data dengan tipe data berbeda dalam satu struktur data dapat menghemat kode dibandingkan dengan menggunakan beberapa array homogen.

## Guided 1
### Array Tiga Dimensi 
![guidedfull 1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d3b55f0e-17c6-4f43-82e8-7e7ef854a512)

```C++
#include <iostream>

using namespace std;

int main(){

    int arr[2][3][3];

    for (int x= 0; x<2; x++){
        for ( int y=0; y<3; y++){
            for (int z=0; z<3; z++){
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    for(int x=0; x<2; x++){
        for (int y = 0; y < 3; y++){
            for (int z = 0; z < 3; z++){
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << endl;


    for(int x = 0; x < 2; x++){
        for ( int y = 0; y < 3; y++){
            for (int z = 0; z < 3; z++){
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
```
### Output 
![outguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c9f6e1bd-0a80-4f03-80b1-d983fc2ea311)

<p align="justify"> Pada kode tersebut kita diminta untuk memasukkan nilai untuk setiap elemen array dengan dimensi 2x3x3. Dalam pengulangan bersarang atau nested loop, kita diminta untuk memasukkan nilai untuk setiap elemen array sesuai dengan indeksnya. Misalnya, Input Array[0][0][0] = 1, Input Array[0][0][1] = 2, dan seterusnya, hingga selesai memasukkan nilai untuk semua elemen array. Setelah semua nilai dimasukkan, program mencetak nilai-nilai yang dimasukkan sebelumnya. Setelah mencetak semua nilai, program mencetak kembali array dalam bentuk matriks.  Ini dilakukan dengan menggunakan pengulangan bersarang atau nested loop yang mengulangi setiap baris dan kolom dari setiap lapisan array. Dengan demikian, output keseluruhan adalah dua kali menampilkan nilai-nilai yang Anda masukkan (pertama secara urut, kedua dalam bentuk matriks).

## Guided 2
### Program Mencari Nilai Maksimum pada Array
![guidedfull 2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8349d75c-4daf-466b-8c09-608c0f1376db)

```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan Panjang Array : ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array Ke- " << (i) << ": ";
        cin >> array [i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai Maksimum Adalah " << maks << " Berada Di Array Ke- " << lokasi<<endl;
}
```
### Output

![outguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/6698ef5b-ed22-4dad-84aa-3f28d064d7a7)


<p align ="justify">Kode di atas bertujuan untuk mencari nilai maksimum dalam sebuah array yang diisi oleh pengguna. Pertama kali kita diminta untuk memasukkan panjang array yang ingin dibuat, pada contoh di atas misalnya 7. Kemudian kita masukkan nilai-nilai untuk setiap elemen array. Program akan menunjukkan nomor indeks array yang sedang diisi. Setelah selesai memasukkan semua nilai, program akan mencari nilai maksimum dari seluruh array. Hal ini dilakukan dengan membandingkan setiap elemen array dengan nilai maksimum sementara (maks). Jika elemen saat ini lebih besar dari nilai maksimum sementara, maka nilai maksimum sementara akan diperbarui bersama dengan indeks lokasinya. Setelah selesai mencari nilai maksimum, program akan menampilkan nilai maksimum yang ditemukan bersama dengan nomor indeks array, pada contoh program di atas nilai maksimumnya adalah 8 terdapat pada indeks ke-6.

## Unguided 

<p align="justify"> 1. Buatlah program untuk menampilkan output seperti berikut dengan data yang di inputkan oleh user!

![WhatsApp Image 2024-03-22 at 13 33 28_f5887cef](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/938c2592-47c0-4649-8ede-480f05f4a5fe)

![unguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b651c39d-0e57-47f0-8b21-604ee74d5d8b)

```C++
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Data Array: ";
    cin >> n;

    int data[n];
    cout << "Masukkan " << n << " bilangan: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "\nData: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\nBilangan genap: ";
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 == 0) {
            cout << data[i] << " ";
        }
    }

    cout << "\n\nBilangan ganjil: ";
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 != 0) {
            cout << data[i] << " ";
        }
    }

    return 0;
}
```
### Output
![unguided out 1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c83c195e-36cd-4499-a03a-a8da6f477901)

<p align="justify"> Program diatas pada tahap awal akan meminta pengguna untuk memasukkan jumlah bilangan yang akan dimasukkan ke dalam array, misalnya ada 10 bilangan. Kemudian pengguna diminta untuk memasukkan 10 bilangan tersebut. . Bilangan-bilangan tersebut akan disimpan dalam array data.Program akan melakukan pemisahan antara bilangan genap dengan bilangan ganjil. Program tersebut menggunakan pernyataan if dengan kondisi data[i] % 2 == 0 untuk memeriksa apakah suatu bilangan dalam array data habis dibagi dua (modulus dengan 2 sama dengan 0). Jika kondisi tersebut terpenuhi, maka bilangan tersebut dianggap sebagai bilangan genap dan akan ditampilkan. Untuk mencari bilangan ganjil, program tersebut menggunakan pernyataan if dengan kondisi data[i] % 2 != 0. Kondisi ini memeriksa apakah suatu bilangan dalam array data tidak habis dibagi dua (modulus dengan 2 tidak sama dengan 0). Jika kondisi tersebut terpenuhi, maka bilangan tersebut dianggap sebagai bilangan ganjil dan akan ditampilkan. Dengan menggunakan dua pernyataan if dengan kondisi yang berbeda, program dapat memisahkan bilangan genap dan ganjil dari array data dan menampilkannya secara terpisah. Bilangan genap akan ditampilkan terlebih dahulu, kemudian bilangan ganjil.

<p align="justify">2. Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

![unguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b3bc3c1c-d60a-4620-beae-4abc8fdfd37a)

```C++
#include <iostream>

using namespace std;

int main(){
  int rows, cols, depth;
    cout << "Masukkan jumlah baris, kolom, dan derajat: ";
    cin >> rows >> cols >> depth;

    int arr[rows][cols][depth];

    // Memasukkan elemen-elemen array
    for (int i = 0; i < rows; i++){
        cout << "Masukkan elemen-elemen baris ke-" << i+1 << ":" << endl;
        for ( int j = 0; j < cols; j++){
            for (int k = 0; k < depth; k++){
                cout << "Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Mencetak kembali nilai-nilai yang dimasukkan
    cout << "Elemen-elemen array adalah:" << endl;
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            for (int k = 0; k < depth; k++){
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
        cout << endl;
    }

     for(int i = 0; i < rows; i++){
        for ( int j = 0; j < cols; j++){
            for (int k = 0; k < depth; k++){
                cout << arr[i][j][k] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
### Output
![unguided out 2a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/406abea9-777a-4f3e-917f-4f83ef5d5dce)
![unguided out 2b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/15c88cb6-05b7-4717-8c34-e193f6e62dba)

<p align="justify">Pada program diatas kita diminta untuk memasukkan jumlah baris, kolom, dan kedalaman (derajat) atau ada berapa matriks yang kita inginkan dari array tiga dimensi yang ingin dibuat. Pada kode diatas kita memasukkan 3 derajat, 2 baris, dan 3 kolom.  Setelah semua elemen diisi, program akan mencetak kembali nilai-nilai yang dimasukkan dengan menggunakan looping yang sesuai dengan ukuran array. Output dari program ini akan menampilkan nilai-nilai yang dimasukkan dalam bentuk array 3 dimensi, dengan indeks baris, kolom, dan derajat yang sesuai. Dalam kodingan tersebut, tiga looping digunakan untuk mengisikan dan mencetak elemen-elemen array. Setiap looping memiliki tujuan yang berbeda, tetapi semua looping bertujuan untuk mengakses dan mengubah nilai-nilai elemen array. 

<p align="justify">3. Buatlah program menu pencarian nilai maksimum, minimum, dan nilai rata-rata dari suatu array dengan input yang dimasukkan oleh user!

![unguided3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b3099cae-3593-41dd-acd2-bd0584589b47)

```C++
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int data[n];

    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int pilihan;
    do {
        cout << "\nPilih operasi: " << endl;
        cout << "1. Cari nilai maksimum" << endl;
        cout << "2. Cari nilai minimum" << endl;
        cout << "3. Cari rata-rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int max = data[0];
                for (int i = 1; i < n; i++) {
                    if (data[i] > max) {
                        max = data[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                int min = data[0];
                for (int i = 1; i < n; i++) {
                    if (data[i] < min) {
                        min = data[i];
                    }
              }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                int jumlah = 0;
                for (int i = 0; i < n; i++) {
                    jumlah += data[i];
                }
                double avg = (jumlah) / n;
                cout << "Rata-rata: " << avg << endl;
                break;
            }
            case 4:
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}

```
### Output 
![unguided out 3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/60b4f836-b827-46cd-bec3-9ed0c128ad2f)

<p align="justify"> Program diatas akan meminta pengguna untuk memasukkan jumlah elemen yang diinginkan. Pada kode diatas kita memasukkan 7 elemen. Setelah pengguna memasukkan jumlah elemen, selanjutnya pengguna diminta untuk memasukkan nilai-nilai dari elemen-elemen tersebut satu per satu. Pada kodingan diatas kita menginputkan 5 17 8 52 71 24. Setelah semua data dimasukkan, program akan menampilkan sebuah menu operasi yang berisi beberapa pilihan yaitu, mencari nilai maksimum, mencari nilai minimum, mencari rata-rata, atau keluar dari program. Pengguna diminta untuk memilih operasi yang diinginkan dengan memasukkan nomor pilihan yang sesuai. Program kemudian akan mengeksekusi operasi yang dipilih oleh pengguna. Jika pengguna memilih untuk mencari nilai maksimum (pilihan 1), program akan melakukan iterasi melalui seluruh elemen array untuk menemukan nilai maksimum. Setelah nilai maksimum ditemukan, program akan mencetak nilai maksimum tersebut. Pada contoh kode tersebut nilai maksimumnya adalah 71. Jika pengguna memilih untuk mencari nilai minimum (pilihan 2), program akan melakukan iterasi melalui seluruh elemen array untuk menemukan nilai minimum. Setelah nilai minimum ditemukan, program akan mencetak nilai minimum tersebut. Pada kode tersebut nilai minimumnya adalah 5. Jika pengguna memilih untuk mencari rata-rata (pilihan 3), program akan menjumlahkan seluruh elemen array dan kemudian membagi hasil penjumlahan tersebut dengan jumlah elemen. Program akan mencetak rata-rata dari data yang dimasukkan. Pada kode tersebut rata-ratanya adalah 26. Jika pengguna memilih untuk keluar dari program (pilihan 4), program akan berhenti dan mengakhiri eksekusi.

## Kesimpulan 
<p align="justify">Array sama halnya seperti wadah besar di mana Anda bisa menyimpan banyak sekali barang sejenis, seperti dalam satu rak toko yang berisi banyak kotak. Setiap kotak dalam rak itu punya nomor tertentu, sehingga Anda bisa dengan mudah menemukan barang yang diinginkan. Begitu juga dengan array, setiap data disimpan dalam posisi tertentu dengan nomor atau indeksnya sendiri. Dengan array, Anda bisa menyimpan banyak data dengan cara yang rapi dan mudah diatur. Ini membantu Anda dalam mengakses dan mengelola data dengan cepat dan efisien, sama seperti mengambil barang dari rak toko. Dengan menggunakan array, pengembang aplikasi bisa membuat program-program yang lebih baik dan efisien dalam mengolah data.

## Referensi
[1] Johnson, B., Smith, A., & Lee, C. (2023). "Optimizing parallel array processing for big data analytics." 34(2), 245-259.

[2] Wang, X., Chen, Y., & Liu, Z. (2018). "Optimizing Memory Access Patterns in One-Dimensional Arrays." ACM Transactions on Programming Languages and Systems, 40(4), 102-115.

[3]Zhang, Q., Li, R., & Kim, S. (2020). "Efficient Algorithms for Multidimensional Array Operations." 69(8), 120-135.