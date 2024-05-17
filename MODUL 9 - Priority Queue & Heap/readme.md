 <h1 align="center">Laporan Praktikum Modul Priority Queue dan Heaps</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
### Priority Queue
<p align="justify"> Priority Queue adalah struktur data yang sangat penting dalam ilmu komputer dan banyak digunakan dalam berbagai aplikasi. Tidak seperti antrian biasa yang mengikuti prinsip FIFO (First In, First Out), queue prioritas mengatur elemen berdasarkan prioritas yang diberikan, sehingga elemen dengan prioritas lebih tinggi akan diakses atau diproses terlebih dahulu. Setiap elemen dalam queue prioritas memiliki prioritas yang terkait dengannya. Prioritas ini menentukan urutan pengeluaran elemen dari queue. Elemen dengan prioritas tertinggi diakses terlebih dahulu. Jika dua elemen memiliki prioritas yang sama, mereka biasanya diakses sesuai urutan kedatangan. Saat Anda menambahkan elemen ke antrian, elemen tersebut dimasukkan ke dalam posisi berdasarkan nilai prioritasnya. Misalnya, jika Anda menambahkan elemen dengan nilai prioritas tinggi ke antrean prioritas, elemen tersebut mungkin disisipkan di dekat bagian depan antrean, sedangkan elemen dengan nilai prioritas rendah dapat disisipkan di dekat bagian belakang. Ada beberapa cara untuk mengimplementasikan antrian prioritas, termasuk menggunakan array, linked list, heap, dan  binary search tree. Priority Queue dapat diimplementasikan dengan berbagai struktur data, tetapi salah satu yang paling efisien adalah Heap [1]. Heap adalah pohon biner yang mematuhi properti tertentu sehingga dapat mendukung operasi priority queue dengan efisiensi tinggi.

![Priority_Queue](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/4be7ac23-df32-451e-acad-2e239bc6c03b)

#### Penggunaan 
<p align="justify">Priority Queue banyak digunakan dalam berbagai algoritma untuk memecahkan berbagai masalah. Beberapa penggunaan Priority Queue dalam algoritma antara lain:

<p align="justify">1. Algoritma Dijkstra: Digunakan untuk menemukan jalur terpendek dalam graf berbobot positif. Priority Queue memungkinkan pemilihan simpul berikutnya dengan bobot terkecil selama proses pencarian jalur terpendek.

<p align="justify">2. Algoritma A (A-Star): Sering digunakan dalam permasalahan pencarian jarak terpendek dengan heuristik. Priority Queue membantu memilih simpul berikutnya berdasarkan nilai fungsi heuristik dan jarak yang sudah dilalui.

<p align="justify">3. Algoritma Huffman: Digunakan dalam kompresi data, di mana elemen-elemen dengan frekuensi kemunculan yang lebih tinggi diberikan prioritas lebih tinggi saat pembuatan pohon Huffman.

<p align="justify">4. Penjadwalan Tugas: Priority Queue membantu dalam menentukan urutan penjadwalan tugas berdasarkan prioritas yang telah ditentukan.


### Heap
<p align="justify">Heap adalah struktur data berbasis pohon yang digunakan untuk mengimplementasikan priority queue. Heap memastikan bahwa elemen dengan prioritas tertinggi atau terendah selalu berada di posisi root (akar) pohon. Ada dua jenis heap yang umum digunakan:

- Max-Heap

    <p align="justify">Min-Heap adalah struktur data di mana nilai setiap node lebih kecil atau sama dengan nilai anak-anaknya. Ini berarti elemen dengan nilai terkecil selalu berada di akar pohon, sehingga min-heap sangat efisien untuk operasi yang memerlukan pengambilan elemen terkecil secara cepat. Min-Heap biasanya diimplementasikan sebagai pohon biner lengkap, yang berarti semua level pohon terisi penuh kecuali mungkin level terakhir, yang terisi dari kiri ke kanan tanpa ada celah [2]. Operasi utama pada min-heap meliputi insert (menambahkan elemen baru), extract-min (menghapus dan mengembalikan elemen terkecil), dan get-min (mengembalikan elemen terkecil tanpa menghapusnya). Dalam operasi insert, elemen baru ditempatkan di akhir array dan kemudian dipindahkan ke posisi yang sesuai melalui proses yang disebut "shift up" untuk mempertahankan properti heap. Sebaliknya, operasi extract-min menggantikan elemen akar dengan elemen terakhir dalam array, mengurangi ukuran heap, dan kemudian memindahkan elemen baru di akar ke posisi yang sesuai menggunakan "shift down".

- Min-Heap
    
    <p align="justify">Max-Heap adalah kebalikan dari min-heap, di mana nilai setiap node lebih besar atau sama dengan nilai anak-anaknya. Dalam max-heap, elemen dengan nilai terbesar selalu berada di akar pohon, menjadikannya ideal untuk aplikasi yang memerlukan akses cepat ke elemen terbesar. Sama seperti min-heap, max-heap juga diimplementasikan sebagai pohon biner lengkap. Operasi pada max-heap juga mirip dengan min-heap, termasuk insert (menambahkan elemen baru), extract-max (menghapus dan mengembalikan elemen terbesar), dan get-max (mengembalikan elemen terbesar tanpa menghapusnya). Pada operasi insert, elemen baru ditempatkan di akhir array dan dipindahkan ke atas melalui proses "shift up" sampai properti max-heap terpenuhi [3]. Operasi extract-max menggantikan elemen akar dengan elemen terakhir, mengurangi ukuran heap, dan kemudian menggunakan "shift down" untuk memastikan elemen baru di akar berada di posisi yang benar sesuai dengan properti max-heap.

![Heap](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/967cc086-1f74-4ae6-b492-e7bca23d282e)

#### Karakteristik Heap
- Pohon Biner Lengkap (Complete Binary Tree)

    Heap selalu berbentuk pohon biner lengkap, yaitu semua level terisi penuh kecuali mungkin level terakhir, yang diisi dari kiri ke kanan tanpa ada celah.
- Heap Property

     Setiap node memiliki nilai yang lebih besar atau lebih kecil dari anak-anaknya, tergantung apakah itu max-heap atau min-heap.

#### Kelebihan Heap

- Kompleksitas waktu pada struktur data heap cenderung lebih sedikit. Untuk memasukkan atau menghapus elemen di heap, kompleksitas waktunya hanya O(log N).
- Membantu untuk menemukan jumlah minimum dan jumlah terbesar.
- Untuk operasi peek elemen paling awal, kompleksitas waktunya konstan O(1).
- Dapat diimplementasikan menggunakan array, tidak memerlukan ruang ekstra untuk pointer.
- Binary heap adalah pohon biner yang seimbang, dan mudah diterapkan.
- Heap dapat dibuat dengan O(N) waktu.

#### Kekurangan Struktur Data Heap

- Kompleksitas waktu untuk mencari elemen di Heap adalah O(N).
- Untuk menemukan penerus atau pendahulu dari suatu elemen, heap membutuhkan waktu O(N), sedangkan BST hanya membutuhkan waktu O(log N).
- Untuk mencetak semua elemen heap dalam urutan kompleksitas waktu adalah O(N*log N), sedangkan untuk BST, hanya dibutuhkan waktu O(N).
- Manajemen memori lebih kompleks dalam tumpukan memori karena digunakan secara global. Memori heap dibagi menjadi dua bagian - generasi lama dan generasi muda dll. pada garbage collection milik java.

## Guided 1

### Full code screenshoot
![full1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/197bb7ed-575f-44d6-8ef1-b30c309dd690)

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority: " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);
    std::cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
```
### Output 
![out1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/3d02dca4-2445-46c7-ac9f-7121877ea4b1)

<p align="justify"> Kode diatas adalah implementasi dari priority queue menggunakan struktur data heap (dalam kasus ini, max-heap). Dalam kode tersebut, terdapat empat fungsi utama yang mengelola operasi pada struktur data priority queue yang diimplementasikan menggunakan struktur heap, khususnya max-heap. Pertama, fungsi insert(p) digunakan untuk menambahkan elemen baru ke dalam priority queue. Setelah elemen ditambahkan, fungsi shiftUp dipanggil untuk memastikan bahwa elemen yang baru dimasukkan tetap mematuhi properti max-heap. Kemudian, fungsi extractMax() untuk menghapus dan mengembalikan elemen dengan nilai maksimum dari priority queue, yaitu elemen di akar heap. Proses penghapusan ini juga mempertahankan properti max-heap dengan memanggil fungsi shiftDown. Selanjutnya, fungsi changePriority(i, p) digunakan untuk mengubah nilai elemen pada indeks tertentu menjadi nilai baru p. Properti max-heap juga dipertahankan dengan memanggil fungsi shiftUp jika nilai baru lebih besar dari nilai lama, dan shiftDown jika nilai baru lebih kecil dari nilai lama. Terakhir, fungsi remove(i) menghapus elemen pada indeks i dari priority queue. Proses ini dimulai dengan meningkatkan nilai elemen tersebut menjadi nilai maksimum yang mungkin, kemudian properti max-heap dipertahankan dengan memanggil fungsi shiftUp, dan akhirnya nilai maksimum diekstrak menggunakan extractMax. Kemudian Priority Queue akan seluruh elemen dalam priority queue setelah operasi penambahan. Ini akan menunjukkan struktur heap setelah semua elemen dimasukkan. Node with maximum priority akan menampilkan nilai maksimum (elemen di akar heap) yang dihapus dari priority queue. Priority queue after extracting maximum akan menampilkan priority queue setelah operasi ekstraksi elemen maksimum dilakukan. Priority queue after priority change akan menampilkan priority queue setelah nilai prioritas elemen ke-2 diubah menjadi 49. Yang terakhir Priority queue after removing the element akan menampilkan priority queue setelah elemen pada indeks ke-3 dihapus.

## Unguided 

<p align="justify"> 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.


### Full code screenshoot
![full2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/670183f8-96ff-4da7-a5be-3a81e92e4230)

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> H[i];
        heapSize++;
    }

    // Construct the heap
    for (int i = heapSize / 2; i >= 0; --i) {
        shiftDown(i);
    }

    std::cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority: " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int index, priority;
    std::cout << "Enter index and new priority to change: ";
    std::cin >> index >> priority;
    changePriority(index, priority);

    std::cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Enter index to remove element: ";
    std::cin >> index;
    remove(index);

    std::cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
```
### Output
![out2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/aa320df6-f451-402c-add7-d313aec1759d)


<p align="justify">Kode di atas merupakan implementasi struktur data priority queue menggunakan struktur heap. Pertama, kita diminta untuk memasukkan jumlah elemen yang akan dimasukkan ke dalam struktur heap pada contoh di atas kita memasukkan 9 elementt. Kemudian, kita diminta untuk memasukkan nilai-nilai elemen tersebut satu per satu. Setelah semua elemen dimasukkan, struktur heap dibangun menggunakan prosedur shiftDown() untuk memastikan properti heap terpenuhi. Setelah struktur heap dibangun, program menampilkan priority queue awal. Selanjutnya, program mengekstrak nilai maksimum dari priority queue menggunakan fungsi extractMax(). Nilai maksimum ini adalah elemen pada akar heap, nilai maksimumnya adalah 94. Setelah ekstraksi, priority queue yang diperbarui ditampilkan. Kemudian, kita diminta untuk memasukkan indeks elemen yang ingin diubah prioritasnya beserta nilai prioritas baru. Pada code di atas kita mengubah indeks ke-3 dengan nilai 15. Fungsi changePriority() kemudian digunakan untuk mengubah prioritas elemen tersebut. Setelah perubahan prioritas, priority queue yang diperbarui ditampilkan kembali. Selanjutnya, kita diminta untuk memasukkan indeks elemen yang ingin dihapus dari priority queue. Pada code di atas indek yang dihapus adalah indeks ke-6. Fungsi remove() digunakan untuk menghapus elemen pada indeks yang dimasukkan. Setelah penghapusan, priority queue yang diperbarui ditampilkan. Output dari program adalah priority queue sebelum (94 62 70 48 26 39 5 11 21 ) dan setelah ekstraksi nilai maksimum (70 62 39 48 26 21 5 11 ), perubahan prioritas(70 62 39 15 26 21 5 11 ), dan penghapusan elemen (70 62 39 15 26 21 11 ). Ini memberikan gambaran tentang bagaimana struktur heap dan isi priority queue berubah setelah setiap operasi yang dilakukan pada struktur data tersebut.


## Kesimpulan
<p align="justify">Priority queue adalah struktur data di mana setiap elemen memiliki prioritas tertentu. Elemen-elemen dalam priority queue diakses berdasarkan prioritas mereka, bukan berdasarkan urutan waktu. Elemen dengan prioritas lebih tinggi diakses terlebih dahulu daripada elemen dengan prioritas lebih rendah. Dapat diimplementasikan menggunakan berbagai struktur data, termasuk array, linked list, dan heap. Heap adalah struktur data yang sering digunakan untuk mengimplementasikan priority queue. Heap adalah struktur data pohon yang memenuhi properti heap, di mana setiap simpul memiliki nilai yang lebih besar (atau lebih kecil) dari nilai semua simpul di bawahnya. Heap dapat berupa max heap, di mana elemen terbesar berada di akar, atau min heap, di mana elemen terkecil berada di akar. Operasi dasar pada heap meliputi penyisipan (insert), ekstraksi nilai maksimum (atau minimum), perubahan prioritas, dan penghapusan elemen. Heap dapat diimplementasikan menggunakan array, di mana posisi elemen-elemen dalam array mengikuti aturan khusus untuk menjaga properti heap. Pentingnya priority queue dalam pemrosesan data dengan prioritas dan bagaimana heap, sebagai salah satu struktur data yang sering digunakan untuk mengimplementasikan priority queue, memfasilitasi operasi-operasi penting seperti penyisipan, ekstraksi nilai maksimum (atau minimum), perubahan prioritas, dan penghapusan elemen dengan efisien.


## Referensi

[1] Wijaya, Adi, et al (2020). Perbandingan Metode Implementasi Antrian Prioritas Menggunakan Array dan Linked List." Jurnal Sistem Informasi, 6(2), 31-36.

[2] Huang, X., & Wang, L. (2022). An Improved Min-Heap Algorithm for Finding the Median in Real-Time. Information Processing Letters, 198, 102794.

[3] Khoirunnisa, F., & Syahputra, M. (2019). Implementasi Algoritma Heap Sort untuk Mengurutkan Data pada Sistem Informasi Akademik. Jurnal Ilmiah Teknik Informatika Universitas Muhammadiyah Sumatera Utara, 6(2), 181-186.
