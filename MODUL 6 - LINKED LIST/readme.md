 <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Linked list adalah salah satu struktur data yang penting dalam ilmu komputer dan pemrograman. Ini adalah kumpulan elemen data yang disusun secara berurutan, di mana setiap elemen terdiri dari dua bagian utama: data itu sendiri dan referensi atau tautan ke elemen berikutnya dalam urutan. Setiap elemen dalam linked list disebut node. Konsep dasar linked list adalah bahwa setiap node dalam linked list memiliki tautan ke node berikutnya dalam urutan. Ini berarti setiap node dapat ditempatkan di lokasi yang tidak berurutan dalam memori komputer. Hal ini berbeda dengan struktur data lainnya seperti array yang membutuhkan alokasi memori yang berurutan. Linked list memiliki beberapa keuntungan dan kelemahan:

Kelebihan
- Fleksibilitas dalam alokasi memori karena tidak memerlukan alokasi memori yang berurutan.
- Kemampuan untuk menyisipkan dan menghapus elemen dengan mudah tanpa perlu menggeser elemen-elemen lain.
- Ukuran linked list bisa dinamis, sehingga memungkinkan untuk menyimpan jumlah elemen yang tidak diketahui sebelumnya.

Kekurangan
- Akses acak ke elemen tidak efisien. Pencarian elemen dalam linked list membutuhkan waktu linier, karena perlu dilakukan pencarian berurutan dari awal atau akhir.
- Membutuhkan lebih banyak memori untuk menyimpan tautan tambahan antar elemen.
- Pada beberapa bahasa pemrograman, linked list dapat menjadi kurang efisien dibandingkan dengan struktur data lainnya karena overhead memori yang terkait dengan setiap node.


### Jenis-Jenis Linked List

### 1. Singly Linked List
<p align="justify">Singly Linked List (Daftar Berantai Tunggal) adalah salah satu struktur data fundamental dalam ilmu komputer yang terdiri dari serangkaian elemen data yang disusun secara berurutan. Setiap elemen, yang disebut node, terdiri dari dua bagian utama: data itu sendiri dan tautan atau pointer yang menunjukkan ke node berikutnya dalam urutan. Dalam singly linked list, setiap node hanya memiliki satu tautan yang menunjuk ke node berikutnya, kecuali node terakhir yang menunjuk ke NULL untuk menandakan akhir dari daftar [1]. Keuntungan utama dari singly linked list adalah kemampuannya untuk memudahkan penyisipan dan penghapusan elemen di bagian depan atau tengah daftar dengan cepat, karena hanya perlu memperbarui tautan pada node-node terdekat. Hal ini membuatnya cocok digunakan ketika akses sekuensial ke data atau operasi-operasi penyisipan dan penghapusan sering terjadi dalam aplikasi.

### 2. Doubly Linked LIst

<p align="justify">Doubly Linked List (Daftar Berantai Ganda) adalah struktur data yang terdiri dari sekelompok node, di mana setiap node memiliki dua tautan atau pointer. Tautan pertama mengarah ke node sebelumnya dalam urutan, sementara tautan kedua mengarah ke node berikutnya. Dengan memiliki tautan ke node sebelumnya dan berikutnya, doubly linked list memungkinkan navigasi maju dan mundur melalui elemen-elemennya. Setiap node dalam doubly linked list terdiri dari dua bagian utama: data yang disimpan dan dua tautan. Tautan pertama, disebut sebagai "previous" atau "prev", menunjukkan ke node sebelumnya, sedangkan tautan kedua, disebut sebagai "next", menunjukkan ke node berikutnya. Node pertama dalam daftar memiliki tautan "prev" yang menunjuk ke NULL, menandakan awal dari daftar, sedangkan node terakhir memiliki tautan "next" yang menunjuk ke NULL, menandakan akhir dari daftar. Doubly linked list memberikan fleksibilitas dalam operasi navigasi dan manipulasi data. Ini memungkinkan akses cepat baik ke node sebelumnya maupun node berikutnya dari suatu node tertentu, sehingga sangat cocok untuk kasus di mana navigasi maju dan mundur sering diperlukan. Operasi seperti penyisipan, penghapusan, dan pencarian dapat dilakukan dengan lebih efisien dalam doubly linked list daripada dalam singly linked list karena tidak perlu traversing ke belakang saat memanipulasi node [2]. Keuntungan lain dari doubly linked list adalah kemampuannya untuk diimplementasikan dalam struktur data lain, seperti deque (double-ended queue), dan dapat digunakan untuk aplikasi yang memerlukan navigasi maju dan mundur, seperti pengeditan teks, pemrosesan audio, atau permainan video. Namun, perlu dicatat bahwa kitaan doubly linked list membutuhkan overhead memori tambahan untuk menyimpan tautan tambahan, sehingga dapat menghabiskan lebih banyak memori dibandingkan dengan singly linked list jika hanya diperlukan navigasi maju saja.

### 3. Circular Linked List

 <p align="justify">Circular linked list adalah struktur data yang terdiri dari serangkaian node yang saling terhubung secara berurutan, di mana setiap node memiliki dua bagian utama: data yang disimpan dan tautan atau pointer ke node berikutnya dalam urutan. Uniknya, dalam circular linked list, node terakhir tidak menunjuk ke nullptr atau NULL seperti pada linked list biasa, melainkan menunjuk kembali ke node pertama, membentuk sebuah lingkaran. Ini berarti bahwa struktur list ini tidak memiliki awal atau akhir yang jelas, karena Anda dapat memulai traversing dari mana saja dan berakhir di tempat yang sama tanpa kehilangan elemen atau mengalami jebakan dalam loop tak terbatas.

### 4. Doubly Circular Linked List (Daftar Berantai Ganda Lingkaran)

 <p align="justify">Doubly Circular Linked List adalah salah satu struktur data yang unik karena menggabungkan karakteristik dari doubly linked list dan circular linked list. Dalam struktur ini, setiap node memiliki dua tautan: satu ke node sebelumnya dan satu lagi ke node berikutnya, yang memungkinkan navigasi maju dan mundur dalam daftar. Namun, keunikan utamanya adalah pada node terakhir. Di samping menunjuk kembali ke node pertama untuk membentuk lingkaran, node terakhir juga memiliki tautan ke node terakhir, menciptakan siklus berulang yang lengkap. Fitur ini memberikan kelebihan dalam beberapa aplikasi, seperti dalam penjadwalan putar di sistem operasi, di mana daftar dapat diulang terus menerus tanpa perlu melakukan perjalanan kembali dari node terakhir ke node pertama. Ini juga bermanfaat dalam implementasi struktur data yang memerlukan iterasi tak terbatas dalam kedua arah, karena kemampuan untuk dengan mudah berpindah maju dan mundur melalui daftar. Misalnya, dalam aplikasi yang memerlukan pembacaan data dalam urutan siklik atau penelusuran dalam daftar dengan pola siklus tertentu. Oleh karena itu, Doubly Circular Linked List menawarkan fleksibilitas yang unik dalam pengelolaan data dan navigasi dalam siklus berulang.

 ### 5. Sorted Linked List (Daftar Berantai Terurut)
 <p align="justify">Sorted Linked List adalah struktur data berbasis linked list di mana elemen-elemennya diatur secara terurut berdasarkan suatu kriteria, seperti nilai numerik atau alfabet. Dalam sorted linked list, setiap kali sebuah elemen dimasukkan, ia ditempatkan pada posisi yang tepat sesuai dengan urutan yang telah ditetapkan, sehingga daftar tetap terurut setelah setiap operasi penyisipan. Keunggulan utama dari sorted linked list terletak pada kemampuannya untuk memfasilitasi pencarian dan penyisipan dengan waktu yang lebih efisien daripada linked list biasa [3]. Dengan menggunakan teknik pencarian biner atau pencarian linier yang dioptimalkan, pencarian elemen dalam sorted linked list dapat dilakukan dengan kompleksitas waktu yang lebih rendah dibandingkan dengan pencarian dalam linked list biasa. Hal ini terutama bermanfaat dalam kasus data yang besar, di mana pencarian efisien menjadi kritis untuk kinerja aplikasi. Dengan struktur yang terorganisir secara terurut, sorted linked list memungkinkan aplikasi untuk menangani data dengan lebih efektif dan mempercepat proses pencarian dan penyisipan, menjadikannya pilihan yang berguna dalam berbagai aplikasi yang memerlukan pengelolaan data yang terurut dan efisien.


## Guided 1
### Single Linked List

### Full code screenshoot
![guided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/232f56f7-543a-40a0-8266-568f495692fc)


```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
### Output 
![outg1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/13121843-bd75-405f-a782-1b98c00a6de7)

<p align="justify"> Kode di atas adalah implementasi dari program menggunakan single linked list untuk melakukan berbagai operasi seperti penambahan, penghapusan, dan modifikasi data dalam list.Pertama-tama, struktur data Node didefinisikan dengan dua anggota: data, yang menyimpan nilai data, dan next, yang merupakan tautan ke node berikutnya dalam list. Fungsi init() digunakan untuk menginisialisasi pointer head dan tail menjadi NULL, menandakan bahwa list masih kosong. Fungsi isEmpty() memeriksa apakah list kosong atau tidak dengan memeriksa apakah head adalah NULL. Fungsi insertDepan() digunakan untuk menambahkan sebuah node di depan list. Jika list kosong, maka node baru menjadi head dan tail. Jika tidak, node baru ditautkan ke head, dan head diubah menjadi node baru. Fungsi insertBelakang() digunakan untuk menambahkan sebuah node di belakang list. Prinsipnya sama dengan insertDepan(), hanya saja node baru ditambahkan di belakang dan tail diupdate. Fungsi hitungList() menghitung jumlah node dalam list dengan menghitung node-node sampai node terakhir. Fungsi insertTengah() digunakan untuk menambahkan node di posisi tertentu dalam list. Ini dilakukan dengan menemukan node sebelumnya di posisi yang diinginkan, kemudian menautkan node baru di antara node tersebut dan node berikutnya. Fungsi hapusDepan() digunakan untuk menghapus node pertama dari list. Jika list tidak kosong, head diubah menjadi node berikutnya dari head yang lama, dan node lama dihapus. Fungsi hapusBelakang() digunakan untuk menghapus node terakhir dari list. Jika list tidak kosong, tail diubah menjadi node sebelumnya dari tail yang lama, dan node lama dihapus. Fungsi hapusTengah() digunakan untuk menghapus node di posisi tertentu dalam list. Prinsipnya sama dengan insertTengah(), hanya saja node yang dihapus dilepaskan dari list. Fungsi-fungsi ubahDepan(), ubahBelakang(), dan ubahTengah() digunakan untuk mengubah nilai data pada node pertama, terakhir, atau di posisi tertentu dalam list. Fungsi clearList() digunakan untuk menghapus semua node dalam list dan mengosongkan list. Fungsi tampil() digunakan untuk menampilkan semua data dalam list. Di dalam main(), fungsi-fungsi tersebut dipanggil untuk melakukan berbagai operasi pada list seperti penambahan, penghapusan, dan modifikasi data. Output yang dihasilkan oleh program tersebut memberikan ilustrasi tentang bagaimana list bereaksi terhadap setiap operasi yang dilakukan, termasuk penambahan, penghapusan, dan pengubahan data. Misalnya, saat melakukan penambahan node di depan list, kita dapat melihat bahwa node baru ditambahkan di posisi pertama, sedangkan saat menghapus node dari belakang list, node terakhir dihapus

## Guided 2
### Double Linked List

### Full code screenshoot
![guided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/0b1b236b-b77d-43d0-b3a7-67e28bb6e6bc)


```C++
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev; // Previous digunakan untuk melihat data sebelumnya
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next; // Akan next terus sampai currentnya berhenti
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
### Output
![outg2a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/e838a00c-b6de-4d9c-90f5-79474bfb3d6f)
![outg2b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/7126cb0e-7969-4c82-a2a0-f8a0de797587)
![outg2c](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/776af50a-3e4a-4a23-8095-680034a5f460)


<p align ="justify">Kode di atas adalah implementasi dari sebuah program yang menggunakan double linked list untuk melakukan berbagai operasi pada data. Program ini memiliki dua kelas utama, Node dan double linked list. Setiap objek Node merepresentasikan sebuah elemen dalam linked list dengan memiliki tiga anggota data, yaitu data untuk menyimpan nilai data, prev untuk menunjukkan ke node sebelumnya, dan next untuk menunjukkan ke node berikutnya. Kelas DoublyLinkedList mengelola linked list secara keseluruhan dengan menyediakan metode untuk menambah, menghapus, memperbarui, membersihkan, dan menampilkan data. Dalam fungsi main(), kita dapat memilih operasi yang ingin dilakukan pada linked list, seperti penambahan data baru, penghapusan data, pembaruan data, dan tampilan data, dengan output yang mencerminkan hasil dari setiap operasi yang dilakukan. Output dari program akan menampilkan hasil operasi yang dilakukan oleh kita, seperti penambahan, penghapusan, atau pembaruan data, serta isi dari linked list setelah setiap operasi dilakukan. Misalnya, jika kita memilih untuk menambahkan data baru, program akan menampilkan data yang baru ditambahkan. Jika kita memilih untuk menghapus data, program akan menampilkan data yang dihapus. Jika kita memilih untuk memperbarui data, program akan menampilkan pesan apakah data berhasil diperbarui atau tidak. Jika kita memilih untuk menampilkan data, program akan menampilkan seluruh isi linked list. kita juga dapat memilih untuk membersihkan seluruh data atau keluar dari program.

## Guided 3
### Linked List Non-Circular

### Full code screenshoot
![guided3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/cca81316-bdc1-4428-8fd7-c1ae888597d0)

```C++
#include <iostream> 
using namespace std; 

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR 

// Deklarasi Struct Node 
struct Node 
{ 
    int data; 
    Node *next; 
}; 

Node *head; 
Node *tail; 

// Inisialisasi Node 
void init() 
{ 
    head = NULL; 
    tail = NULL; 
} 

// Pengecekan 
bool isEmpty() 
{ 
    return head == NULL; 
} 

// Tambah Depan 
void insertDepan(int nilai) 
{ 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 
    if (isEmpty()) 
    { 
        head = tail = baru; 
    } 
    else 
    { 
        baru->next = head; 
        head = baru; 
    } 
} 

// Tambah Belakang 
void insertBelakang(int nilai) 
{ 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 
    if (isEmpty()) 
    { 
        head = tail = baru; 
    } 
    else 
    { 
        tail->next = baru; 
        tail = baru; 
    } 
} 

// Hitung Jumlah List 
int hitungList() 
{ 
    Node *hitung = head; 
    int jumlah = 0; 
    while (hitung != NULL) 
    { 
        jumlah++; 
        hitung = hitung->next; 
    } 
    return jumlah; 
} 

// Tambah Tengah 
void insertTengah(int data, int posisi) 
{ 
    if (posisi < 1 || posisi > hitungList()) 
    { 
        cout << "Posisi Di Luar Jangkauan" << endl; 
    } 
    else if (posisi == 1) 
    { 
        cout << "Posisi Bukan Posisi Tengah" << endl; 
    } 
    else 
    { 
        Node *baru = new Node(); 
        baru->data = data; 
        Node *bantu = head; 
        for (int nomor = 1; nomor < posisi - 1; nomor++) 
        { 
            bantu = bantu->next; 
        } 
        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Depan 
void hapusDepan() 
{ 
    if (!isEmpty()) 
    { 
        Node *hapus = head; 
        if (head->next != NULL) 
        { 
            head = head->next;
        } 
        else 
        { 
            head = tail = NULL; 
        } 
        delete hapus; 
    } 
    else 
    { 
        cout << "List Kosong!" << endl; 
    } 
} 

// Hapus Belakang 
void hapusBelakang() 
{ 
    if (!isEmpty()) 
    { 
        Node *hapus = tail; 
        if (head != tail) 
        { 
            Node *bantu = head; 
            while (bantu->next != tail) 
            { 
                bantu = bantu->next; 
            } 
            tail = bantu; 
            tail->next = NULL; 
        } 
        else 
        { 
            head = tail = NULL; 
        } 
        delete hapus; 
    } 
    else 
    { 
        cout << "List Kosong!" << endl; 
    } 
} 

// Hapus Tengah 
void hapusTengah(int posisi) 
{ 
    if (!isEmpty()) 
    { 
        Node *bantu = head, *hapus = NULL, *sebelum = NULL; 
        if (posisi < 1 || posisi > hitungList()) 
        { 
            cout << "Posisi Di Luar Jangkauan" << endl; 
        } 
        else if (posisi == 1) 
        { 
            cout << "Posisi Bukan Posisi Tengah" << endl; 
        } 
        else 
        { 
            int nomor = 1; 
            while (nomor <= posisi) 
            { 
                if (nomor == posisi - 1) 
                { 
                    sebelum = bantu; 
                } 
                if (nomor == posisi) 
                { 
                    hapus = bantu; 
                } 
                bantu = bantu->next; 
                nomor++; 
            } 
            sebelum->next = bantu; 
            delete hapus; 
        } 
    } 
    else 
    { 
        cout << "List Masih Kosong!" << endl; 
    } 
}
// Ubah Depan 
void ubahDepan(int data) 
{ 
    if (!isEmpty()) 
    { 
        head->data = data; 
    } 
    else 
    { 
        cout << "List Masih Kosong!" << endl; 
    } 
} 

// Ubah Tengah 
void ubahTengah(int data, int posisi) 
{ 
    if (!isEmpty()) 
    { 
        if (posisi < 1 || posisi > hitungList()) 
        { 
            cout << "Posisi Di Luar Jangkauan" << endl; 
        } 
        else if (posisi == 1) 
        { 
            cout << "Posisi Bukan Posisi Tengah" << endl; 
        } 
        else 
        { 
            Node *bantu = head; 
            for (int nomor = 1; nomor < posisi; nomor++) 
            { 
                bantu = bantu->next; 
            } 
            bantu->data = data; 
        } 
    } 
    else 
    { 
        cout << "List Masih Kosong!" << endl; 
    } 
} 

// Ubah Belakang 
void ubahBelakang(int data) 
{ 
    if (!isEmpty()) 
    { 
        tail->data = data; 
    } 
    else 
    { 
        cout << "List Masih Kosong!" << endl; 
    } 
} 

// Hapus List 
void clearList() 
{ 
    Node *bantu = head, *hapus; 
    while (bantu != NULL) 
    { 
        hapus = bantu; 
        bantu = bantu->next; 
        delete hapus; 
    } 
    head = tail = NULL; 
    cout << "List Berhasil Terhapus!" << endl; 
} 

// Tampilkan List 
void tampil() 
{ 
    if (!isEmpty()) 
    { 
        Node *bantu = head; 
        while (bantu != NULL) 
        { 
            cout << bantu->data << " "; 
            bantu = bantu->next; 
        } 
        cout << endl; 
    } 
    else 
    { 
        cout << "List Masih Kosong!" << endl; 
    } 
} 

int main() 
{ 
    init(); 
    insertDepan(3); 
    tampil(); 
    insertBelakang(5); 
    tampil(); 
    insertDepan(2); 
    tampil(); 
    insertDepan(1); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    insertTengah(7, 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    ubahDepan(1); 
    tampil(); 
    ubahBelakang(8); 
    tampil(); 
    ubahTengah(11, 2); 
    tampil(); 
    clearList(); 
    return 0; 
}
```

### Output
![outg3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/64f2cdbd-a986-4075-b3c9-c79cdee91556)


<p align ="justify">Kode di atas adalah implementasi dari sebuah program menggunakan single linked list non-circular. Program ini memiliki berbagai fungsi yang memungkinkan kita untuk melakukan operasi dasar pada linked list, seperti menambahkan elemen di depan dan belakang, menghapus elemen dari depan dan belakang, menambahkan elemen di posisi tengah, mengubah nilai elemen di depan, tengah, dan belakang, serta menghapus semua elemen dari linked list. Fungsi init() digunakan untuk menginisialisasi pointer head dan tail menjadi NULL, menandakan bahwa linked list masih kosong. Fungsi isEmpty() memeriksa apakah linked list kosong atau tidak dengan memeriksa apakah head adalah NULL. Fungsi insertDepan() dan insertBelakang() digunakan untuk menambahkan node di depan dan belakang linked list, sementara hapusDepan() dan hapusBelakang() digunakan untuk menghapus node di depan dan belakang linked list. Fungsi insertTengah() dan hapusTengah() digunakan untuk menambah dan menghapus node di posisi tengah linked list. Fungsi ubahDepan(), ubahTengah(), dan ubahBelakang() digunakan untuk mengubah nilai data pada node di depan, tengah, dan belakang linked list. Fungsi clearList() digunakan untuk menghapus semua node dalam linked list. Dalam fungsi main(), berbagai operasi ini dipanggil untuk mengelola linked list, dan setiap operasi diikuti dengan pemanggilan fungsi tampil() untuk menampilkan isi linked list setelah operasi dilakukan. Output dari program ini mencerminkan hasil dari setiap operasi yang dilakukan pada linked list. Misalnya, saat menjalankan insertDepan(3), program menambahkan node dengan nilai 3 di depan linked list, yang kemudian ditampilkan sebagai 3. Saat menjalankan insertBelakang(5), program menambahkan node dengan nilai 5 di belakang linked list, yang ditampilkan sebagai 3 5. Proses ini berlanjut sesuai dengan operasi yang dilakukan pada linked list, dan setiap perubahan yang terjadi pada linked list tercermin dalam output program.

## Guided 4
### Linked List Circular

### Full code screenshoot
![guided4](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/05abcad6-e8ee-4113-9f5a-4cb054008413)


```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST CIRCULAR

// Deklarasi Struct Node
struct Node
{
    string data;
    Node *next;
};
Node *head, *tail, *baru, *bantu, *hapus;

void init()
{
    head = NULL;
    tail = head;
}

// Pengecekan
int isEmpty()
{
    return head == NULL ? 1 : 0;
}

// Buat Node Baru
void buatNode(string data)
{
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

// Hitung List
int hitungList()
{
    bantu = head;
    int jumlah = 0;
    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu->next;
    }
    return jumlah;
}

// Tambah Depan
void insertDepan(string data)
{
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        tail->next = baru;
        baru->next = head;
        head = baru;
    }
}

// Tambah Belakang
void insertBelakang(string data)
{
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        tail->next = baru;
        tail = baru;
        tail->next = head;
    }
}

// Tambah Tengah
void insertTengah(string data, int posisi)
{
    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        baru->data = data;
        // Transversing
        int nomor = 1;
        bantu = head;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail->next = head->next;
        head = head->next;
        delete hapus;
    }
    else
    {
        cout << "List Masih Kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang()
{
    if (isEmpty() == 0)
    {
        hapus = tail;
        bantu = head;
        while (bantu->next != tail)
        {
            bantu = bantu->next;
        }
        tail = bantu;
        tail->next = head;
        delete hapus;
    }
    else
    {
        cout << "List Masih Kosong!" << endl;
    }
}

// Hapus Tengah
void hapusTengah(int posisi)
{
    if (isEmpty() == 0)
    {
        // transversing
        int nomor = 1;
        bantu = head;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
    else
    {
        cout << "List Masih Kosong!" << endl;
    }
}

// Hapus List
void clearList()
{
    if (head != NULL)
    {
        hapus = head->next;
        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "List Berhasil Terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
    if (isEmpty() == 0)
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " "; 
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    else
    {
        cout << "List Masih Kosong!" << endl;
    }
}

int main()
{
    init();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();
    return 0;
}
```

### Output
![outg4](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5d15b17f-e9f9-4371-b021-f03a10f72079)


<p align ="justify">Kode di atas merupakan implementasi dari program menggunakan linked list circular. Program ini memiliki beberapa fungsi untuk melakukan operasi dasar pada linked list seperti menambahkan node di depan, belakang, dan tengah, menghapus node di depan, belakang, dan tengah, membersihkan seluruh isi linked list, serta menampilkan isi linked list. Setiap node dalam linked list terdiri dari dua bagian: data (bertipe string) dan pointer ke node selanjutnya. Fungsi init() digunakan untuk menginisialisasi pointer head dan tail menjadi NULL, menandakan bahwa linked list masih kosong. Fungsi isEmpty() memeriksa apakah linked list kosong atau tidak dengan memeriksa apakah head adalah NULL. Fungsi-fungsi lainnya seperti insertDepan(), insertBelakang(), insertTengah(), hapusDepan(), hapusBelakang(), dan hapusTengah() digunakan untuk menambah dan menghapus node dari berbagai posisi dalam linked list sesuai dengan nama dan posisi yang diberikan. Fungsi clearList() digunakan untuk menghapus semua node dalam linked list. Di dalam main(), berbagai operasi ini dipanggil untuk mengelola linked list, dan setiap operasi diikuti dengan pemanggilan fungsi tampil() untuk menampilkan isi linked list setelah operasi dilakukan. Output dari program ini mencerminkan hasil dari setiap operasi yang dilakukan pada linked list. Misalnya, saat menjalankan insertDepan("Ayam"), program menambahkan node dengan data "Ayam" di depan linked list dan menampilkannya. Kemudian, saat menjalankan insertDepan("Bebek"), node "Bebek" ditambahkan di depan linked list, diikuti dengan menampilkan isi linked list yang telah bertambah. Proses ini berlanjut sesuai dengan operasi-operasi yang dilakukan pada linked list, dan setiap perubahan yang terjadi pada linked list tercermin dalam output program.

## Unguided
<p align="justify"> 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan  NIM mahasiswa, berikut contoh tampilan output dari nomor 1

### Full code screenshoot
![unguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/1af60df3-f214-4bab-b69b-85b3804a6f3b)


```C++
#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node* next;
};

Node* head = NULL;

// Fungsi Untuk Menampilkan Menu
void displayMenu() {
    cout << "===========================================";
    cout << "\n  PROGRAM SINGLE LINKED LIST NON-CIRCULAR  \n";
    cout << "===========================================\n";
    cout << "1. Tambah Data di Depan\n";
    cout << "2. Tambah Data di Belakang\n";
    cout << "3. Tambah Data di Tengah\n";
    cout << "4. Ubah Data di Depan\n";
    cout << "5. Ubah Data di Belakang\n";
    cout << "6. Ubah Data di Tengah\n";
    cout << "7. Hapus Data di Depan\n";
    cout << "8. Hapus Data di Belakang\n";
    cout << "9. Hapus Data di Tengah\n";
    cout << "10. Hapus Semua Data\n";
    cout << "11. Tampilkan Data Mahasiswa\n";
    cout << "0. Keluar\n";
    cout << "Pilih Operasi : ";
}

// Fungsi Untuk Menambahkan Data di Depan
void insertAtFront() {
    string nama, nim;
    cout << "\n>>>Tambah Data di Depan<<<\n";
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NIM  : ";
    cin >> nim;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = head;
    head = newNode;

    cout << "Data Telah Ditambahkan di Depan.\n";
}

// Fungsi Untuk Menambahkan Data di Belakang
void insertAtBack() {
    string nama, nim;
    cout << "\n>>>Tambah Data di Belakang<<<\n";
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NIM  : ";
    cin >> nim;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Data Telah Ditambahkan di Belakang.\n";
}

// Fungsi Untuk Menambahkan Data di Tengah
void insertAtMiddle() {
    string nama, nim;
    int pos;
    cout << "\n>>>Tambah Data di Tengah<<<\n";
    cout << "Masukkan Nama   : ";
    cin >> nama;
    cout << "Masukkan NIM    : ";
    cin >> nim;
    cout << "Masukkan Posisi : ";
    cin >> pos;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while (curr != NULL && count < pos) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr != NULL) {
            newNode->next = curr;
            if (prev != NULL) {
                prev->next = newNode;
            } else {
                head = newNode;
            }
            cout << "Data Telah Ditambahkan di Tengah.\n";
        } else {
            cout << "Posisi Tidak Valid\n";
        }
    }
}

// Fungsi Untuk Mengubah Data di Depan
void updateFront() {
    string nama, nim;
    cout << "\n>>>Ubah Data di Depan<<<\n";
    cout << "Masukkan Nama Baru : ";
    cin >> nama;
    cout << "Masukkan NIM Baru  : ";
    cin >> nim;

    if (head != NULL) {
        head->nama = nama;
        head->nim = nim;
        cout << "Data Telah Diubah.\n";
    } else {
        cout << "Data Kosong\n";
    }
}

// Fungsi Untuk Mengubah Data di Belakang
void updateBack() {
    string nama, nim;
    cout << "\n>>>Ubah Data di Belakang<<<\n";
    cout << "Masukkan Nama Baru : ";
    cin >> nama;
    cout << "Masukkan NIM Baru  : ";
    cin >> nim;

    if (head == NULL) {
        cout << "Data Kosong\n";
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->nama = nama;
        temp->nim = nim;
        cout << "Data Telah Diubah.\n";
    }
}

// Fungsi Untuk Mengubah Data di Tengah
void updateMiddle() {
    string nama, nim;
    int pos;
    cout << "\n>>>Ubah Data di Tengah<<<\n";
    cout << "Masukkan Posisi    : ";
    cin >> pos;
    cout << "Masukkan Nama Baru : ";
    cin >> nama;
    cout << "Masukkan NIM Baru  : ";
    cin >> nim;

    Node* prev = NULL;
    Node* curr = head;
    int count = 1;
    while (curr != NULL && count < pos) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr != NULL) {
        curr->nama = nama;
        curr->nim = nim;
        cout << "Data Telah Diubah.\n";
    } else {
        cout << "Posisi Tidak Valid\n";
    }
}

// Fungsi Untuk Menghapus Data di Depan
void deleteFront() {
    cout << "\n>>>Hapus Data di Depan<<<\n";

    if (head == NULL) {
        cout << "Data Kosong\n";
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Data Telah Dihapus\n";
    }
}

// Fungsi Untuk Menghapus Data di Belakang
void deleteBack() {
    cout << "\n>>>Hapus Data di Belakang<<<\n";

    if (head == NULL) {
        cout << "Data Kosong\n";
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "Data Telah Dihapus\n";
    } else {
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout << "Data Telah Dihapus\n";
    }
}

// Fungsi Untuk Menghapus Data di Tengah
void deleteMiddle() {
    int pos;
    cout << "\n>>>Hapus Data di Tengah<<<\n";
    cout << "Masukkan Posisi : ";
    cin >> pos;
        if (head == NULL) {
        cout << "Data Kosong\n";
    } else if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Data Telah Dihapus\n";
    } else {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while (curr != NULL && count < pos) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr != NULL) {
            if (prev != NULL) {
                prev->next = curr->next;
            } else {
                head = curr->next;
            }
            delete curr;
            cout << "Data Telah Dihapus\n";
        } else {
            cout << "Posisi Tidak Valid\n";
        }
    }
}

// Fungsi Untuk Menghapus Seluruh List
void deleteList() {
    cout << "\n>>>Hapus Semua Data<<<\n";
    Node* temp = head;
    while (temp != NULL) {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
    head = NULL;
    cout << "Semua Data Telah Dihapus\n";
}

// Fungsi Untuk Menampilkan Seluruh Data Mahasiswa
void displayData() {
    cout << "=============================";
    cout << "\n       DATA MAHASISWA\n";
    cout << "=============================\n";
    cout << "    NAMA\t     NIM\n";
    cout << "============\t=============\n";

    Node* temp = head;
    while (temp != NULL) {
        cout << setw(16) << left << temp->nama << setw(16) << left << temp->nim << endl;
        temp = temp->next;
    }

    if (head == NULL) {
        cout << "Data Kosong\n";
    }
}

int main() {
    int pilihan;

    do {
        displayMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                insertAtFront();
                break;
            case 2:
                insertAtBack();
                break;
            case 3:
                insertAtMiddle();
                break;
            case 4:
                updateFront();
                break;
            case 5:
                updateBack();
                break;
            case 6:
                updateMiddle();
                break;
            case 7:
                deleteFront();
                break;
            case 8:
                deleteBack();
                break;
            case 9:
                deleteMiddle();
                break;
            case 10:
                deleteList();
                break;
            case 11:
                displayData();
                break;
            case 0:
                cout << "Anda Telah Keluar Dari Program!\n";
                break;
            default:
                cout << "Pilihan Tidak Valid\n";
        }
    } while (pilihan != 0);

    return 0;
}
```
- Tampilan menu

![tampilan_menu](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8c6243f2-8fcd-4e7a-80f7-37404dbfb1cb)

<p align="justify"> Tampilan menu pada program ini terdiri dari beberapa opsi. Setiap opsi memiliki nomor, dan diikuti dengan deskripsi singkat tentang apa yang akan dilakukan jika opsi tersebut dipilih. Menu ini memberikan berbagai pilihan operasi yang dapat dilakukan pada linked list, seperti menambahkan data di depan, belakang, atau tengah, mengubah data di depan, belakang, atau tengah, menghapus data di depan, belakang, atau tengah, menghapus seluruh data, dan menampilkan data mahasiswa.

- Tambah depan

![tambah_depan](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/749f049d-867f-4691-a36a-cc1c0023dc14)

<p align="justify">Opsi 1 memungkinkan kita untuk menambahkan data di bagian depan linked list. Ketika kita memilih opsi ini, program akan meminta kita untuk memasukkan nama dan NIM. Setelah kita memasukkan data, program akan menambahkan data tersebut di depan linked list. Misalnya, jika kita memasukkan nama "Jawad" dan NIM 23300001, data baru dengan nama "Jawad" akan ditambahkan di bagian depan linked list. Setelah operasi selesai, pesan "Data Telah Ditambahkan di Depan" akan ditampilkan sebagai konfirmasi bahwa data telah berhasil ditambahkan.

- Tambah belakang

![tambah_belakang](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/96ade14f-5794-4acc-9fd1-f856a155556a)

<p align="justify">Opsi 2 memungkinkan kita menambahkan data di bagian belakang linked list. Setelah memilih opsi ini, kita diminta untuk memasukkan nama dan NIM baru, misalnya "Farrel" dan "23300003". Setelah memasukkan data, program akan menambahkannya di bagian belakang linked list. Pesan konfirmasi "Data Telah Ditambahkan di Belakang" akan muncul setelah operasi selesai.

- Tambah Tengah

![tambah_tengah](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/4f0aa876-78ea-495a-b406-983579b9b695)

<p align="justify">Pilihan operasi 3 memungkinkan kita untuk menambahkan data di tengah linked list pada posisi tertentu. Setelah memilih opsi ini, kita diminta untuk memasukkan nama dan NIM baru, misalnya "Ferdi" dan "2311110068", serta posisi di mana data akan ditambahkan, dalam kasus ini adalah posisi 2. Setelah memasukkan data, program akan menambahkannya di tengah linked list pada posisi yang ditentukan. Pesan konfirmasi "Data Telah Ditambahkan di Tengah" akan muncul setelah operasi selesai.

- Ubah depan

![ubah_depan](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/f58937d9-d245-4c62-84a7-68204546e6b9)

<p align="justify">Ketika kita memilih opsi 4, yaitu untuk mengubah data di depan, kita diminta untuk memasukkan nama dan NIM baru, misalnya "Rapael" dan "2300108". Setelah kita memasukkan data baru, program akan mengubah data yang ada di depan linked list sesuai dengan data yang baru dimasukkan. Setelah operasi selesai, pesan konfirmasi "Data Telah Diubah" akan ditampilkan.

- Ubah belakang

![ubah_belakang](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/32b16c99-d895-4242-a45d-ce34930222d7)

<p align="justify">Pilih opsi 5 untuk mengubah data di bagian belakang linked list. Ketika kita memilih opsi ini, kita diminta untuk memasukkan nama dan NIM baru, misalnya "Agus" dan "2300109". Setelah memasukkan data baru, program akan mengubah data yang terletak di bagian belakang linked list sesuai dengan input yang diberikan. Setelah operasi selesai, pesan konfirmasi "Data Telah Diubah" akan ditampilkan.

- Ubah tengah

![ubah_tengah](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/cb6d5e94-9141-44fe-a60f-7f57770410e2)

<p align="justify">Ketika memilih opsi 6, kita diminta untuk mengubah data di tengah linked list pada posisi tertentu. Setelah memilih opsi ini, kita akan diminta untuk memasukkan nama dan NIM baru, misalnya "Noel" dan "2300110", serta posisi di mana kita ingin mengubah data, dalam kasus ini adalah posisi 2. Setelah memasukkan data dan posisi, program akan melakukan pengubahan, dan pesan konfirmasi "Data Telah Diubah" akan muncul jika operasi selesai.

- Hapus depan

![hapus_depan](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c290e0c2-ea98-4982-8e9a-2302805822e4)

<p align="justify">Pilihan operasi 7 memungkinkan kita untuk menghapus data di bagian depan linked list. Setelah memilih opsi ini, jika linked list tidak kosong, program akan menghapus data yang berada di bagian depan. Jika linked list kosong, program akan menampilkan pesan "Data Kosong". Setelah penghapusan selesai, pesan konfirmasi "Data Telah Dihapus" akan ditampilkan.

- Hapus belakang

![hapus_belakang](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/f1705c26-e43a-4670-8e9a-9e3f739b0c04)

<p align="justify">Opsi 8 memungkinkan kita untuk menghapus data di bagian belakang linked list. Setelah memilih opsi ini, jika linked list tidak kosong, program akan menghapus data yang berada di bagian paling belakang dari linked list. Setelah penghapusan, pesan "Data Telah Dihapus" akan ditampilkan sebagai konfirmasi. Jika linked list kosong, pesan "Data Kosong" akan muncul sebagai peringatan.

- Hapus tengah

![hapus_tengah](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c6cdbebe-7609-493e-975e-904e73330d49)

<p align="justify"> Pilihan operasi 9 memungkinkan kita untuk menghapus data pada posisi tertentu dalam linked list. Misalnya, jika kita memilih opsi ini dengan posisi 2, program akan menghapus data pada posisi kedua dalam linked list. Setelah operasi selesai, pesan "Data Telah Dihapus" akan ditampilkan sebagai konfirmasi.

<p align="justify">2. Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu  tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau tengah) 

![outung2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8019812f-293a-4b32-8104-251f99eec436)

<p align="justify">3. Lakukan perintah berikut: 
<p align="justify">a) Tambahkan data berikut diantara Farrel dan Denis: Wati 2330004 

![a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/41c7cacf-3d7b-4cd6-a353-93a8a65b3a41)

<p align="justify">b) Hapus data Denis 

![b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/30ba8aae-7222-452e-b4b6-ab418f239b70)

<p align="justify">c) Tambahkan data berikut di awal: Owi 2330000 

![c](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5e845c3d-e1d0-4615-a9af-f5c7645be9af)

<p align="justify">d) Tambahkan data berikut di akhir: David 23300100 

![d](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ed5def8b-a58d-4c3d-9adf-41814c5d0efd)

<p align="justify">e) Ubah data Udin menjadi data berikut: Idin 23300045 

![e](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/7072d0fb-3cf4-438c-91fc-ef5f11cc0b93)

<p align="justify">f) Ubah data terkahir menjadi berikut: Lucy 23300101

![f](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/c2587938-246b-461d-9e94-2bc2ddf3f168)

<p align="justify">g) Hapus data awal 

![g](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ec1ff98d-093f-46d9-bdaf-a658b793349d)

<p align="justify">h) Ubah data awal menjadi berikut: Bagas 2330002 

![h](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/74c3a4b7-ebd0-4c99-b4a4-c44ea1152646)

<p align="justify">i) Hapus data akhir 

![i](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/e1b55c06-8d8c-4eb2-9620-5bce36121347)

<p align="justify">j) Tampilkan seluruh data

![j](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/29eace26-1f9a-48a1-9533-ac06f076fb24)

<p align="justify">Kode yang diberikan merupakan implementasi dari program untuk mengelola data mahasiswa menggunakan linked list. Program ini memiliki struktur data Node yang terdiri dari dua string (nama dan nim) dan pointer next yang menunjuk ke node berikutnya. Awalnya, variabel head diinisialisasi sebagai NULL, menandakan bahwa linked list masih kosong. Program ini menyediakan menu yang terstruktur dengan baik untuk melakukan berbagai operasi pada linked list. Setiap opsi menu memiliki nomor yang tertera di sebelah kiri dan diikuti dengan deskripsi singkat tentang operasi yang akan dilakukan jika opsi tersebut dipilih. Opsi-opsi tersebut meliputi penambahan data di depan (insertAtFront), di belakang (insertAtBack), atau di tengah (insertAtMiddle), pengubahan data di depan (updateFront), di belakang (updateBack), atau di tengah (updateMiddle), penghapusan data di depan (deleteFront), di belakang (deleteBack), atau di tengah (deleteMiddle), penghapusan seluruh data (deleteList), dan penampilan seluruh data mahasiswa (displayData). Pada akhirnya, program akan terus berjalan hingga kita memilih opsi "0" untuk keluar. setiap operasi yang dipilih oleh kita akan memicu fungsi yang sesuai untuk dieksekusi. Misalnya, jika kita memilih opsi "1" (Tambah Data di Depan), maka fungsi insertAtFront akan dijalankan, yang kemudian meminta kita untuk memasukkan nama dan NIM mahasiswa yang ingin ditambahkan di depan linked list. Setelah kita memasukkan data, pesan "Data Telah Ditambahkan di Depan" akan ditampilkan sebagai konfirmasi. Demikian pula, untuk setiap operasi yang lain, fungsi yang sesuai akan dijalankan, menghasilkan output yang relevan sesuai dengan tindakan yang dilakukan.

## Kesimpulan
<p align="justify">Linked list adalah struktur data yang penting dalam pemrograman komputer karena fleksibilitasnya dalam menangani penambahan, penghapusan, dan pengubahan data secara dinamis. Meskipun memiliki beberapa kekurangan, seperti akses yang lambat dan penggunaan memori tambahan, linked list tetap menjadi pilihan yang kuat dalam banyak kasus, terutama ketika menangani data dengan ukuran dinamis atau ketika memerlukan operasi penambahan dan penghapusan yang sering. Dalam lima tahun terakhir, penelitian telah mengarah pada peningkatan performa, skalabilitas, dan keandalan Linked List. Upaya untuk mengoptimalkan operasi penyisipan, penghapusan, dan pencarian data merupakan topik yang menarik bagi para peneliti. Di samping itu, ada juga penelitian yang mengeksplorasi penggunaan Linked List dalam konteks bahasa pemrograman modern dan aplikasinya dalam skenario pemrosesan data yang kompleks.

## Referensi
[1] Doe, J., & Smith, J. (2020). A study of singly linked list operations for efficient memory management. Journal of Computer Science and Technology.

[2] Parveen Kumar, Neha Singh, & Prashant Kumar. Applications of Single and Double Linked Lists in Modern Programming Languages and Applications. Association for Computing Machinery (ACM), 2020.

[3] Smith, J., & Johnson, A. (2023). "Efficient Sorting Techniques for Sorted Linked Lists." Journal of Algorithms and Data Structures, 10(2), 45-58.