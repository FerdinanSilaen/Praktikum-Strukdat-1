 <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Pengurutan (sorting) adalah proses mengatur elemen-elemen data dalam suatu urutan tertentu, biasanya dari yang terkecil ke yang terbesar atau sebaliknya, sesuai dengan aturan yang ditentukan. Pengurutan adalah salah satu operasi yang paling umum dalam komputasi dan digunakan dalam berbagai aplikasi, seperti pencarian, pemrosesan data, analisis data, dan lainnya. Pengurutan memungkinkan implementasi algoritma pencarian yang lebih efisien. Dalam data yang terurut, pencarian biner, misalnya, dapat digunakan untuk mencari elemen tertentu dengan kompleksitas waktu logaritmik. Tanpa pengurutan, pencarian linier mungkin diperlukan, yang memiliki kompleksitas waktu linear. Selain itu, pengurutan juga memberikan fleksibilitas dalam penyajian data kepada pengguna. Dengan menyusun data sesuai dengan preferensi atau kebutuhan mereka, pengguna dapat dengan mudah menganalisis dan memahami informasi yang terkandung dalam data tersebut. Metode sorting yang umum digunakan adakah bubble sort, insertion sort, selection sort, merge sort, quick sort [1]. Lebih jauh lagi, pengurutan memainkan peran penting dalam pemrosesan data paralel, di mana penelitian terus dilakukan untuk mengembangkan algoritma pengurutan yang dapat dijalankan secara efisien di lingkungan dengan banyak prosesor atau sumber daya terdistribusi. 

### 1. Bubble Sort

<p align="justify">Bubble Sort adalah salah satu algoritma pengurutan yang paling sederhana dalam dunia pemrograman, sering digunakan untuk tujuan pendidikan dan pemahaman dasar tentang pengurutan. Prinsip kerjanya sangat mudah dimengerti, algoritma ini secara berulang membandingkan pasangan elemen berturut-turut dalam array dan jika ditemukan bahwa elemen yang lebih kecil berada setelah elemen yang lebih besar, maka mereka ditukar posisinya [2]. Proses ini berulang hingga tidak ada lagi pertukaran yang dilakukan, yang menunjukkan bahwa array sudah benar-benar terurut. Namun, meskipun sederhana, Bubble Sort tidak efisien untuk array besar. Ini karena algoritma ini memerlukan banyak pertukaran elemen yang memakan waktu, terutama dalam kasus di mana arraynya tidak hampir terurut. Dengan kompleksitas waktu O(n^2) dalam kasus rata-rata dan terburuk, di mana n adalah jumlah elemen dalam array, Bubble Sort tidak cocok untuk penggunaan dalam situasi di mana kinerja waktu eksekusi menjadi faktor kritis. Meskipun demikian, memahami prinsip kerja Bubble Sort dapat memberikan dasar yang baik untuk memahami algoritma pengurutan yang lebih kompleks dan efisien.

### 2. Selection Sort

<p align="justify">Selection Sort merupakan algoritma pengurutan yang cukup mudah dimengerti. Bayangkan jika kita diminta untuk mengurutkan kartu permainan dari yang terkecil hingga yang terbesar. Dalam algoritma ini, kita akan secara berulang memilih kartu dengan nilai terkecil dari tumpukan yang belum diurutkan, dan menukarnya dengan kartu paling depan dari tumpukan tersebut. Proses ini akan terus berlanjut, dengan Anda memilih kartu terkecil dari tumpukan yang semakin kecil setiap kali, dan menempatkannya di urutan yang benar. Ini berlanjut sampai semua kartu telah diurutkan. Meskipun Selection Sort memiliki kompleksitas waktu yang sama dengan Bubble Sort, yaitu O(n^2), tetapi cenderung lebih cepat dalam praktek karena jumlah pertukaran yang lebih sedikit [3]. Namun, Selection Sort tetap tidak efisien untuk array besar.  Analoginya adalah seperti saat kita harus menyusun kartu permainan yang sangat banyak. Walaupun lebih efisien dalam memilih kartu terkecil, tetapi proses tersebut tetap akan memakan waktu yang cukup lama karena kita harus melakukannya satu per satu.

### 3. Insertion Sort

 <p align="justify">Insertion Sort adalah salah satu algoritma pengurutan yang sederhana namun efektif, terutama untuk kumpulan data yang kecil atau hampir terurut. Prinsip dasarnya adalah memposisikan setiap elemen dari array pada tempat yang tepat dalam array yang sudah diurutkan sebelumnya. Secara teknis, algoritma Insertion Sort berfungsi dengan membandingkan setiap elemen array dengan elemen-elemen sebelumnya dalam array yang sudah diurutkan. Ketika elemen tersebut ditempatkan pada posisi yang tepat, algoritma akan memindahkan elemen-elemen yang lebih besar satu per satu ke posisi yang lebih tinggi untuk membuat ruang bagi elemen yang baru. Proses ini berlanjut hingga semua elemen dalam array telah ditempatkan pada posisi yang tepat. Meskipun Insertion Sort memiliki kompleksitas waktu rata-rata O(n^2), di mana n adalah jumlah elemen dalam array, namun algoritma ini cenderung lebih cepat daripada Bubble Sort atau Selection Sort untuk kumpulan data yang kecil atau hampir terurut. Kelebihan Insertion Sort terletak pada kinerjanya yang baik dalam menangani kumpulan data yang sudah hampir terurut.


### 4. Quick Sort

 <p align="justify">Quick Sort adalah algoritma pengurutan yang cepat dan efisien. Prinsip dasarnya adalah memilih elemen tertentu sebagai pivot, kemudian membagi array menjadi dua subarray: satu subarray berisi elemen yang lebih kecil dari pivot, dan yang lainnya berisi elemen yang lebih besar. Proses ini diulangi secara rekursif untuk setiap subarray, sampai semua subarray memiliki satu elemen atau tidak ada elemen sama sekali. Kemudian, subarray-subarray tersebut digabungkan kembali untuk membentuk array yang sudah terurut. Pemilihan pivot adalah langkah penting dalam Quick Sort. Pemilihan pivot yang tepat dapat meningkatkan kinerja algoritma secara signifikan. Biasanya, pivot dipilih dari tengah array atau secara acak. Namun, jika pivot dipilih dari ujung array dan arraynya hampir terurut, kinerja Quick Sort bisa menjadi buruk, mencapai kompleksitas waktu O(n^2) dalam kasus terburuk. Meskipun demikian, dalam kasus rata-rata, Quick Sort memiliki kompleksitas waktu O(n log n), di mana n adalah jumlah elemen dalam array. Quick Sort juga sering lebih cepat daripada Merge Sort dalam implementasi praktis karena overhead yang lebih rendah.
    

### 5. Merge Sort

 <p align="justify">Merge Sort adalah algoritma pengurutan yang stabil dan efisien yang menggunakan teknik pembagian dan penaklukkan (divide and conquer). Algoritma ini bekerja dengan membagi array menjadi dua bagian sekitar pertengahan, mengurutkan kedua bagian secara rekursif, dan kemudian menggabungkan kedua bagian yang sudah terurut menjadi satu. Proses penggabungan (merge) merupakan langkah penting dalam Merge Sort. Dalam langkah ini, elemen-elemen dari dua subarray yang sudah terurut digabungkan menjadi satu array yang terurut. Merge Sort memiliki kompleksitas waktu O(n log n) dalam semua kasus, yang membuatnya lebih diinginkan daripada Quick Sort dalam banyak situasi, terutama untuk kumpulan data besar atau hampir terurut [3]. Merge Sort memiliki kinerja yang konsisten di semua kasus, sementara Quick Sort rentan terhadap kasus terburuk jika pivot dipilih dengan buruk atau jika data hampir terurut.


## Guided 1
### Bubble Sort
![guidedfull1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/7046a4ab-d8a1-4aa7-bcf7-bbd79cbd9771)

```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j = 0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {

    for(int i = 0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting : " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting : " << endl;
    print_array(a, length);
}
```
### Output 
![outg1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/6799286d-fb62-4aba-b5f3-cebbb482981e)

<p align="justify"> Dalam kode program tersebut, fungsi bubble_sort menerima array bilangan desimal (double) dan panjang array sebagai argumen. Algoritma bubble sort diimplementasikan dengan menggunakan perulangan while dan for bersarang. Perulangan while digunakan untuk mengulang proses sorting sampai tidak ada lagi pertukaran nilai yang dilakukan, sedangkan perulangan for digunakan untuk membandingkan pasangan nilai berurutan dalam array dan melakukan pertukaran jika diperlukan. Setelah proses sorting, dapat dilihat bahwa nilai-nilai array telah diurutkan dari yang terkecil (8.2) hingga yang terbesar (99.99) sesuai dengan algoritma bubble sort. Jika nilai pertama lebih besar dari nilai kedua, maka kedua nilai tersebut ditukar posisinya. Proses ini diulang secara berulang sampai tidak ada lagi pertukaran yang perlu dilakukan, sehingga array diurutkan dari nilai terkecil hingga terbesar. Kemudian fungsi print_array digunakan untuk mencetak nilai-nilai array sebelum dan setelah proses sorting. Kompleksitas waktu kode program diatas adalah O(n^2). Perulangan for di dalam perulangan while akan berjalan sebanyak n kali pada iterasi pertama, kemudian n-1 kali pada iterasi kedua, n-2 kali pada iterasi ketiga, dan seterusnya. Hal ini membuat jumlah total iterasi menjadi sekitar n(n-1)/2, yang lebih dekat dengan O(n^2) saat n menjadi besar.

## Guided 2
### Insertion Sort
![guidedfull2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/02d8e9f5-2d8b-4fa7-9a35-ac2d56e0ec42)


```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

void print_array(char a[], int length) {

    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 7;
    char a[length] = {'G', 'J', 'F', 'H', 'I', 'B', 'R'};

    cout << "Urutan Karakter Sebelum Sorting : " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\nUrutan Karakter Setelah Sorting : " << endl;
    print_array(a, length);
}
```
### Output

![outg2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/a3207b1a-975e-4e8c-968f-1b40f5d46700)


<p align ="justify">Program  diatas mendeklarasikan sebuah array karakter dengan panjang 7 dan elemen-elemen karakter yang belum terurut. Kemudian, fungsi insertion_sort digunakan untuk mengurutkan array tersebut. Algoritma insertion sort bekerja dengan cara membandingkan setiap elemen dengan elemen-elemen sebelumnya dalam array, dan jika ditemukan elemen yang lebih kecil, elemen tersebut akan ditukar ke posisi yang sesuai dalam array yang terurut. Proses ini dilakukan secara berulang hingga seluruh elemen terurut. Selanjutnya, program mencetak urutan karakter sebelum dan setelah proses sorting menggunakan fungsi print_array. Pada output di atas, dapat dilihat bahwa urutan karakter sebelum proses sorting adalah "G J F H I B R", sedangkan urutan karakter setelah proses sorting adalah "B F G H I J R", yang merupakan urutan karakter yang sudah terurut. Big O dari kode di atas adalah O(n^2), di mana n adalah jumlah elemen dalam array yang akan diurutkan. Pada tahap terburuk, di mana array terbalik terurut, setiap elemen akan dipindahkan ke posisi yang benar dalam array yang terurut. Ini berarti pada iterasi pertama, elemen pertama akan memerlukan 1 perbandingan dan paling banyak 1 pemindahan. Pada iterasi kedua, elemen kedua memerlukan 2 perbandingan dan paling banyak 2 pemindahan. Proses ini berlanjut hingga elemen terakhir yang memerlukan n-1 perbandingan dan paling banyak n-1 pemindahan. Jumlah total perbandingan dan pemindahan dalam algoritma insertion sort adalah sekitar n(n-1)/2, yang dapat disederhanakan menjadi sekitar n^2 / 2. Dalam analisis Big O, konstanta seperti 1/2 diabaikan, sehingga kompleksitas waktu dari algoritma insertion sort adalah O(n^2). 

## Unguided 

<p align="justify"> 1. . Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

![unguidedfull1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b8f53b93-0a2f-4dca-b2a4-087dcf9529f4)

```C++
#include <iostream>
using namespace std;

void selection_sort(double arr[], int length) {
    int i, j, min_idx;
    double tmp;

    for (i = 0; i < length - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < length; j++) {
            if (arr[j] > arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            tmp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = tmp;
        }
    }
}

void print_array(double a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "IPS sebelum sorting : " << endl;
    print_array(a, length);

    selection_sort(a, length);

    cout << "\nIPS setelah sorting : " << endl;
    print_array(a, length);
}
```
### Output
![outung1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c7798e44-f50f-4b04-bbb9-05f6b5092359)

<p align="justify"> Pada kode program diatas algoritma selection sort bekerja dengan cara mencari nilai terbesar di antara elemen-elemen yang belum terurut, kemudian menukarnya dengan elemen pertama yang belum terurut. Proses ini diulang secara berulang hingga seluruh elemen terurut. Pada fungsi selection_sort, terdapat dua perulangan bersarang: perulangan luar untuk mengontrol iterasi melalui seluruh elemen array, dan perulangan dalam untuk mencari nilai terbesar di antara elemen-elemen yang belum terurut. Selama proses iterasi, nilai terbesar akan ditandai dengan variabel min_idx dan nilai tersebut akan ditukar dengan elemen pertama yang belum terurut jika ditemukan nilai terbesar yang lebih besar dari elemen pertama yang belum terurut. Pada output di atas, baris pertama menampilkan urutan nilai-nilai array sebelum proses sorting, yaitu 3.8, 2.9, 3.3, 4, 2.4. Sedangkan baris kedua menampilkan urutan nilai-nilai array setelah proses sorting selesai, yaitu 4, 3.8, 3.3, 2.9, 2.4. Jumlah total operasi yang dilakukan dalam algoritma selection sort adalah sekitar n(n-1)/2, yang dalam analisis Big O disederhanakan menjadi O(n^2) karena faktor terpenting dalam menentukan kompleksitas waktu adalah pangkat tertinggi dari n.

<p align="justify">2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo,
dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! 

![unguidedfull2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/7d11b7c4-a462-4022-ad02-b9ca7ee511bb)

```C++
#include <iostream>
#include <string>
using namespace std;

void bubble_sort(string arr[], int length) {
    bool not_sorted = true;
    int j = 0;
    string tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

void print_array(string a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 10;
    string a[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    cout << "Urutan nama sebelum sorting : " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan nama setelah sorting : " << endl;
    print_array(a, length);
    return 0;
}
```
### Output
![outung2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/fd662abd-cb0b-459e-a6f1-3487ff0f7ab5)

<p align="justify">Pada kode pragram di atas algoritma bubble sort bekerja dengan cara membandingkan dua elemen yang berdekatan dan melakukan pertukaran jika diperlukan hingga seluruh array terurut. Menggunakan variabel not_sorted sebagai penanda apakah array masih perlu diurutkan atau tidak. Variabel ini diinisialisasi dengan nilai true agar perulangan pertama di dalam while loop dapat berjalan. Di dalam perulangan while, terdapat perulangan for untuk membandingkan nilai elemen array dan melakukan pertukaran jika diperlukan. Jika nilai pada indeks i lebih besar dari nilai pada indeks i + 1, maka dilakukan pertukaran nilai dan variabel not_sorted diubah menjadi true untuk menandakan bahwa masih terjadi pertukaran nilai. Pada setiap iterasi, algoritma ini membandingkan pasangan elemen berdekatan dan menukar posisinya jika elemen sebelumnya lebih besar dari elemen berikutnya. Proses ini diulang kembali hingga tidak ada lagi pertukaran yang perlu dilakukan, menandakan bahwa array sudah terurut. Output tersebut menunjukkan urutan nama sebelum dan setelah proses sorting menggunakan algoritma bubble sort. Nama-nama telah diurutkan sesuai dengan alfabet dari A ke Z. Kompleksitas waktu dari algoritma bubble sort pada kodingan di atas adalah O(n^2), di mana n adalah jumlah elemen dalam array yang akan diurutkan. Perulangan while akan berjalan sebanyak n kali pada iterasi pertama, kemudian n-1 kali pada iterasi kedua, dan seterusnya hingga 1 kali pada iterasi terakhir. Di dalam perulangan while, terdapat perulangan for yang juga akan berjalan sebanyak n-1 kali pada iterasi pertama, n-2 kali pada iterasi kedua, dan seterusnya. Jumlah total operasi perbandingan dan pertukaran nilai dalam algoritma bubble sort adalah sekitar n(n-1)/2, yang menghasilkan kompleksitas waktu O(n^2). 


<p align="justify">3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun(descending)! 

![2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ba5d8948-7d88-450e-89b7-2da979b8d79a)

![unguidedfull3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5bb6ac01-e92a-4d4a-81a9-7d564f116d19)

```C++
#include <iostream>
using namespace std;

void ascending_sort(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                char temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descending_sort(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(char arr[], int length){
    for(int i=0; i<length; i++){
        cout << arr[i] << "\t";
        }
        cout << endl;
    }


int main() {
    int length;
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    char arr[n];
    int i;
    for (i=0; i<n ; i++){
        cout << "Masukkan karakter ke-"<< i+1 << ": " ;cin>>arr[i];
    }


    print_array(arr, length);
    cout<< "Urutan karakter sebelum di sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ascending_sort(arr, n);
    cout << "Urutan karakter setelah ascending sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    descending_sort(arr, n);
    cout << "Urutan karakter setelah descending sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```
### Output 

![outung3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/79032b10-38fa-4109-ad0e-d6b6a38ef3d1)

<p align="justify"> Kode program diatas menerapkan dua fungsi untuk mengurutkan array karakter (char) secara ascending (menaik) dan descending (menurun). Program ini juga memiliki fungsi untuk mencetak isi array dan sebuah fungsi utama (main) yang menjalankan proses input, pengurutan, dan output. Pada fungsi ascending sort, terdapat dua perulangan bersarang (nested loops) yang digunakan untuk membandingkan setiap elemen array dengan elemen-elemen setelahnya. Jika terdapat elemen yang lebih besar dari elemen yang dibandingkan, maka dilakukan pertukaran nilai. Proses ini berulang hingga seluruh elemen array terurut secara ascending. Fungsi descending sort memiliki struktur yang serupa dengan ascending_sort, namun perbandingan dilakukan untuk mengurutkan array secara descending. Artinya, jika terdapat elemen yang lebih kecil dari elemen yang dibandingkan, maka dilakukan pertukaran nilai. Kedua fungsi menggunakan nested loops, dimana loop pertama (for loop pertama) digunakan untuk mengambil satu per satu elemen array sebagai elemen yang akan dibandingkan dengan elemen-elemen selanjutnya dalam loop kedua (for loop kedua). Pada setiap iterasi loop kedua, dilakukan perbandingan antara elemen yang sedang diproses dengan elemen selanjutnya. Jika terjadi perbandingan yang sesuai (misalnya, untuk ascending sort, nilai elemen saat ini lebih kecil daripada nilai elemen selanjutnya), maka terjadi pertukaran nilai antara keduanya. Dengan demikian, kode program tersebut memberikan penggunaan yang interaktif untuk mengurutkan array karakter sesuai dengan preferensi pengguna (ascending atau descending) dan menampilkan hasilnya dalam output konsol. Kodingan di atas memiliki kompleksitas waktu O(n^2) untuk kedua fungsi ascending sort dan descending sort, di mana n adalah jumlah elemen dalam array yang akan diurutkan. Perulangan pertama (for loop pertama) akan berjalan sebanyak n kali, sedangkan perulangan kedua (for loop kedua) juga akan berjalan sebanyak n kali untuk setiap iterasi dari perulangan pertama. Oleh karena itu, total jumlah operasi yang dilakukan adalah sekitar n^2, yang menghasilkan kompleksitas waktu O(n^2).

## Kesimpulan
<p align="justify"> Sorting merupakan salah satu proses yang penting dalam pengolahan data yang dilakukan dalam berbagai bidang, termasuk komputer, matematika, ekonomi, dan lain sebagainya. Proses sorting bertujuan untuk mengurutkan elemen-elemen data dalam suatu struktur menjadi urutan yang teratur sesuai dengan aturan tertentu, seperti dari nilai terkecil ke terbesar atau sebaliknya, sesuai abjad, atau berdasarkan kriteria lainnya. Dalam konteks algoritma, terdapat berbagai macam algoritma sorting yang dapat digunakan, seperti bubble sort, selection sort, insertion sort. Setiap algoritma memiliki kompleksitas waktu dan ruang yang berbeda-beda, sehingga pemilihan algoritma sorting yang tepat sangat bergantung pada kebutuhan dan karakteristik data yang diolah. Misalnya, untuk data yang relatif kecil dan sederhana, algoritma seperti bubble sort atau insertion sort bisa menjadi pilihan karena sederhana dan mudah diimplementasikan. Namun, untuk data yang besar dan kompleks, algoritma seperti merge sort atau quick sort lebih disukai karena memiliki kompleksitas waktu yang lebih efisien, yaitu O(n log n).

## Referensi
[1] Chen, J., Meng, X., Han, W., & Leung, K. S. (2021). Optimized Sorting Algorithms for Big Data on Cloud Computing Platforms. IEEE Transactions on Cloud Computing, 9(1), 68-81.

[2] S. Lee and H. Kim, "Efficient External Sorting Techniques for Big Data Processing," IEEE Transactions on Big Data, vol. 7, no. 2, pp. 245-257, June 2020.

[3]D. Gupta and R. Singh, "Sorting Algorithms for Time-Series Data Analysis in Internet of Things," Journal of Ambient Intelligence and Humanized Computing, vol. 16, no. 6, pp. 817-830, July 2022.