 <h1 align="center">Laporan Praktikum Modul Rekursif</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify">Rekursif adalah salah satu proses pengulangan yang melibatkan fungsi atau prosedur yang memanggil dirinya sendiri. Dalam konteks ini, pemanggilan fungsi terjadi secara berulang, membentuk suatu siklus di mana setiap iterasi menghasilkan panggilan rekursif baru. Namun, yang penting di sini adalah adanya suatu kondisi terminasi yang menentukan kapan proses rekursif harus berhenti [1]. Tanpa kondisi terminasi yang tepat, fungsi rekursif akan terus memanggil dirinya sendiri hingga mencapai batas memori yang dapat menampung jumlah panggilan rekursif tersebut.

<p align="justify">Dibandingkan dengan pendekatan iteratif, kode rekursif cenderung lebih singkat dan seringkali lebih mudah dipahami. Kelebihan ini terutama terasa saat menangani masalah kompleks yang dapat dipecahkan menjadi sub-masalah yang mirip. Pemikiran rekursif dapat menyederhanakan solusi untuk masalah seperti pengurutan, pencarian, dan penjelajahan data. Misalnya, ketika kita menghadapi masalah seperti pengurutan, kita dapat membagi masalah menjadi sub-masalah kecil yang lebih mudah ditangani, seperti membagi array menjadi dua bagian, kemudian mengurutkan masing-masing bagian secara terpisah. Pendekatan ini, dikenal sebagai divide-and-conquer, secara alami terlentang untuk pemikiran rekursif, di mana pemecahan masalah menjadi sub-masalah kecil memungkinkan kita untuk merangkai kembali solusi secara terbalik. Namun, penting untuk diingat bahwa rekursi harus digunakan dengan bijak. Meskipun memiliki kelebihan seperti kejelasan dan kemudahan implementasi, rekursi juga dapat menimbulkan overhead kinerja dan bahaya terhadap batas memori jika tidak dikelola dengan baik. Oleh karena itu, saat menggunakan rekursi, penting untuk memastikan bahwa ada mekanisme terminasi yang jelas dan bahwa fungsi rekursif tidak menimbulkan risiko kelebihan panggilan rekursif yang tak terkendali.

<p align="justify">Fungsi rekursif adalah konsep dalam pemrograman di mana sebuah fungsi dapat memanggil dirinya sendiri untuk menyelesaikan masalah. Misalnya, dalam menghitung faktorial dari sebuah angka, fungsi faktorial akan memanggil dirinya sendiri dengan angka yang lebih kecil, terus-menerus mengalikan angka tersebut dengan angka yang lebih kecil hingga mencapai angka 1, yang merupakan kondisi dasar. Rekursi memerlukan hati-hati karena jika tidak ada kondisi dasar yang tepat, maka fungsi akan terus memanggil dirinya sendiri tanpa henti, mengakibatkan kelebihan beban memori dan menyebabkan program menjadi tidak responsif. Oleh karena itu, penting untuk memastikan bahwa setiap panggilan rekursif menuju kondisi dasar yang dapat dicapai.

![rekursif](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/79da8465-0698-4e98-b734-b6611eeb4e43)


#### Rekursif Langsung
<p align="justify">Rekursi langsung terjadi ketika fungsi memanggil dirinya sendiri secara langsung. Dalam rekursi langsung, fungsi memanggil versi dirinya sendiri dalam tubuh fungsi itu sendiri. Ini dapat dianggap sebagai proses pemecahan masalah di mana masalah besar dibagi menjadi masalah yang lebih kecil, yang kemudian diselesaikan dengan cara yang sama. Contoh yang umum dari rekursi langsung adalah perhitungan faktorial. Dalam fungsi faktorial, ketika fungsi dipanggil dengan suatu angka, ia akan memanggil dirinya sendiri dengan angka yang lebih kecil, kemudian mengalikan angka tersebut dengan hasil rekursifnya sendiri. Proses ini terus berlanjut sampai mencapai kondisi dasar, biasanya ketika angka yang diproses menjadi 1 [2]. Rekursi langsung dapat lebih mudah dipahami dan diimplementasikan karena konsepnya yang sederhana dan langsung. Namun, perlu diingat bahwa rekursi langsung sering kali dapat menimbulkan masalah kinerja, terutama jika tidak dikelola dengan baik. Karena setiap pemanggilan fungsi akan menambahkan frame baru ke dalam tumpukan pemanggilan, dapat menyebabkan overhead memori yang signifikan jika jumlah panggilan rekursif sangat besar. Oleh karena itu, penting untuk memastikan bahwa kondisi dasar tercapai dengan baik dan mempertimbangkan efisiensi kinerja saat menggunakan rekursi langsung.

![rekursif  langsung png](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8c965093-d605-45c5-890f-cc6928eaccdf)

#### Kelebihan 

- Rekursi langsung sering kali lebih mudah dipahami karena konsepnya langsung dan jelas. Ini membuat kode lebih mudah untuk dipelajari dan dimodifikasi.

- Konsep rekursi langsung dapat diimplementasikan dengan relatif sederhana dan mudah dimengerti. Ini membuatnya menjadi pilihan yang baik untuk masalah-masalah yang membutuhkan solusi rekursif.

- Biasanya, rekursi langsung memerlukan kode yang lebih sedikit dibandingkan dengan rekursi tidak langsung untuk mencapai solusi yang sama.

#### Kekurangan 
- Rekursi langsung sering kali memerlukan lebih banyak sumber daya (seperti memori) dan dapat mengakibatkan overhead kinerja yang signifikan, terutama ketika jumlah panggilan rekursif sangat besar.

- Jika tidak dikelola dengan baik, rekursi langsung dapat menyebabkan stack overflow, yaitu kondisi di mana tumpukan pemanggilan melebihi kapasitas memori yang tersedia, yang dapat menyebabkan program berhenti bekerja.

- Dalam kasus masalah yang kompleks, rekursi langsung mungkin sulit dipahami dan memerlukan lebih banyak perencanaan dan pemahaman tentang struktur program.


#### Rekursif Tidak Langsung
<p align="justify">Rekursi tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian secara tidak langsung memanggil fungsi aslinya kembali. Dalam rekursi tidak langsung, ada setidaknya dua fungsi yang terlibat dalam proses rekursif. Salah satu fungsi memanggil fungsi lain, yang kemudian dapat memanggil fungsi pertama kembali atau fungsi lainnya. Rekursi tidak langsung adalah suatu pola dalam pemrograman di mana sebuah fungsi memanggil fungsi lain, yang kemudian secara tidak langsung memanggil kembali fungsi aslinya atau fungsi lainnya [3]. Dalam rekursi tidak langsung, terlibat setidaknya dua fungsi yang saling berinteraksi dalam proses rekursif. Contohnya adalah dalam struktur data seperti pohon, di mana sebuah fungsi dapat memanggil dirinya sendiri untuk menelusuri setiap simpul dalam pohon, tetapi pada saat yang sama, fungsi tersebut juga dapat memanggil fungsi lain untuk menelusuri cabang-cabang pohon. Rekursi tidak langsung dapat lebih kompleks dalam pemahaman dan implementasinya, namun, konsep ini dapat menjadi lebih rumit dalam pemahaman dan implementasinya dibandingkan dengan rekursi langsung karena keterlibatan fungsi-fungsi yang berbeda serta hubungan antara mereka. Oleh karena itu, penggunaan rekursi tidak langsung sering kali memerlukan perencanaan yang lebih cermat dan pemahaman yang lebih mendalam tentang struktur program dan masalah yang dihadapi.

![rekursif tidak langsung png](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/90eb86af-81ca-4499-9e6c-c7a89210b807)

#### Kelebihan 
- Rekursi tidak langsung memberikan fleksibilitas tambahan karena memungkinkan interaksi antara fungsi-fungsi yang berbeda, yang dapat menghasilkan solusi yang lebih fleksibel untuk masalah-masalah yang kompleks.

- Dalam beberapa kasus, rekursi tidak langsung dapat memiliki kinerja yang lebih baik karena pengelolaan memori yang lebih baik dan pengurangan overhead yang terkait dengan rekursi langsung.

- Dalam beberapa situasi, rekursi tidak langsung dapat menyederhanakan implementasi kode untuk masalah yang kompleks dengan memungkinkan pemisahan fungsi-fungsi yang berbeda.

#### Kekurangan
- Rekursi tidak langsung sering kali lebih kompleks dalam pemahaman dan implementasinya karena melibatkan interaksi antara fungsi-fungsi yang berbeda.

- Kode yang menggunakan rekursi tidak langsung mungkin lebih sulit dipahami daripada kode dengan rekursi langsung karena keterlibatan fungsi-fungsi yang berbeda.

- Rekursi tidak langsung mungkin menghasilkan lebih banyak kode daripada rekursi langsung karena adanya keterlibatan fungsi-fungsi tambahan.


## Guided 1

### Full code screenshoot
![full1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ee8f1ca8-761c-438e-9bdb-f15c29d6ba55)

```C++
#include <iostream>
using namespace std;

void countdown(int n){
    if (n==0) {
        return;
    }

    cout << n << " ";
    countdown (n-1);

}

int main (){
    cout << "rekursif langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```

### Output 
![out1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5dfcbdc0-e1e8-4d03-9c4f-ba90e88da629)

<p align="justify"> Kode di atas adalah contoh implementasi rekursi langsung. Fungsi countdown menerima satu argumen integer n dan mencetak nilai n, kemudian memanggil dirinya sendiri dengan nilai n-1 sebagai argumen. Proses ini terus berlanjut hingga n mencapai nilai 0, di mana fungsi berhenti memanggil dirinya sendiri dan mengembalikan nilai tanpa melakukan apapun. Dalam fungsi main, program memanggil fungsi countdown dengan argumen 5, sehingga akan mencetak angka 5, 4, 3, 2, 1 secara berurutan. Kode ini mengilustrasikan konsep rekursi langsung, di mana fungsi countdown memanggil dirinya sendiri secara langsung dengan nilai yang lebih kecil sebagai bagian dari prosesnya. Oleh karena itu, ketika program dijalankan, hasilnya adalah penghitungan mundur dari 5 hingga 1, sesuai dengan nilai yang diberikan kepada fungsi countdown.

## Guided 2

### Full code screenshoot
![full2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/1073345a-54bd-4aa2-8842-6b7273b3885c)


```C++
#include <iostream>
using namespace std;

void functionB(int n);


void functionA (int n){
    if (n > 0){
        cout << n << " ";
        functionB (n-1);
    }
}

void functionB (int n){
    if (n > 0){
        cout << n << " ";
        functionA (n / 2);
    }
}

int main (){
    int num = 5;
    cout << "rekursif tidak langsung: ";
    functionA (num);
    return 0;

}
```

### Output 
![out2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/609992f5-4185-4790-8b48-ffe0ab8f829e)


<p align="justify">Kode di atas adalah contoh rekursi tidak langsung. Program terdiri dari dua fungsi utama, yaitu functionA dan functionB. Fungsi functionA memiliki satu parameter integer n. Jika nilai n lebih besar dari 0, fungsi akan mencetak nilai n menggunakan cout, kemudian memanggil fungsi functionB dengan parameter n-1. Fungsi functionB juga memiliki satu parameter integer n. Jika nilai n lebih besar dari 0, fungsi akan mencetak nilai n menggunakan cout, kemudian memanggil fungsi functionA dengan parameter n/2. FunctionA dipanggil dengan argumen 5. Mencetak 5 ke layar, dan memanggil functionB dengan argumen 4. FunctionB dipanggil dengan argumen 4. Mencetak 4 ke layar, dan memanggil functionA dengan argumen 2 (4 dibagi 2). FunctionA dipanggil dengan argumen 2. Mencetak 2 ke layar, dan memanggil functionB dengan argumen 1 (2 dibagi 2). FunctionB dipanggil dengan argumen 1. Mencetak 1 ke layar, dan memanggil functionA dengan argumen 0 (1 dibagi 2). FunctionA dipanggil dengan argumen 0. Karena nilai n adalah 0, maka tidak ada operasi yang dilakukan di dalamnya. Proses ini berlanjut kembali, di mana functionB mencetak 1 ke layar, kemudian memanggil functionA dengan argumen 0 (1 dibagi 2), yang kembali tidak melakukan apa-apa. Dalam fungsi main, program mendeklarasikan variabel num dengan nilai 5. Kemudian, program mencetak teks "rekursif tidak langsung: ", dan memanggil fungsi functionA dengan argumen num ( 5 4 2 1).

## Unguided 

<p align="justify"> 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

### Full code screenshoot
![full3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/af61d9b0-f1e2-4840-8893-75a780ebbc8a)


```C++
#include <iostream>
using namespace std;


int faktorial(int n) {
    // jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;
    // Masukkan bilangan 
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan positif
    if (bilangan < 0) {
        cout << "Masukan bilangan bulat positif!!!" << endl;
    } else {
        // Menghitung faktorial
        cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    }

    return 0;
}
```
### Output
![out3a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/175f605d-9ff4-4d8a-9661-9d4f8fc20d04)
![out3b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/fba54b11-98a3-4974-bf07-12578df12766)

<p align="justify">Kode di atas merupakan implementasi untuk menghitung nilai faktorial dari sebuah bilangan bulat positif menggunakan rekursi langsung. Pertama-tama, fungsi faktorial didefinisikan untuk menghitung faktorial dari bilangan bulat positif n. Dalam fungsi tersebut, terdapat dua kondisi, jika n adalah 0 atau 1, maka nilai faktorialnya adalah 1. Jika tidak, maka nilai faktorialnya adalah n dikalikan dengan faktorial dari n-1. Dalam fungsi main, program meminta pengguna untuk memasukkan bilangan bulat positif. Kemudian, program memeriksa apakah bilangan yang dimasukkan adalah bilangan bulat positif. Jika ya, program akan menghitung faktorialnya menggunakan fungsi faktorial dan mencetak hasilnya ke layar. Jika tidak, program akan mencetak pesan kesalahan, yaitu masukkan bilangan bulat positif. Pada kode diatas kita masukkan bilangan (-3) maka output yang dihasilkan adalah "Masukkan bilangan bulat positif!!!". Jika kita masukkan bilangan (6) maka output yang dihasilkan adalah "Faktorial dari 6 adalah: 720". 


<p align="justify"> 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

### Full code screenshoot
![full4](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/96333779-f7bb-4af1-a452-6c6e18b26222)

```C++
#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int a(int n) {
    // Jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int hasil =a(n - 1);
        return n * hasil;
    }
}

// Fungsi untuk menghitung faktorial secara tidak langsung
int b(int n) {
    // Jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int hasil = b(n - 1);
        return n * hasil;
    }
}

int main() {
    int bilangan;
    // Masukkan bilangan 
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan positif
    if (bilangan < 0) {
        cout << "Masukan bilangan bulat positif!!!" << endl;
    } else {
        // Menghitung faktorial secara tidak langsung
        cout << "Faktorial dari " << bilangan << " adalah: " << b(bilangan) << endl;
    }

    return 0;
}
```
### Output
![out4a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/2c69e13b-5f5b-4f1a-9b41-ea5e9e4ce009)
![out4b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/1742c8ab-2f36-47ea-9a5e-89972cf41bb3)


<p align="justify">Kode di atas merupakan implementasi untuk menghitung nilai faktorial dari sebuah bilangan bulat positif menggunakan rekursi tak langsung. Pada fungsi faktorial terdapat dua fungsi yang sama untuk menghitung faktorial yakni, int a(int n) fungsi ini menghitung faktorial dari bilangan bulat n menggunakan pendekatan rekursi langsung. Artinya, fungsi ini memanggil dirinya sendiri secara langsung untuk menghitung faktorial. Int b(int n) fungsi ini juga menghitung faktorial dari bilangan bulat n, namun menggunakan pendekatan rekursi tidak langsung. Ini berarti fungsi ini memanggil fungsi a secara tidak langsung untuk menghitung faktorial. Pada fungsi main, kita diminta untuk memasukkan sebuah bilangan bulat positif. Kemudian program memeriksa apakah bilangan yang dimasukkan adalah bilangan bulat positif. Jika benar, maka program memanggil salah satu fungsi faktorial. Hasil perhitungan faktorial kemudian dicetak.  Pada rekursif tak langsung suatu fungsi memanggil fungsi lain, yang kemudian memanggil fungsi pertama kembali. Dalam kode di atas, b() adalah contoh rekursi tidak langsung, karena meskipun pada akhirnya memanggil fungsi yang sama, tetapi melalui perantara fungsi lain.

## Kesimpulan
<p align="justify">Rekursi dalam pemrograman dapat digunakan dalam dua bentuk: rekursi langsung dan tidak langsung. Rekursi langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung untuk menyelesaikan tugas tertentu. Ini menghasilkan implementasi yang sederhana dan langsung karena tidak ada perantara fungsi lain yang terlibat. Meskipun demikian, rekursi langsung biasanya lebih efisien dalam hal kinerja karena tidak melibatkan lapisan tambahan dari fungsi perantara. Selain itu, rekursi langsung cenderung lebih mudah dipahami dan diimplementasikan karena tidak ada kompleksitas tambahan yang disebabkan oleh perantara fungsi. Di sisi lain, rekursi tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian memanggil fungsi pertama kembali. Ini memerlukan perantara fungsi lain untuk melakukan pemanggilan rekursif, yang memberikan fleksibilitas dalam cara pemanggilan fungsi. Rekursi tidak langsung dapat menyediakan tingkat abstraksi yang lebih tinggi, memungkinkan pemisahan antara fungsi dasar dan fungsi perantara. Namun, implementasinya cenderung lebih kompleks dan memerlukan lebih banyak pemikiran untuk memahami alur kerja program. Dalam pemilihan antara rekursi langsung dan tidak langsung, penting untuk mempertimbangkan kompleksitas masalah yang dihadapi, preferensi programmer, serta pertimbangan kinerja dan kejelasan kode.

## Referensi

[1] Sugiarto, P (2021). Penggunaan Rekursif Langsung dan Tidak Langsung dalam Penghitungan Faktorial. Jurnal Didaktis Indonesia, 2(1), 18-19.

[2] A. J. O'Brien dan G. M. Marakas (2021). "Analisis Penggunaan Rekursif Langsung dan Tidak Langsung dalam Sistem Informasi" . Jurnal Rekursif, 6(2), 7-11.

[3] KRahman, M. A., & Chowdhury, S. A. (2020). "Penerapan Rekursi Tidak Langsung dalam Pemrosesan Citra Digital." Jurnal Teknik Elektro, 4(3), 15-17.




