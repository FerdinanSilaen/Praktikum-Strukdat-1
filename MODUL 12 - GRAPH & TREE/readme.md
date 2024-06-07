<h1 align="center">Laporan Praktikum Modul Graph and Tree</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
### Graf 
<p align="justify">Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. Graf terdiri dari simpul dan busur yang secara matematis dinyatakan sebagai. Graf G didefinisikan sebagai pasangan himpunan (V, E), ditulis dengan notasi G = (V, E). Dalam hal ini, V merupakan himpunan tidak kosong dari simpul-simpul (vertices atau node) digambarkan dalam titiktitik, dan E adalah himpunan sisisisi (edges atau arcs) digambarkan dalam garis-garis yang menghubungkan sepasang simpul [1].

![graf](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/7c3caeb5-09de-462a-a4cf-9830e8872a94)

### Komponen dasar graf

#### 1. Simpul (Vertices atau Nodes)
<p align="justify">Simpul atau node adalah elemen dasar dari graf yang mewakili objek, individu, atau entitas tertentu dalam sistem yang dimodelkan oleh graf. Simpul adalah titik-titik di dalam graf yang merupakan titik awal dan akhir dari tepi. Mereka adalah komponen utama yang menghubungkan dan membentuk struktur graf. Setiap simpul dapat mewakili objek, individu, atau entitas tertentu. Simpul dapat mewakili berbagai jenis entitas tergantung pada aplikasi graf. 

#### 2. Tepi (Edges atau Arcs)
<p align="justify">Tepi adalah elemen dasar kedua dari graf yang menghubungkan dua simpul. Tepi menunjukkan adanya hubungan atau koneksi antara dua simpul tersebut. Tepi adalah garis yang menghubungkan dua simpul, menunjukkan bahwa ada hubungan atau interaksi antara kedua simpul tersebut [2]. Dalam representasi graf, tepi digambarkan sebagai garis lurus atau lengkung yang menghubungkan dua titik (simpul). Tepi bisa memiliki arah (directed graph) atau tidak memiliki arah (undirected graph). Dalam graf tak berarah, tepi tidak memiliki arah. Ini berarti hubungan antara dua simpul adalah dua arah atau timbal balik. Jika ada tepi antara simpul A dan simpul B, maka Anda bisa berpindah dari A ke B dan dari B ke A. Contoh: Sebuah jalan yang bisa dilewati dua arah antara dua kota. Dalam graf berarah, setiap tepi memiliki arah. Ini berarti hubungan antara dua simpul adalah satu arah. Tepi menunjukkan dari simpul asal (source) ke simpul tujuan (target). Jika ada tepi dari simpul A ke simpul B, Anda hanya bisa berpindah dari A ke B, tetapi tidak sebaliknya kecuali ada tepi lain dari B ke A. Contohnya, sebuah sistem jalur satu arah di mana kendaraan hanya bisa bergerak satu arah pada suatu waktu. Dalam beberapa graf, tepi juga dapat memiliki bobot atau nilai tertentu yang mewakili kekuatan, jarak, biaya, atau parameter lain dari hubungan antara dua simpul. Graf yang menggunakan bobot pada tepi disebut graf berbobot (weighted graph). Contohnya dalam peta jalan, bobot pada tepi bisa mewakili jarak antara dua kota atau waktu perjalanan.

### Jenis jenis graph

#### 1. Graf Tak Berarah (Undirected Graph)
<p align="justify">Graf tak berarah adalah jenis graf di mana tepi-tepi (edges) tidak memiliki arah. Ini berarti bahwa hubungan antara simpul (nodes) adalah timbal balik atau dua arah. Jika ada tepi yang menghubungkan simpul A dan simpul B, maka perjalanan dapat dilakukan dari A ke B dan sebaliknya. Contoh umum dari graf tak berarah adalah jaringan jalan di sebuah kota, di mana setiap jalan bisa dilalui ke dua arah, atau jaringan sosial sederhana, di mana hubungan pertemanan bersifat timbal balik.


![undirected](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/6ed3d81e-eb67-409c-bb7c-34c32487f91c)


#### 2. Graf Berarah (Directed Graph atau Digraph)
<p align="justify">Graf berarah adalah graf di mana setiap tepi memiliki arah tertentu, menunjukkan bahwa hubungan antara simpul adalah satu arah. Dalam graf berarah, tepi memiliki titik asal (source) dan titik tujuan (target). Misalnya, jika ada tepi dari simpul A ke simpul B, maka perjalanan hanya bisa dilakukan dari A ke B, bukan sebaliknya, kecuali ada tepi lain dari B ke A. Contoh dari graf berarah termasuk diagram alur kerja atau dependensi tugas, di mana satu tugas harus diselesaikan sebelum tugas lainnya dapat dimulai, dan jaringan lalu lintas yang mengandung jalan satu arah.

![directed](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/44e46bd6-280e-4781-a21b-bf793be325a1)


#### 3. Graf Berbobot (Weighted Graph)
<p align="justify">Dalam graf berbobot, setiap tepi memiliki bobot atau nilai tertentu yang mungkin mewakili jarak, biaya, durasi, atau parameter lainnya. Bobot ini digunakan untuk mengukur kekuatan atau kapasitas dari hubungan tersebut. Misalnya, dalam peta jaringan transportasi, bobot pada tepi bisa mewakili jarak antara dua kota atau waktu perjalanan. Graf berbobot sering digunakan dalam algoritma untuk menemukan jalur terpendek atau rute teroptimum dalam berbagai aplikasi seperti navigasi GPS dan optimisasi jaringan.

![weighted](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/228b6e4e-ac82-48a9-8e7b-e1f6336fd877)


#### 4. Graf Tidak Berbobot (Unweighted Graph)
<p align="justify">Graf tidak berbobot adalah graf di mana tepi-tepi tidak memiliki bobot atau nilai tertentu. Semua tepi dianggap sama dalam hal pentingnya hubungan. Contoh dari graf tidak berbobot adalah graf dasar yang digunakan untuk memodelkan hubungan sosial di mana hanya keberadaan atau ketidakhadiran hubungan yang penting, tanpa mempertimbangkan intensitas atau kekuatan dari hubungan tersebut.

![unweighted](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/584dd8d0-1057-46ae-9949-895a60a18119)


#### 5. Graf Siklik (Cyclic Graph)
<p align="justify">Graf siklik adalah graf yang mengandung setidaknya satu siklus. Siklus adalah jalur dalam graf yang dimulai dan berakhir pada simpul yang sama. Siklus menunjukkan bahwa ada suatu rute atau jalur yang bisa diikuti terus-menerus. Contoh dari graf siklik termasuk beberapa jaringan jalan atau jaringan transportasi yang memungkinkan perjalanan melingkar, serta berbagai struktur dalam teori jaringan dan analisis aliran.

![cyclic](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/051c8b3a-25cc-4d25-adb1-fab9b47aa871)

#### 6. Graf Asiklik (Acyclic Graph)
<p align="justify">Graf asiklik adalah graf yang tidak mengandung siklus. Ini berarti tidak ada jalur dalam graf yang dimulai dan berakhir pada simpul yang sama. Contoh penting dari graf asiklik adalah pohon (tree), yang merupakan graf terhubung tanpa siklus, dan graf asiklik berarah (DAG - Directed Acyclic Graph), yang sering digunakan untuk memodelkan struktur hirarki atau alur kerja di mana tugas harus diselesaikan secara berurutan tanpa pengulangan.

![acyclic](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c29cd1f7-2cff-4fdf-949d-11a9f2171848)

### Pohon

<p align="justify">Pohon adalah graf terhubung yang tidak mengandung siklus. Dengan kata lain, pohon adalah graf yang memiliki struktur hirarki dengan hubungan antara simpul yang menyerupai cabang-cabang dalam pohon nyata. Pohon selalu memiliki n−1 tepi jika memiliki n simpul [3]. Simpul dalam pohon disebut juga node, dan tepi disebut edge. Setiap simpul kecuali akar (root) memiliki tepat satu tetangga yang merupakan induknya (parent). Simpul yang tidak memiliki anak disebut daun (leaf).

![pohon](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/87652fa0-84d3-469d-80ce-11b52c0a0af8)

### Jenis jenis pohon

#### 1. Pohon Biner (Binary Tree)
<p align= "justify">Pohon biner adalah jenis pohon di mana setiap simpul (node) memiliki paling banyak dua anak, yang disebut anak kiri (left child) dan anak kanan (right child). Struktur ini menciptakan hierarki yang sederhana namun sangat berguna untuk berbagai aplikasi dalam ilmu komputer. Pohon biner digunakan secara luas dalam berbagai struktur data dan algoritma, seperti binary search tree (BST) dan heap. Keberadaan dua anak maksimal ini memungkinkan pengaturan dan manipulasi data dengan cara yang efisien, karena setiap keputusan biner (ya/tidak, kiri/kanan) mempersempit ruang pencarian secara eksponensial.

![binery](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/4452cc01-1947-4ca3-986c-81faa26ad645)


#### 2. Pohon Biner Pencarian (Binary Search Tree - BST)
<p align= "justify">Pohon Biner Pencarian, atau Binary Search Tree (BST), adalah pohon biner khusus di mana setiap simpul mengikuti aturan tertentu: nilai anak kiri selalu lebih kecil daripada nilai simpul induk, dan nilai anak kanan selalu lebih besar. Properti ini membuat BST sangat efisien untuk operasi pencarian, penyisipan, dan penghapusan. Saat mencari nilai tertentu, kita bisa membandingkan nilai tersebut dengan simpul saat ini, kemudian memutuskan untuk bergerak ke anak kiri jika nilai yang dicari lebih kecil atau ke anak kanan jika lebih besar. Proses ini berulang hingga nilai ditemukan atau mencapai simpul daun. Efisiensi BST bergantung pada keseimbangan pohon; dalam kasus terbaik, operasi dapat dilakukan dalam waktu O(logn).

![bst](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/a8a6539b-5f4d-4f8d-85c7-fff1dcde877f)


#### 3. Pohon AVL (AVL Tree)
<p align= "justify">Pohon AVL adalah jenis pohon biner pencarian yang memastikan pohon tetap seimbang secara tinggi. Untuk setiap simpul dalam pohon AVL, perbedaan tinggi antara anak kiri dan anak kanan tidak boleh lebih dari satu. Ini berarti setelah setiap operasi penyisipan atau penghapusan, pohon mungkin perlu dirotasi untuk memulihkan keseimbangan. Rotasi ini bisa berupa rotasi tunggal atau rotasi ganda, tergantung pada struktur lokal pohon. Keseimbangan ini memastikan bahwa waktu pencarian, penyisipan, dan penghapusan tetap optimal dalam O(logn), membuat pohon AVL sangat efisien untuk operasi yang memerlukan kinerja konsisten.

![avl](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d27a13aa-0cd4-4244-8e77-d193781fcac9)

#### 4. Pohon Merah-Hitam (Red-Black Tree)
<p align= "justify">Pohon Merah-Hitam adalah jenis pohon biner pencarian yang menggunakan pewarnaan simpul dengan dua warna (merah dan hitam) untuk menjaga keseimbangan. Setiap simpul diwarnai merah atau hitam, dan aturan pewarnaan tertentu diterapkan untuk memastikan bahwa pohon tetap hampir seimbang. Aturan-aturan ini termasuk: akar selalu hitam, semua daun (simpul null) berwarna hitam, simpul merah tidak boleh memiliki anak merah, dan setiap jalur dari akar ke daun memiliki jumlah simpul hitam yang sama. Pohon Merah-Hitam digunakan dalam banyak implementasi struktur data seperti map dan set dalam bahasa pemrograman karena mereka memastikan operasi pencarian, penyisipan, dan penghapusan dapat dilakukan dalam waktu O(logn). Struktur ini memberikan keseimbangan antara waktu penyesuaian dan kompleksitas implementasi, menjadikannya pilihan populer untuk aplikasi praktis.

<img width="446" alt="red and black" src="https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/70b1d417-f416-49aa-968a-044bc3afb306">

### Operasi pada pohon
#### 1. Traversing (Penelusuran)

Penelusuran atau traversing dalam konteks pohon adalah proses mengunjungi setiap simpul dalam pohon dalam urutan tertentu. Terdapat beberapa metode utama penelusuran pohon yang masing-masing memiliki aplikasi dan kegunaan spesifik. Dalam **pre-order traversal**, penelusuran dimulai dengan mengunjungi simpul akar terlebih dahulu, kemudian mengunjungi subpohon kiri, dan akhirnya subpohon kanan. Metode ini sering digunakan untuk menyalin pohon atau mengekspresikan ekspresi matematika. **In-order traversal** mengunjungi subpohon kiri terlebih dahulu, kemudian simpul akar, dan terakhir subpohon kanan, yang mana metode ini berguna pada Binary Search Tree (BST) karena menghasilkan elemen dalam urutan terurut. **Post-order traversal** mengunjungi subpohon kiri terlebih dahulu, kemudian subpohon kanan, dan terakhir simpul akar; metode ini cocok untuk operasi yang melibatkan penghapusan pohon atau evaluasi ekspresi postfix. Terakhir, **level-order traversal** mengunjungi simpul-simpul berdasarkan tingkatannya dari akar ke daun, biasanya diimplementasikan menggunakan antrian dan digunakan dalam algoritma pencarian yang melibatkan graf atau pohon.

#### 2. Penyisipan (Insertion)

Penyisipan atau insertion adalah proses menambahkan simpul baru ke dalam pohon. Pada Binary Search Tree (BST), penyisipan dilakukan dengan membandingkan nilai simpul baru dengan simpul akar. Jika nilai baru lebih kecil, penyisipan dilakukan pada subpohon kiri, sedangkan jika lebih besar, penyisipan dilakukan pada subpohon kanan. Proses ini diulangi hingga menemukan posisi yang tepat untuk menyisipkan simpul baru. Pada pohon AVL, setelah penyisipan, keseimbangan pohon diperiksa, dan jika pohon tidak seimbang, dilakukan rotasi (baik rotasi tunggal maupun ganda) untuk memulihkan keseimbangan. Dalam Red-Black Tree, penyisipan dilakukan dengan aturan yang sama seperti BST, namun simpul baru selalu diwarnai merah. Setelah itu, aturan pewarnaan diterapkan dan rotasi dilakukan jika perlu untuk menjaga keseimbangan dan mempertahankan properti pewarnaan, sehingga memastikan pohon tetap seimbang secara logaritmik.

#### 3. Penghapusan (Deletion)

Penghapusan atau deletion adalah proses menghapus simpul dari pohon. Dalam Binary Search Tree (BST), penghapusan simpul dapat melibatkan tiga kasus: simpul adalah daun, simpul memiliki satu anak, atau simpul memiliki dua anak. Jika simpul adalah daun, penghapusan dilakukan langsung. Jika simpul memiliki satu anak, simpul tersebut digantikan oleh anaknya. Jika simpul memiliki dua anak, simpul digantikan oleh penerus atau pendahulunya, kemudian penerus atau pendahulu tersebut dihapus. Pada pohon AVL, setelah penghapusan, keseimbangan pohon diperiksa dan rotasi dilakukan jika pohon tidak seimbang untuk memulihkan keseimbangan. Pada Red-Black Tree, penghapusan dilakukan dengan aturan yang sama seperti BST, namun tambahan aturan pewarnaan dan rotasi diterapkan untuk menjaga keseimbangan dan mempertahankan properti pewarnaan pohon. Proses penghapusan yang tepat ini memastikan bahwa pohon tetap efisien untuk operasi pencarian, penyisipan, dan penghapusan berikutnya.

## Guided 1

### Full code screenshoot
![1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/634d5e6b-d9fa-4837-817d-ec3e72f91178)

```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul [7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Pwt", "Yogya"
};

int busur [7][7] = {
    {0,7,8,0,0,0,0},
    {0,0,5,0,0,15,0},
    {0,6,0,0,5,0,0},
    {0,5,0,0,2,4,0},
    {23,0,0,10,0,0,8},
    {0,0,0,0,7,0,3},
    {0,0,0,0,9,4,0}
};

void tampilGraph(){
    for(int baris = 0; baris < 7; baris ++){
        cout << " " << setiosflags (ios::left) << setw (15) << simpul[baris] << ":";
        for (int kolom = 0; kolom < 7; kolom ++){
            if (busur[baris][kolom]!=0){
                cout << " "<< simpul[kolom] << "(" << busur[baris][kolom]<< ")";
            }
        }
        cout << endl;
    }
}

int main (){
    tampilGraph();
    return 0;
}
```

### Output 
![out2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/a33f6d89-6dbb-47b4-8b28-569678ef35e8)

<p align="justify">Kode di atas adalah program yang digunakan untuk menampilkan representasi graf berbobot menggunakan matriks ketetanggaan (adjacency matrix). Program ini menyimpan nama-nama simpul (nodes) dalam array simpul dan bobot dari busur (edges) dalam matriks busur. Array simpul berisi nama-nama tujuh kota yaitu "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Pwt", dan "Yogya". Setiap kota ini diidentifikasi dengan indeks mulai dari 0 hingga 6 Matriks busur adalah matriks ketetanggaan berukuran 7x7 yang menyimpan bobot (weight) dari setiap busur antara simpul-simpul. Jika ada busur dari simpul i ke simpul j, maka busur[i][j] berisi bobot busur tersebut, dan jika tidak ada busur maka nilainya adalah 0. Fungsi ini digunakan untuk menampilkan graf dalam bentuk yang lebih mudah dibaca. Fungsi ini melakukan iterasi melalui setiap baris (simpul asal) dan setiap kolom (simpul tujuan) dari matriks busur. Jika ada busur antara dua simpul (nilai tidak 0), maka nama simpul tujuan dan bobot busur ditampilkan. Fungsi menggunakan setw dan setiosflags. Pada outputnya program ini memberikan cara untuk memvisualisasikan sebuah graf berbobot dimana setiap simpul dihubungkan oleh busur dengan bobot tertentu, yang ditampilkan dengan format "nama simpul tujuan(bobot)". Misalnya, output untuk simpul "Ciamis" adalah "Ciamis: Bandung(7) Bekasi(8)", yang menunjukkan bahwa ada busur dari "Ciamis" ke "Bandung" dengan bobot 7 dan dari "Ciamis" ke "Bekasi" dengan bobot 8.


## Guided 2

### Full code screenshoot
![2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/2f19e4f6-3215-4231-b982-6e980e62baf2)


```C++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    TNode (int value){
        data = value;
        left = NULL;
        right = NULL;

    }
};

void preOrder(TNode *node){
    if (node != NULL){
        cout << node->data << " ";
        preOrder (node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node){
    if (node != NULL){
        inOrder (node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node){
    if (node != NULL){
        postOrder (node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main (){
    TNode *zero = new TNode (0);

    TNode *one = new TNode (1);
    TNode *five = new TNode (5);
    TNode *seven = new TNode (7);
    TNode *eight = new TNode (8);
    TNode *nine = new TNode (9);

    seven -> left = one;

    seven -> right = nine;

    one -> left = zero;

    one -> right = five;

    nine -> left = eight;

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```

### Output 
![out1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/3e5c5823-7f24-4278-8cec-a98549917356)


<p align="justify">Kode di atas adalah sebuah program yang mengimplementasikan pohon biner dan mengeksekusi tiga jenis penelusuran atau traversal pada pohon tersebut yakni; pre-order traversal, in-order traversal, dan post-order traversal. Program ini menggunakan struktur TNode untuk merepresentasikan simpul atau node dalam pohon biner.
Struktur TNode memiliki tiga atribut yaitu, data untuk menyimpan nilai data, left untuk menunjukkan anak kiri dari simpul, dan right untuk menunjukkan anak kanan dari simpul. Dalam konstruktor TNode, nilai data dimasukkan dan pointer left dan right diinisialisasi sebagai NULL. Terdapat tiga fungsi pula pada penelusuran; preOrder, inOrder, dan postOrder. Setiap fungsi menerima pointer ke simpul sebagai parameter dan melakukan penelusuran pohon secara rekursif.
Pre-order traversal mencetak nilai data dari simpul saat ini terlebih dahulu, kemudian melakukan penelusuran pada anak kiri, dan terakhir melakukan penelusuran pada anak kanan. In-order traversal melakukan penelusuran pada anak kiri terlebih dahulu, kemudian mencetak nilai data dari simpul saat ini, dan terakhir melakukan penelusuran pada anak kanan.
Post-order traversal melakukan penelusuran pada anak kiri terlebih dahulu, kemudian melakukan penelusuran pada anak kanan, dan terakhir mencetak nilai data dari simpul saat ini. Dalam fungsi main(), simpul-simpul pohon biner dibuat menggunakan operator new dan dikaitkan satu sama lain sesuai dengan struktur pohon yang diinginkan. Setelah pohon dibuat, tiga jenis penelusuran (pre-order, in-order, dan post-order) dipanggil untuk menampilkan urutan nilai-nilai dari simpul-simpul pohon tersebut.


## Unguided 

<p align="justify"> 1. *Cantumkan NIM pada salah satu variabel di dalam program. Contoh : int nama_22102003. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

<p align="justify">Output Program
![soal1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/60bb289a-b3a9-459b-8258-762bc5078de5)


### Full code screenshoot
![3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5df702b5-5fab-4e8a-a867-269c4e072842)


```C++
#include <stdio.h>

typedef struct {
    char nama_68[20];
    int jarak_68[10];
} Kota_68;

int main() {
    int n_68;
    printf("Masukkan Jumlah Simpul : ");
    scanf("%d", &n_68);
    
    Kota_68 kota_68[n_68];
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        printf("Masukkan Nama Simpul Ke-%d : ", i_68 + 1);
        scanf("%s", kota_68[i_68].nama_68);
    }
    
    printf("Masukkan Bobot Antar Simpul\n");
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        for (int j_68 = 0; j_68 < n_68; j_68++) {
            printf("%s--->%s = ", kota_68[i_68].nama_68, kota_68[j_68].nama_68);
            scanf("%d", &kota_68[i_68].jarak_68[j_68]);
        }
    }
    
    printf("\n");

    // Header Kolom
    printf("%-8s", "");
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        printf("%-8s", kota_68[i_68].nama_68);
    }
    printf("\n");

    // Matriks Bobot
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        printf("%-8s", kota_68[i_68].nama_68);
        for (int j_68 = 0; j_68 < n_68; j_68++) {
            printf("%-8d", kota_68[i_68].jarak_68[j_68]);
        }
        printf("\n");
    }
    

    return 0;
}
```
### Output
![outa](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/f052edb6-bed8-4f0e-b24e-d8fda9aa0d7e)

<p align="justify">Kode di atas merupakan sebuah program yang digunakan untuk merepresentasikan sebuah graf berdasarkan input dari pengguna. Program ini meminta pengguna untuk memasukkan jumlah simpul (node) dan nama setiap simpul, serta bobot atau jarak antara setiap pasangan simpul. Pertama, program mendeklarasikan sebuah struktur Kota_68 yang memiliki dua atribut, nama_68 untuk menyimpan nama simpul dalam bentuk string dengan panjang maksimal 20 karakter, dan jarak_68 yang merupakan array integer untuk menyimpan bobot atau jarak ke simpul lainnya. Di dalam fungsi main, program meminta pengguna untuk memasukkan jumlah simpul yang akan disimpan dalam variabel n_68. Selanjutnya, program mendeklarasikan sebuah array kota_68 dengan ukuran sesuai jumlah simpul yang diinput. Dalam loop pertama, program meminta pengguna untuk memasukkan nama masing-masing simpul dan menyimpannya dalam array kota_68. Kemudian, dalam loop kedua, program meminta pengguna untuk memasukkan bobot atau jarak antara setiap pasangan simpul. Setiap bobot disimpan dalam atribut jarak_68 pada array kota_68. Setelah semua data diinput, program mencetak sebuah matriks adjacency yang menunjukkan bobot atau jarak antara setiap pasangan simpul. Matriks ini menampilkan nama-nama simpul sebagai header kolom dan baris, serta nilai bobot atau jarak di dalam tabel. Program ini secara keseluruhan memberikan representasi yang jelas tentang hubungan dan jarak antara simpul-simpul dalam graf berdasarkan input pengguna, dan menampilkan informasi tersebut dalam bentuk matriks adjacency untuk memudahkan pemahaman.


<p align="justify"> 2.Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!

### Full code screenshoot
![4](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/13829545-21c3-4cda-b107-3930b261b6bd)


```C++
#include <iostream>
#include <queue>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // Constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *_68node) {
    if (_68node != NULL) {
        cout << _68node->data << " ";
        preOrder(_68node->left);
        preOrder(_68node->right);
    }
}

void inOrder(TNode *_68node) {
    if (_68node != NULL) {
        inOrder(_68node->left);
        cout << _68node->data << " ";
        inOrder(_68node->right);
    }
}

void postOrder(TNode *_68node) {
    if (_68node != NULL) {
        postOrder(_68node->left);
        postOrder(_68node->right);
        cout << _68node->data << " ";
    }
}

void printChild(TNode *_68node) {
    if (_68node != NULL) {
        cout << "Anak Dari " << _68node->data << " : ";
        if (_68node->left != NULL) {
            cout << _68node->left->data << " ";
        }
        if (_68node->right != NULL) {
            cout << _68node->right->data << " ";
        }
        if (_68node->left == NULL && _68node->right == NULL) {
            cout << "Tidak Ada Anak.";
        }
        cout << endl;
    }
}

void printDescendant(TNode *_68node) {
    if (_68node != NULL) {
        if (_68node->left != NULL || _68node->right != NULL) {
            cout << "Turunan Dari " << _68node->data << " : ";
            queue<TNode*> q;
            if (_68node->left != NULL) q.push(_68node->left);
            if (_68node->right != NULL) q.push(_68node->right);
            while (!q.empty()) {
                TNode* temp = q.front();
                q.pop();
                cout << temp->data << " ";
                if (temp->left != NULL) q.push(temp->left);
                if (temp->right != NULL) q.push(temp->right);
            }
            cout << endl;
        } else {
            cout << "Turunan Dari " << _68node->data << " : Tidak Ada Turunan." << endl;
        }
    }
}

TNode* findNode(TNode* _68node, int value) {
    if (_68node == NULL) return NULL;
    if (_68node->data == value) return _68node;
    TNode* foundNode = findNode(_68node->left, value);
    if (foundNode == NULL) {
        foundNode = findNode(_68node->right, value);
    }
    return foundNode;
}

int main() {
    int _68n;
    cout << "Masukkan Jumlah Node : ";
    cin >> _68n;

    TNode *_68root = NULL;

    for (int i = 0; i < _68n; i++) {
        int _68value;
        cout << "Masukkan Nilai Node " << i + 1 << " : ";
        cin >> _68value;

        TNode *_68node = new TNode(_68value);

        if (_68root == NULL) {
            _68root = _68node;
        } else {
            // Temukan Node Induk
            int _68parentValue;
            cout << "Masukkan Node Induk Dari " << _68value << " : ";
            cin >> _68parentValue;
            TNode *_68parent = findNode(_68root, _68parentValue);
            if (_68parent == NULL) {
                cout << "Node Induk Tidak Dapat Ditemukan!" << endl;
                delete _68node;
                i--;
                continue;
            }
            if (_68parent->left == NULL) {
                _68parent->left = _68node;
            } else if (_68parent->right == NULL) {
                _68parent->right = _68node;
            } else {
                cout << "Node Induk Sudah Memiliki Dua Anak!" << endl;
                delete _68node;
                i--;
            }
        }
    }

    cout << "\nTraversal Pre-Order      : ";
    preOrder(_68root);
    cout << endl;

    cout << "Traversal In-Order       : ";
    inOrder(_68root);
    cout << endl;

    cout << "Traversal Post-Order     : ";
    postOrder(_68root);
    cout << endl;

    for (int i = 0; i < _68n; i++) {
        printChild(findNode(_68root, i + 1));
    }
    cout << endl;

    for (int i = 0; i < _68n; i++) {
        printDescendant(findNode(_68root, i + 1));
    }
    cout << endl;

    return 0;
}
```
### Output
![outb](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/53bb9673-fd98-4d65-83b1-9beba975b872)


<p align="justify">Kode di atas merupakan implementasi dari struktur data pohon biner. Pada struktur pohon biner, setiap simpul (atau node) memiliki nilai (data) dan dua pointer yang menunjuk ke anak kiri dan anak kanan. Kode ini memungkinkan pengguna untuk memasukkan nilai-nilai node ke dalam pohon, mencetak traversals pohon (pre-order, in-order, post-order), serta mencetak anak dan turunan (descendant) dari setiap node. Pada awal program, pengguna diminta untuk memasukkan jumlah node yang ingin dimasukkan ke dalam pohon. Selanjutnya, pengguna diminta untuk memasukkan nilai untuk setiap node, serta nilai node induk dari masing-masing node tersebut. Dalam proses penambahan node, setiap node baru akan ditempatkan sebagai anak dari node induk yang telah ditentukan. Setelah semua node ditambahkan, program akan melakukan tiga jenis traversals: pre-order, in-order, dan post-order. Traversal adalah proses mengunjungi setiap node dalam pohon dengan urutan tertentu. Pre-order traversal mencetak nilai node terlebih dahulu, kemudian anak kiri, dan terakhir anak kanan. In-order traversal mencetak anak kiri terlebih dahulu, kemudian nilai node, dan terakhir anak kanan. Post-order traversal mencetak anak kiri terlebih dahulu, kemudian anak kanan, dan terakhir nilai node. Selain itu, program juga mencetak anak dan turunan dari setiap node. Fungsi printChild mencetak nilai dari anak-anak langsung dari sebuah node. Jika sebuah node tidak memiliki anak, maka akan dicetak pesan "Tidak Ada Anak". Fungsi printDescendant mencetak nilai dari semua turunan (descendant) dari sebuah node. Jika sebuah node tidak memiliki turunan, maka akan dicetak pesan "Tidak Ada Turunan". Dengan demikian, melalui kode ini, kita dapat memahami bagaimana konsep child (anak) dan descendant (turunan) dari setiap node dalam struktur pohon biner diterapkan dan dicetak.

## Kesimpulan
<p align="justify">Graf dan pohon adalah dua struktur data yang sangat penting dalam dunia ilmu komputer dan matematika diskrit. Graf adalah representasi visual dari kumpulan objek yang saling terhubung oleh serangkaian sisi, yang sering kali disebut sebagai "edges". Setiap objek ini, yang disebut sebagai "node" atau "vertex", bisa memiliki hubungan yang beragam dengan node lainnya, termasuk hubungan satu arah (graf berarah) atau hubungan timbal-balik (graf tak berarah), serta bisa memiliki bobot yang menunjukkan tingkat keterkaitan antar node (graf berbobot). Di sisi lain, pohon adalah jenis graf khusus yang memiliki struktur hierarkis, di mana setiap node memiliki tepat satu induk (kecuali node teratas yang disebut akar) dan nol atau lebih anak. Pohon memiliki sifat unik, seperti tidak memiliki siklus (disebut juga sebagai sirkuit), memiliki tepat satu jalur antara dua node mana pun, serta memiliki simpul akar yang menjadi titik awal dari seluruh pohon. Konsep ini memiliki berbagai aplikasi yang luas, mulai dari pemodelan jaringan komputer, struktur data, hingga pemrosesan bahasa alami, serta berbagai masalah optimisasi dan pemecahan masalah lainnya. Dalam pemrograman, pemahaman yang kuat tentang graf dan pohon sangatlah penting, karena mereka memberikan landasan yang kuat untuk pengembangan algoritma dan teknik pemecahan masalah yang efisien.

## Referensi

[1] Kadafi, A. R., Budi, E. S., & Putra, R. B. D. (2019). Pemanfaatan Pohon Keputusan dan Graf Dalam Pemetaan Karyawan Berbasis Kompetensi. JURIKOM (Jurnal Riset Komputer), 6(6), 563-569.

[2] Minarti, L. D., Dafik, D., Setiawani, S., Slamin, S., & Fatahillah, A. (2022). PEWARNAAN SISI r-DINAMIS PADA GRAF HASIL OPERASI AMALGAMASI TITIK KELUARGA GRAF POHON DAN KAITANNYA DENGAN KETERAMPILAN BERPIKIR TINGKAT TINGGI. saintifika, 21(2), 8-8.

[3] Afifah, L., & Budayasa, I. K. (2023). Pelabelan Anggun Graf Berlian Rangkap Berbintang, Beberapa Kelas Graf Pohon, Dan Graf Corona Khusus. MATHunesa: Jurnal Ilmiah Matematika, 11(03), 368-382.



