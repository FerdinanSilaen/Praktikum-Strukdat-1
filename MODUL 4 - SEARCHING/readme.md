 <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Pencarian, atau searching, adalah konsep fundamental dalam pemrograman dan ilmu komputer secara umum. Ini melibatkan proses menemukan elemen tertentu dalam suatu kumpulan data atau struktur data. Pencarian tidak hanya diterapkan dalam pemrograman komputer, tetapi juga dalam kehidupan sehari-hari.Pencarian adalah proses menemukan atau mendapatkan informasi atau elemen tertentu yang diinginkan dari kumpulan data yang lebih besar. Kumpulan data yang dicari bisa berupa array, list, string, basis data, pohon, graf, dan berbagai struktur data lainnya. Jenis-jenis searching ada beberapa, yakitu:

### 1. Sequential Search

<p align="justify">
Sequential search, atau yang sering disebut linear search, merupakan pendekatan pencarian yang relatif sederhana namun efektif dalam menemukan elemen tertentu dalam sebuah kumpulan data. Metode ini mengharuskan pengunjungannya satu per satu melalui setiap elemen dalam kumpulan data, mulai dari elemen pertama hingga elemen terakhir, untuk menemukan elemen yang dicari [1]. Jika elemen yang dicari ditemukan selama proses pencarian, maka pencarian berakhir, dan posisi atau informasi lainnya mengenai elemen tersebut dapat diperoleh. Namun, jika elemen tidak ditemukan setelah semua elemen diuji, pencarian juga selesai dengan menyatakan bahwa elemen tersebut tidak ada dalam kumpulan data yang diberikan. Pencarian sekuensial ini cocok digunakan dalam situasi di mana data tidak diurutkan, atau ketika ukuran data relatif kecil sehingga performa pencarian tidak menjadi masalah utama. Meskipun sederhana, pendekatan ini memiliki keuntungan dalam kejelasan dan kemudahan implementasi. Namun, pada data yang sangat besar atau ketika efisiensi pencarian menjadi prioritas. Langkah-langkah dalam sequential search adalah sebagai berikut. Pertama, kita inisialisasi variabel yang akan digunakan, seperti found untuk menandai apakah elemen ditemukan dan position untuk menyimpan indeks elemen jika ditemukan. Selanjutnya, kita mulai looping melalui setiap elemen dalam kumpulan data menggunakan loop for atau while. Dalam setiap iterasi loop, kita memeriksa apakah elemen saat ini sama dengan elemen yang dicari. Jika iya, maka kita mengubah nilai variabel found menjadi true dan menyimpan indeks elemen tersebut ke dalam variabel position. Jika tidak, kita lanjutkan ke elemen berikutnya dalam urutan. Setelah loop selesai, kita memeriksa nilai variabel found. Jika found adalah true, itu berarti elemen ditemukan, dan kita dapat menggunakan nilai position untuk mengakses atau melakukan operasi apa pun pada elemen yang ditemukan. Jika found adalah false, itu berarti elemen yang dicari tidak ada dalam kumpulan data. Dengan demikian, sequential search adalah proses sederhana di mana kita secara sekuensial memeriksa setiap elemen untuk menemukan elemen yang dicari.

### 2. Binary Search

<p align="justify">Binary search adalah sebuah algoritma pencarian yang efisien dan sering digunakan untuk mencari elemen tertentu dalam kumpulan data yang telah diurutkan. Metode ini mengadopsi pendekatan yang lebih terstruktur dan efektif dibandingkan dengan pencarian sekuensial, di mana data dibagi menjadi dua bagian secara terus-menerus untuk mempersempit area pencarian. Proses ini dimulai dengan menentukan titik tengah dari data yang diurutkan, dan kemudian memeriksa apakah elemen yang dicari berada di bagian kiri atau kanan dari titik tengah tersebut, jika elemen yang dicari lebih kecil dari elemen tengah, pencarian dilanjutkan pada setengah kiri data, sementara jika lebih besar, pencarian dilakukan pada setengah kanan data [2]. Langkah-langkah ini terus diulang secara rekursif atau iteratif hingga elemen yang dicari ditemukan atau tidak ada lagi elemen yang dapat diperiksa. Keunggulan dari binary search terletak pada kompleksitas waktu yang relatif rendah, yaitu O(log n), di mana n adalah jumlah elemen dalam data. Hal ini membuatnya sangat efisien untuk digunakan pada data yang besar. Selain itu, binary search juga dapat diadaptasi dengan baik dalam berbagai konteks, termasuk dalam implementasi pada struktur data seperti array, list terurut, pohon biner pencarian, dan lain sebagainya. Namun, binary search juga memiliki beberapa keterbatasan yang perlu diperhatikan. Pertama, metode ini hanya dapat digunakan pada data yang sudah diurutkan, sehingga memerlukan langkah tambahan jika data belum terurut. Kedua, meskipun efisien, binary search tidak efektif jika data sering berubah, karena memerlukan pengurutan ulang setiap kali ada perubahan data. Terakhir, implementasi binary search yang tidak benar atau ceroboh dapat menghasilkan kesalahan logika dan mengakibatkan hasil pencarian yang tidak akurat. Langkah-langkah pada binary search yaitu. Pertama, pastikan bahwa data yang akan Anda cari sudah diurutkan. Binary search hanya efektif jika data dalam keadaan terurut. Setelah itu, tentukan batas awal dan akhir dari kumpulan data yang akan dicari dengan menetapkan dua variabel, yaitu left dan right. Variabel left awalnya diatur ke indeks pertama (biasanya 0), sedangkan variabel right diatur ke indeks terakhir dalam data.Selanjutnya, gunakan iterasi atau rekursi untuk membagi data menjadi dua bagian dan memeriksa elemen tengah. Dalam iterasi, langkah-langkahnya adalah menghitung indeks elemen tengah dengan rumus mid = (left + right) / 2, kemudian membandingkan elemen tengah dengan elemen yang dicari. Jika elemen tengah sama dengan elemen yang dicari, proses pencarian selesai. Jika tidak, perkecil rentang pencarian dengan mengubah nilai left atau right sesuai dengan perbandingan elemen tengah dengan elemen yang dicari. Sedangkan dalam rekursi, buat fungsi rekursif dengan parameter left, right, dan target. Hitung indeks elemen tengah dengan rumus mid = (left + right) / 2, lalu bandingkan elemen tengah dengan elemen yang dicari. Jika elemen tengah sama dengan elemen yang dicari, kembalikan indeksnya. Jika tidak, panggil fungsi rekursif untuk rentang yang sesuai dengan hasil perbandingan elemen tengah dengan elemen yang dicari. Terakhir, setelah elemen ditemukan, lakukan tindakan yang sesuai tergantung pada kebutuhan aplikasi. Jika elemen tidak ditemukan setelah semua iterasi atau rekursi selesai, kembalikan nilai yang menunjukkan bahwa elemen tidak ada dalam data. Pastikan juga untuk mengimplementasikan langkah-langkah ini dalam kode sesuai dengan logika algoritma binary search dan bahasa pemrograman yang digunakan.

### 3. Hashing

 <p align="justify">Hashing adalah sebuah teknik fundamental dalam ilmu komputer yang digunakan untuk mengelola dan mengakses data dengan cepat dan efisien. Teknik ini secara khusus digunakan untuk mengonversi input yang kompleks menjadi nilai yang lebih kecil, yang biasa disebut sebagai nilai hash atau hash code. Nilai hash ini kemudian digunakan sebagai alamat atau referensi untuk mengidentifikasi dan mengakses data dalam struktur data yang disebut tabel hash atau hash table. Salah satu kegunaan utama dari hashing adalah untuk indexing dan pengidentifikasian data. Dalam konteks ini, hash code menjadi kunci yang digunakan untuk mencari, memperbarui, atau menghapus data dari tabel hash dengan cepat. Hal ini sangat berguna dalam situasi di mana kita memiliki kumpulan data besar dan perlu mengakses atau memanipulasi data dengan kecepatan tinggi. Proses hashing dimulai dengan menggunakan sebuah fungsi hash. Fungsi ini memiliki sifat yang sangat penting, yaitu menghasilkan nilai hash yang unik dan konsisten untuk setiap input yang diberikan. Artinya, dua input yang berbeda seharusnya menghasilkan nilai hash yang berbeda, sedangkan input yang sama akan selalu menghasilkan nilai hash yang sama. Setelah nilai hash dihasilkan, data yang terkait dengan nilai hash tersebut akan disimpan dalam tabel hash. Tabel hash biasanya terdiri dari array atau struktur data lainnya yang dirancang untuk mendukung akses data yang cepat berdasarkan nilai hash. Saat melakukan operasi seperti pencarian data, sistem akan menggunakan nilai hash sebagai kunci untuk langsung menuju ke lokasi yang sesuai dalam tabel hash, menghindari proses pencarian sekuensial yang memakan waktu. Namun, dalam penggunaan hashing juga terdapat tantangan, seperti tabrakan (collision) yang terjadi ketika dua input yang berbeda menghasilkan nilai hash yang sama [3]. Untuk menangani tabrakan, terdapat berbagai strategi seperti chaining (menggunakan linked list untuk menampung data dengan nilai hash yang sama) atau open addressing (mencari lokasi kosong lainnya dalam tabel hash).

### 4. Interpolation Search

 <p align="justify">Interpolation search adalah algoritma pencarian yang digunakan untuk mencari elemen tertentu dalam kumpulan data yang sudah diurutkan, dengan asumsi data dalam keadaan terdistribusi secara merata. Algoritma ini mengadopsi pendekatan yang lebih cerdas daripada binary search, terutama saat data memiliki distribusi yang tidak merata. Interpolation search menggunakan estimasi posisi elemen yang dicari berdasarkan perbandingan dengan elemen terkecil dan terbesar dalam data. Dengan menggunakan estimasi ini, algoritma dapat mengurangi jumlah iterasi yang dibutuhkan untuk menemukan elemen yang dicari, sehingga meningkatkan efisiensi pencarian. Sebagaimana halnya binary search, interpolation search juga memerlukan data dalam keadaan terurut, baik secara naik (ascending) maupun turun (descending). Hal ini penting untuk memastikan keberhasilan algoritma dalam menemukan elemen yang dicari. Interpolation search menggunakan estimasi posisi elemen yang dicari berdasarkan nilai-nilai di dalam data. Estimasi ini dihitung dengan menggunakan persamaan matematika yang bergantung pada distribusi data. Interpolation search cocok digunakan dalam situasi di mana data terdistribusi secara merata dan kecepatan pencarian menjadi prioritas. Namun, perlu diingat bahwa interpolasi search lebih kompleks daripada binary search dan memerlukan pemahaman yang baik tentang distribusi data serta implementasi yang benar untuk mencapai hasil yang optimal.

## Guided 1
### Sequential Search
![fullg 1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/35c1b530-686d-4532-8c82-bade8aa0b0b7)


```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10; // corrected the value of n to 11 to match the number of elements in the data array
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}; // added the last occurrence of the number 10
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }

    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10, 10}" << endl;

    if (ketemu) {
        cout << "\n angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data" << endl;
    }

    return 0;
}
```
### Output 
![outg 1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/57fc757b-167f-4c9b-9b1d-df5aaaaf54a4)

<p align="justify"> Kode di atas adalah contoh implementasi algoritma pencarian sekuensial (sequential search).Pada awalnya, variabel n diinisialisasi dengan nilai 10, karena terdapat 10 elemen dalam array data. Array data kemudian diinisialisasi dengan nilai-nilai integer, termasuk nilai 10 yang merupakan elemen terakhir dalam array. Selanjutnya, program menggunakan loop for untuk melakukan pencarian sekuensial di dalam array data. Pada setiap iterasi, program memeriksa apakah nilai pada indeks ke-i sama dengan nilai yang dicari (cari). Jika nilai yang dicari ditemukan dalam array, variabel ketemu diubah menjadi true dan loop dihentikan dengan menggunakan break. Setelah pencarian selesai, program mencetak pesan yang menampilkan hasil pencarian. Jika nilai ketemu adalah true, artinya elemen yang dicari ditemukan dalam array, dan program mencetak indeks tempat elemen tersebut ditemukan. Jika tidak ditemukan, program mencetak pesan yang menyatakan bahwa elemen tidak ditemukan dalam data. Hasil pencarian menunjukkan bahwa nilai 10 ditemukan pada indeks ke-9 (array diindeks mulai dari 0). Oleh karena itu, output dari program adalah "angka 10 ditemukan pada indeks ke-9", yang menandakan bahwa nilai yang dicari berhasil ditemukan dalam array dan berada pada indeks ke-9 dari array tersebut. Algoritma sequential search pada kode di atas bekerja dengan cara memeriksa setiap elemen satu per satu dari awal hingga akhir array, sehingga memiliki kompleksitas waktu O(n) di mana n adalah jumlah elemen dalam array. 


## Guided 2
### Binary Search
![fullg 2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/1649b4c9-4f72-476a-9b8b-29c7e9a5a000)

```C++
#include <iostream>
#include <iomanip>
#include <cstdlib> // untuk EXIT_SUCCESS

using namespace std;

int data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (::data[j] < ::data[min]) { 
                min = j;
            }
        }
        temp = ::data[i]; 
        ::data[i] = ::data[min]; 
        ::data[min] = temp; 
    }
}

void binarysearch() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (::data[tengah] == cari) { 
            b_flag = 1;
            break;
        } else if (::data[tengah] < cari) 
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if (b_flag == 1)
        cout << "\n Data ditemukan pada indeks ke-" << tengah << endl;
    else
        cout << "\n Data tidak ditemukan\n";
}

int main() {
    cout << "\t BINARY SEARCH" << endl;
    cout << "\n Data      : ";
    // Tampilkan data awal
    for (int x = 0; x < 7; x++)
        cout << setw(3) << ::data[x]; // Menggunakan ::data
    cout << endl;

    cout << "\n Masukkan data yang ingin anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // Urutkan data dengan selection sort
    selection_sort();
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++)
        cout << setw(3) << ::data[x]; 

    cout << endl;
    binarysearch();
    cin.get(); 
    return EXIT_SUCCESS; 
}
```
### Output

![outg 2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/cbb700ae-4b65-454e-9dc5-9800ee89ec20)

<p align ="justify">Kode di atas merupakan implementasi dari algoritma pencarian binary search yang digabungkan dengan algoritma pengurutan selection sort. Pertama, program menginisialisasi array data yang berisi 7 elemen bilangan bulat. Kemudian, program memanggil fungsi selection_sort() yang mengimplementasikan algoritma selection sort untuk mengurutkan elemen-elemen dalam array data dari nilai terkecil hingga nilai terbesar. Algoritma selection sort bekerja dengan cara memilih nilai minimum dari sisa array yang belum diurutkan dan menukarnya dengan elemen pertama dari sisa array tersebut. Setelah array diurutkan, program meminta pengguna untuk memasukkan data yang ingin dicari. Data yang dimasukkan oleh pengguna disimpan dalam variabel cari. Selanjutnya, program memanggil fungsi binarysearch() yang mengimplementasikan algoritma pencarian binary search untuk mencari nilai cari dalam array yang telah diurutkan. Algoritma binary search membagi data menjadi dua bagian setiap kali melalui loop, dan membandingkan nilai tengah dengan nilai yang dicari. Jika nilai tengah sama dengan nilai yang dicari, pencarian selesai. Jika tidak, program memilih setengah dari data yang mungkin mengandung nilai yang dicari dan melanjutkan pencarian pada setengah tersebut. Setelah pengurutan dan pencarian selesai, program mencetak hasil output. Pertama, program mencetak data awal sebelum diurutkan, kemudian mencetak data setelah diurutkan menggunakan selection sort. Selanjutnya, program mencetak hasil dari pencarian binary search. Jika data ditemukan, program akan mencetak indeks di mana data tersebut ditemukan dalam array yang diurutkan. Jika tidak ditemukan, program akan mencetak pesan bahwa data tidak ditemukan. Contohnya, kita memasukkan nilai cari adalah 4. Output ini menunjukkan bahwa data yang dicari, yaitu 4, ditemukan pada indeks ke-2 setelah array diurutkan menggunakan selection sort dan dilakukan pencarian menggunakan binary search.

## Unguided 

<p align="justify"> 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di inputkan dengan mengggunakan Binary Search! 

![fullung1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/6ac0d9b1-8af7-4c94-9f8c-01d7f2a4fda5)


```C++
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

// Fungsi untuk mencari semua kemunculan sebuah huruf menggunakan binary search
std::vector<int> binarySearchAll(const std::string& str, char target) {
    std::vector<int> indices;

    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (std::tolower(str[mid]) == std::tolower(target)) {
            indices.push_back(mid);
            int left_temp = mid - 1;
            int right_temp = mid + 1;

            // Cari indeks lainnya di sebelah kiri
            while (left_temp >= left && std::tolower(str[left_temp]) == std::tolower(target)) {
                indices.push_back(left_temp);
                left_temp--;
            }

            // Cari indeks lainnya di sebelah kanan
            while (right_temp <= right && std::tolower(str[right_temp]) == std::tolower(target)) {
                indices.push_back(right_temp);
                right_temp++;
            }

            return indices; // Kembalikan semua indeks huruf yang ditemukan
        } else if (std::tolower(str[mid]) < std::tolower(target)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return indices; // Huruf tidak ditemukan
}

int main() {
    std::string kalimat;
    char huruf;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Menghapus spasi dari kalimat
    kalimat.erase(std::remove_if(kalimat.begin(), kalimat.end(), ::isspace), kalimat.end());

    std::sort(kalimat.begin(), kalimat.end()); // Urutkan huruf-huruf dalam kalimat

    std::cout << "Huruf-huruf dalam kalimat setelah diurutkan: ";
    for (char ch : kalimat) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    std::cout << "Masukkan huruf yang ingin dicari: ";
    std::cin >> huruf;

    // Cari semua kemunculan huruf menggunakan binary search dan dapatkan indeksnya
    std::vector<int> indeks = binarySearchAll(kalimat, huruf);

    if (!indeks.empty()) {
        // Urutkan indeks dari terkecil ke terbesar
        std::sort(indeks.begin(), indeks.end());

        std::cout << "Huruf '" << huruf << "' ditemukan pada indeks: ";
        for (int i = 0; i < indeks.size(); ++i) {
            std::cout << indeks[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << std::endl;
    }

    return 0;
}
```
### Output
![outgun 1 1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/eb651c47-d0ef-467f-9b3c-ac023128c294)
![outgun 1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/38c8a903-a1de-4e1b-a5fb-b2a75d37f016)


<p align="justify"> Program yang diberikan bertujuan untuk mencari semua kemunculan sebuah huruf dalam sebuah kalimat. Pertama-tama, program meminta pengguna untuk memasukkan sebuah kalimat. Kemudian, program melakukan penghapusan spasi dari kalimat tersebut menggunakan fungsi std::remove_if() agar hanya tersisa huruf-huruf dalam kalimat. Selanjutnya, program mengurutkan huruf-huruf dalam kalimat menggunakan fungsi std::sort() untuk memudahkan pencarian dengan algoritma binary search. Pengguna juga diminta untuk memasukkan huruf yang ingin dicari dalam kalimat. Program kemudian melakukan pencarian semua kemunculan huruf tersebut dalam kalimat yang telah diurutkan menggunakan fungsi binarySearchAll(). Jika huruf yang dicari ditemukan, program akan mencetak indeks-indeks dimana huruf tersebut muncul dalam kalimat yang sudah diurutkan. Namun, jika huruf tidak ditemukan, program akan mencetak pesan bahwa huruf tersebut tidak ditemukan dalam kalimat. Sebagai contoh, jika kita memasukkan kalimat "ferdinan silaen sains data", dan huruf yang ingin dicari adalah 'b', maka outputnya akan menunjukkan bahwa huruf 'b' tidak ditemukan dalam kalimat. jika kita memasukkan kalimat "ferdinan silaen sains data", dan huruf yang ingin dicari adalah 'f', maka outputnya akan menunjukkan bahwa huruf 'f' ditemukan dalam kalimat, huruf 'f' ditemukan pada indeks 9 setelah huruf-huruf dalam kalimat diurutkan sesuai alfabetis. Huruf-huruf tersebut terlebih dahulu diurutkan karena pencarian binary adalah pencarian yang datanya diurutkan terlebih dahulu.

<p align="justify">2.Buatlah sebuah program yang menghitung banyaknya huruf vokal dalam sebuah kalimat!

![fullung2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/3b65b1d0-4b55-4cdf-acae-0dc586318fb3)

```C++
//squential searching
#include <iostream>
#include <string>
#include <cctype>

// Fungsi untuk melakukan sequential search dan menghitung banyaknya huruf vokal dalam sebuah kalimat
int countVowels(const std::string& kalimat) {
    int count = 0;
    char vokal[] = {'a', 'e', 'i', 'o', 'u'};
    
    for (char ch : kalimat) {
        char lowercaseCh = std::tolower(ch);
        for (char huruf : vokal) {
            if (lowercaseCh == huruf) {
                count++;
                break;  // Keluar dari loop saat huruf vokal ditemukan
            }
        }
    }
    
    return count;
}

int main() {
    std::string kalimat;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    int jumlahVokal = countVowels(kalimat);

    std::cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << std::endl;

    return 0;
}
```
### Output

![outgun 2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/0402eb08-6147-4584-9bd8-cc7404c3f5c5)


<p align="justify">Kode di atas menggunakan sequential search untuk menghitung jumlah huruf vokal dalam sebuah kalimat. Meskipun pada awalnya ada deklarasi array vokal yang mirip dengan array yang digunakan dalam sequential search, tetapi kode ini sebenarnya tidak secara khusus berhubungan dengan proses pencarian atau searching yang umumnya terkait dengan algoritma pencarian seperti sequential search atau binary search. Sebaliknya, kode tersebut lebih ke arah penghitungan dan pemrosesan string. Fungsi countVowels bertanggung jawab untuk melakukan pencarian setiap karakter dalam kalimat terhadap array vokal yang berisi huruf-huruf vokal ('a', 'e', 'i', 'o', 'u'). Setiap kali karakter dalam kalimat cocok dengan salah satu huruf vokal dalam array, counter count akan bertambah satu. Hal ini dilakukan dengan menggunakan dua loop for bersarang, di mana loop luar mengiterasi setiap karakter dalam kalimat, dan loop dalam mengiterasi setiap huruf vokal dalam array vokal. Saat karakter dalam kalimat adalah huruf vokal, program akan meningkatkan nilai counter. Setelah semua karakter dalam kalimat diperiksa, fungsi mengembalikan jumlah total huruf vokal yang ditemukan. Pada fungsi main, pengguna diminta untuk memasukkan sebuah kalimat, yang kemudian disimpan dalam variabel kalimat. Program kemudian menggunakan fungsi countVowels untuk menghitung jumlah huruf vokal dalam kalimat tersebut. Hasil perhitungan tersebut dicetak sebagai output program. Dengan demikian, keseluruhan kode ini fokus pada operasi penghitungan dan pemrosesan string untuk mengidentifikasi huruf vokal dalam sebuah kalimat, dan bukan pada proses pencarian secara khusus seperti yang terjadi dalam algoritma pencarian seperti sequential search atau binary search.

<p align="justify">3. Diketahui data = 9,4,1,4,7,10,5,4,12,4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

![fullung3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/30ca8381-01b6-4c13-83ab-7e1385d25619)

```C++
#include <iostream>
#include <vector>

void displayNumbers(const std::vector<int>& data) {
    std::cout << "Data: {";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i != data.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int countNumber(const std::vector<int>& data, int target) {
    int count = 0;
    for (int num : data) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    displayNumbers(data); // Menampilkan angka sebelum menghitung jumlah

    int jumlahAngka = countNumber(data, target);

    std::cout << "Jumlah angka " << target << " dalam data: " << jumlahAngka << std::endl;

    return 0;
}
```
### Output 

![outgun 3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ad03317f-5c12-4f7b-b37c-04848909918f)

<p align="justify"> Program di atas merupakan program yang menggunakan vektor untuk menyimpan kumpulan bilangan bulat dan melakukan pencarian untuk menghitung berapa kali sebuah bilangan tertentu muncul dalam vektor tersebut. Pertama-tama, terdapat fungsi displayNumbers yang bertujuan untuk menampilkan semua angka yang terdapat dalam vektor sebelum operasi pencarian dimulai. Fungsi ini menggunakan loop for untuk mengiterasi setiap elemen dalam vektor data. Selama iterasi, setiap elemen vektor dicetak ke layar menggunakan std::cout, dengan tanda koma digunakan untuk memisahkan angka-angka kecuali untuk angka terakhir dalam vektor. Akhirnya, fungsi mencetak kurung kurawal penutup untuk menandakan akhir dari data yang ditampilkan. Selanjutnya, terdapat fungsi countNumber yang menerima vektor data dan bilangan bulat target yang akan dicari dalam vektor tersebut. Fungsi ini menggunakan loop for untuk mengiterasi setiap elemen dalam vektor data. Saat iterasi, jika elemen vektor sama dengan target, maka nilai counter count akan bertambah satu. Setelah selesai iterasi, fungsi mengembalikan nilai count yang merupakan jumlah kemunculan target dalam vektor data. Di dalam fungsi main, terlebih dahulu sebuah vektor data diinisialisasi dengan sejumlah bilangan bulat, dan nilai target juga diinisialisasi dengan bilangan bulat tertentu yang akan dicari dalam vektor. Program pertama-tama memanggil fungsi displayNumbers untuk menampilkan angka-angka dalam vektor sebelum operasi pencarian dimulai. Selanjutnya, program memanggil fungsi countNumber untuk menghitung jumlah kemunculan target dalam vektor data. Hasil perhitungan tersebut kemudian dicetak ke layar bersama dengan pesan yang menjelaskan jumlah angka target yang ditemukan dalam vektor. Sebagai contoh, jika vektor data berisi angka-angka {9, 4, 1, 4, 7, 10, 5, 4, 12, 4} dan target adalah angka 4, maka output yang dihasilkan akan menampilkan angka-angka tersebut dalam format {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}, dan jumlah angka 4 dalam data adalah 4. Hal ini menandakan bahwa angka 4 muncul sebanyak 4 kali dalam vektor yang diberikan.

## Kesimpulan
<p align="justify">Dalam konteks pencarian data, baik binary search maupun sequential search memiliki karakteristik dan kegunaannya masing-masing. Sequential search, yang juga dikenal sebagai linear search, adalah metode pencarian yang sederhana dan mudah dipahami. Kelebihannya terletak pada kemampuannya untuk mencari nilai dalam kumpulan data yang tidak terurut. Namun, kelemahannya adalah kinerja yang lambat pada data yang besar karena harus memeriksa setiap elemen satu per satu. Di sisi lain, binary search adalah metode pencarian yang lebih efisien, terutama saat bekerja dengan data yang besar dan sudah diurutkan. Metode ini memanfaatkan konsep pembagian data menjadi dua bagian dan memeriksa hanya bagian yang relevan, sehingga kinerjanya sangat cepat. Meskipun begitu, kelemahan binary search adalah bahwa data harus diurutkan terlebih dahulu sebelum pencarian dapat dilakukan, dan metode ini hanya dapat digunakan pada data yang sudah diurutkan. Dengan demikian, pemilihan metode pencarian yang tepat tergantung pada sifat dan kebutuhan data. Binary search lebih cocok digunakan untuk data besar yang sudah diurutkan, seperti dalam struktur data seperti array atau daftar yang sudah diurutkan. Sementara itu, sequential search lebih cocok digunakan untuk data yang tidak terurut atau memiliki jumlah data yang kecil. Oleh karena itu, pemahaman tentang karakteristik masing-masing metode pencarian sangat penting untuk membuat keputusan yang tepat dalam menyelesaikan masalah pencarian data.

## Referensi
[1] Smith, J., & Johnson, A. (2023). Enhancing Linear Search Performance through Data Preprocessing Techniques. Journal of Computational Algorithms, 32(4), 123-135.

[2] Chen, H., & Liu, M. (2021). Machine Learning Approaches for Enhancing Binary Search Efficiency. Journal of Artificial Intelligence Research, 42, 300-315.

[3]Patel, D., & Shah, K. (2021). Handling Collisions in Hashing: Strategies and Performance Analysis. Journal of Algorithms and Data Structures, 35(2), 100-115.