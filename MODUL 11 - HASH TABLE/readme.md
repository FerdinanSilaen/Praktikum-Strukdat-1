 <h1 align="center">Laporan Praktikum Modul Hash Table</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify">Hash table merupakan struktur data yang secara asosiatif menyimpan data. Dalam hal ini, data disimpan dalam format array, di mana setiap nilai data memiliki nilai indeks uniknya sendiri. Akses data akan menjadi sangat cepat jika Anda mengetahui indeks dari data yang diinginkan. Hash table atau tabel hash juga memungkinkan pencarian data dengan sangat efisien. Hash table menggunakan fungsi hash untuk memetakan kunci (keys) ke lokasi di dalam tabel, yang memungkinkan akses cepat ke data yang terkait dengan kunci tersebut. Hash table mengimplementasikan sebuah set asosiatif, yaitu sebuah koleksi pasangan kunci-nilai (key-value pairs), di mana setiap kunci unik dipetakan ke suatu nilai [1]. Hash table menggunakan fungsi hash untuk menghitung indeks dari sebuah array atau list, yang kemudian digunakan untuk menyimpan pasangan kunci-nilai tersebut. Dengan demikian, hash table menjadi struktur data di mana operasi penyisipan dan pencarian data terjadi sangat cepat terlepas dari ukuran data tersebut. Hash table menggunakan array sebagai media penyimpanan dan tekniknya untuk menghasilkan indeks suatu elemen yang dimasukkan atau ditempatkan.

![hahs table](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/31c3c81f-9580-4786-995b-0d4e6b430630)

#### Fungsi Hash table
<p align="justfy">Fungsi hash adalah algoritma yang mengonversi input data dengan panjang variabel menjadi output data dengan panjang tetap. Dalam konteks hash table, input data biasanya berupa kunci (key) yang berfungsi untuk mengidentifikasi pasangan kunci-nilai (key-value pair) secara unik. Output dari fungsi hash adalah hash code, yang merupakan integer yang menentukan lokasi atau indeks dalam array yang mendasari hash table.

- Pemrosesan Kunci (Key Processing)

    <p align="justify"> Kunci bisa berupa berbagai jenis data seperti string, integer, atau objek lainnya. Fungsi hash harus mampu menangani berbagai jenis kunci ini dan mengubahnya menjadi nilai yang dapat digunakan untuk menghasilkan hash code. Tujuan utamanyay adalah untuk mengambil kunci input dan mengonversinya menjadi bentuk yang dapat diproses oleh fungsi hash.

- Pemetaan ke Hash Code (Mapping to Hash Code)

    <p align="justify">Fungsi hash memproses kunci untuk menghasilkan hash code, sebuah nilai integer yang digunakan untuk menentukan posisi penyimpanan dalam hash table. Proses ini sering melibatkan operasi matematika seperti modulo untuk memastikan hash code berada dalam rentang indeks array. Tujuannya untuk menghasilkan hash code dari kunci input.

- Mengurangi Tabrakan (Collision Reduction)

    <p align= "justify"> Meskipun sulit untuk menghindari tabrakan sepenuhnya, fungsi hash yang baik akan meminimalkan frekuensi tabrakan. Strategi untuk mengurangi tabrakan melibatkan desain fungsi hash yang menghasilkan distribusi hash code yang lebih acak dan merata. Tujuannya untuk meminimalkan insiden di mana dua kunci atau lebi menghasilkan hash code yang sama.

![hash table1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/815bb01f-dff5-49f4-b781-8dd82585f114)

#### Teknik Teknik  dalam Hash Table

- Hashing 

    <p align="justify">Hashing adalah proses mengubah kunci atau string karakter menjadi nilai lain yang biasanya berupa angka, yang disebut hash code. Proses ini menggunakan fungsi hash yang memetakan kunci ke ukuran tabel tertentu dan kemudian menggunakan nilai hash code sebagai indeks untuk menyimpan elemen dalam hash table. Hash table menyimpan pasangan kunci-nilai dalam array atau list yang dapat diakses melalui indeks yang ditentukan oleh hash code.  Kunci yang dapat berupa string, angka, atau objek lainnya diberikan sebagai input ke fungsi hash. Karena jumlah kunci yang mungkin tidak terbatas, fungsi hash berfungsi untuk memetakan kunci-kunci tersebut ke ruang indeks tabel yang terbatas.

- Linear probling

    <p align="justify">Linear probing adalah salah satu metode untuk menangani tabrakan (collision) dalam hash table. Tabrakan terjadi ketika dua kunci berbeda menghasilkan hash code yang sama, sehingga diarahkan ke indeks yang sama dalam hash table [2]. Dalam linear probing, ketika terjadi tabrakan, algoritma akan mencari slot kosong terdekat dalam tabel secara linear (sekuensial). Jika slot pada indeks yang dihasilkan oleh fungsi hash sudah terisi, algoritma akan memeriksa slot berikutnya hingga menemukan slot kosong

<p align="justify">Hashing dan teknik linear probing merupakan komponen fundamental dalam implementasi hash table. Hashing memungkinkan pemetaan kunci ke indeks tabel dengan cepat, sementara linear probing menyediakan mekanisme efektif untuk menangani tabrakan. Meskipun linear probing memiliki kekurangan seperti clustering, teknik ini tetap populer karena kesederhanaan dan efisiensinya dalam banyak kasus penggunaan [3].

#### Operasi pada Hash Table

<p align="justify"> Operasi-operasi dasar pada hash table mencakup penyisipan (insertion), pencarian (searching), dan penghapusan (deletion).

- Penyisipan (Insertion)

    <p align="justify"> Untuk menyisipkan elemen baru, fungsi hash digunakan untuk menentukan indeks dari kunci elemen tersebut dalam tabel. Jika indeks tersebut kosong, elemen disimpan di sana. Jika tidak, diperlukan teknik penanganan tabrakan. Langkahnya dapat berupa menghitung hash code untuk kunci menggunakan fungsi hash. Gunakan hash code untuk menentukan indeks dalam tabel. Jika slot kosong, simpan elemen di slot tersebut.Jika slot sudah terisi, gunakan teknik penanganan tabrakan untuk menemukan slot kosong.

- Pencarian (Searching)

    <p align= "justify"> Untuk mencari elemen dengan kunci tertentu, fungsi hash digunakan untuk menentukan indeks dari kunci tersebut dalam tabel. Jika elemen ditemukan di indeks tersebut, elemen tersebut dikembalikan. Jika tidak, diperlukan teknik penanganan tabrakan. Langkah-langkah dapat berupa, hitung hash code untuk kunci menggunakan fungsi hash. Gunakan hash code untuk menentukan indeks dalam tabel. Periksa elemen di indeks tersebut.Jika elemen tidak cocok, gunakan teknik penanganan tabrakan untuk mencari elemen di slot lain yang relevan.

- Penghapusan (Deletion)

    <p align="justify">Untuk menghapus elemen dengan kunci tertentu, fungsi hash digunakan untuk menentukan indeks dari kunci tersebut dalam tabel. Setelah elemen ditemukan, elemen tersebut dihapus, dan teknik penanganan tabrakan memastikan konsistensi struktur tabel. Langkah-langkah dapat berupa,  hitung hash code untuk kunci menggunakan fungsi hash. Gunakan hash code untuk menentukan indeks dalam tabel. Temukan elemen di indeks tersebut atau slot lain yang relevan. Hapus elemen dan perbarui struktur tabel sesuai dengan teknik penanganan tabrakan.

#### Kelebihan Hash Table :
- Menghemat Ruang Penyimpanan : Hash table dapat menghemat ruang penyimpanan dengan cara mengkonversi data menjadi nilai hash yang lebih kecil.

- Mengurangi Waktu Pengembangan : Hash table dapat mengurangi waktu pengembangan dengan cara mengurangi kompleksitas kode.

- Efisiensi Waktu : Hash table dapat mengakses data dengan cepat dan efisien.

#### Kekurangan Hash Table 
- Collision : Hash table dapat mengalami collision ketika dua key memiliki nilai hash yang sama.

- Mengurangi Performa : Hash table dapat mengurangi performa jika tidak digunakan dengan benar.




## Guided 1

### Full code screenshoot
![1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/17cb00b6-a8ca-4e55-9262-5dd7998940df)


```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```

### Output 
![out1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5b398f3f-239a-4839-aa72-7a15b050d42a)


<p align="justify"> Kode ini mengimplementasikan hash table. Hash table sendiri merupakan struktur data yang efisien untuk menyimpan dan mengambil pasangan kunci-nilai. Dalam implementasi ini, ukuran hash table ditentukan oleh konstanta MAX_SIZE, yang diberi nilai 10 dalam contoh ini. Fungsi hash sederhana, hash_func, digunakan untuk memetakan kunci ke indeks dalam tabel menggunakan operasi modulo (key % MAX_SIZE). Ini membantu dalam menyebar kunci secara merata ke seluruh rentang indeks yang tersedia, sehingga mengurangi kemungkinan tabrakan. Setiap elemen dalam hash table direpresentasikan oleh struktur data Node. Setiap node memiliki dua atribut utama: key dan value, yang mewakili pasangan kunci-nilai, serta next, yang adalah pointer ke node berikutnya dalam daftar terkait. Ini memungkinkan penanganan tabrakan dengan chaining, di mana setiap indeks dalam tabel dapat memiliki beberapa node terkait yang membentuk sebuah linked list. Kelas HashTable adalah inti dari implementasi ini. Pada konstruktor HashTable(), memori dialokasikan untuk tabel hash sebagai array dari pointer ke Node dengan ukuran MAX_SIZE. Setiap elemen array diinisialisasi ke nullptr. Destruktor ~HashTable() bertanggung jawab untuk membersihkan memori yang digunakan oleh tabel dengan menghapus setiap node dalam tabel. Fungsi insert digunakan untuk menyisipkan pasangan kunci-nilai ke dalam hash table. Fungsi ini menemukan indeks menggunakan fungsi hash, lalu menelusuri daftar pada indeks tersebut. Jika kunci sudah ada, nilai yang terkait diperbarui; jika tidak, node baru dibuat dan dimasukkan di awal daftar. Fungsi get digunakan untuk mencari nilai yang terkait dengan kunci tertentu. Ini menggunakan fungsi hash untuk menemukan indeks, lalu menelusuri daftar pada indeks tersebut. Jika kunci ditemukan, nilainya dikembalikan; jika tidak, fungsi mengembalikan -1. Fungsi remove digunakan untuk menghapus pasangan kunci-nilai dari hash table. Ini juga menggunakan fungsi hash untuk menemukan indeks, lalu menelusuri daftar pada indeks tersebut untuk mencari node dengan kunci yang sesuai. Jika ditemukan, node dihapus dari daftar. Fungsi traverse digunakan untuk mencetak semua pasangan kunci-nilai dalam hash table. Ini iterasi melalui setiap indeks dalam tabel dan mencetak semua node yang ada pada setiap indeks. Di dalam fungsi main, kita membuat instance dari HashTable, menyisipkan beberapa pasangan kunci-nilai, dan menunjukkan penggunaan fungsi pencarian, penghapusan, dan traversal.

## Guided 2

### Full code screenshoot
![02](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/4fd5727d-33b9-4e6f-b35e-277d95c084d7)


```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```

### Output 
![out2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/3cfbe173-50d0-411f-9e03-e9c2647e8475)

<p align="justify">Kode di atas adalah implementasi sederhana dari hash table. Dalam hash table ini, setiap entri tabel adalah vektor yang menampung objek HashNode, yang memiliki atribut name dan phone_number. Fungsi hashFunc digunakan untuk menghitung hash value dari nama. Kemudian, fungsi insert digunakan untuk memasukkan pasangan kunci-nilai baru ke dalam hash table. Fungsi ini mengecek apakah nama sudah ada dalam vektor yang sesuai dengan hash value-nya. Jika sudah ada, nomor teleponnya diperbarui; jika tidak, pasangan kunci-nilai baru dimasukkan. Fungsi remove digunakan untuk menghapus pasangan kunci-nilai berdasarkan nama. Ini mencari nama dalam vektor yang sesuai dengan hash value dari nama tersebut dan menghapusnya jika ditemukan. Fungsi searchByName digunakan untuk mencari nomor telepon berdasarkan nama. Ini mencari nama dalam vektor yang sesuai dengan hash value dari nama tersebut dan mengembalikan nomor teleponnya jika ditemukan. Fungsi print digunakan untuk mencetak seluruh isi hash table. Di dalam main, sebuah instance dari HashMap dibuat. Beberapa pasangan kunci-nilai dimasukkan, lalu fungsi pencarian, penghapusan, dan pencetakan digunakan untuk mengonfirmasi operasi hash table yang benar.


## Unguided 

<p align="justify"> Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :

A. Setiap mahasiswa memiliki NIM dan nilai.

B. Program memiliki tampilan pilihan menu berisi poin C.

C. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).


### Full code screenshoot
![03](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b709a0f8-f7b0-46b3-bc30-2ec281028b95)


```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struktur data untuk setiap mahasiswa
struct Mahasiswa {
    string nim;
    int nilai;

    // Konstruktor
    Mahasiswa(string nim, int nilai) : nim(nim), nilai(nilai) {}
};

// Node untuk chaining dalam hash table
struct HashNode {
    Mahasiswa data;
    HashNode* next;

    // Konstruktor
    HashNode(Mahasiswa data) : data(data), next(nullptr) {}
};

// Kelas hash table
class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<HashNode*> table[TABLE_SIZE];

    // Fungsi hash sederhana
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

public:
    // Fungsi untuk menambahkan data mahasiswa
    void insert(string nim, int nilai) {
        Mahasiswa mahasiswa(nim, nilai);
        int hash_val = hashFunc(nim);

        for (auto node : table[hash_val]) {
            if (node->data.nim == nim) {
                node->data.nilai = nilai;
                cout << "Data berhasil diperbarui.\n";
                return;
            }
        }
        table[hash_val].push_back(new HashNode(mahasiswa));
        cout << "Data berhasil ditambahkan.\n";
    }

    // Fungsi untuk menghapus data mahasiswa berdasarkan NIM
    void remove(string nim) {
        int hash_val = hashFunc(nim);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->data.nim == nim) {
                table[hash_val].erase(it);
                cout << "Data berhasil dihapus.\n";
                return;
            }
        }
        cout << "Data tidak ditemukan.\n";
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan NIM
    Mahasiswa* searchByNIM(string nim) {
        int hash_val = hashFunc(nim);
        for (auto node : table[hash_val]) {
            if (node->data.nim == nim) {
                return &(node->data);
            }
        }
        return nullptr;
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan rentang nilai
    vector<Mahasiswa> searchByNilai(int minNilai, int maxNilai) {
        vector<Mahasiswa> result;
        for (int i = 0; i < TABLE_SIZE; i++) {
            for (auto node : table[i]) {
                if (node->data.nilai >= minNilai && node->data.nilai <= maxNilai) {
                    result.push_back(node->data);
                }
            }
        }
        return result;
    }
};

int main() {
    HashTable mahasiswaTable;
    int choice;
    string nim;
    int nilai;

    do {
        cout << "Menu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Hapus Data Mahasiswa\n";
        cout << "3. Cari Data Mahasiswa berdasarkan NIM\n";
        cout << "4. Cari Data Mahasiswa berdasarkan Rentang Nilai (80-90)\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;
                cout << "Masukkan Nilai Mahasiswa: ";
                cin >> nilai;
                mahasiswaTable.insert(nim, nilai);
                break;
            case 2:
                cout << "Masukkan NIM Mahasiswa yang akan dihapus: ";
                cin >> nim;
                mahasiswaTable.remove(nim);
                break;
            case 3:
                cout << "Masukkan NIM Mahasiswa yang ingin dicari: ";
                cin >> nim;
                {
                    Mahasiswa* mahasiswa = mahasiswaTable.searchByNIM(nim);
                    if (mahasiswa != nullptr) {
                        cout << "Data Mahasiswa:\n";
                        cout << "NIM: " << mahasiswa->nim << endl;
                        cout << "Nilai: " << mahasiswa->nilai << endl;
                    } else {
                        cout << "Data Mahasiswa tidak ditemukan.\n";
                    }
                }
                break;
            case 4:
                {
                    vector<Mahasiswa> result = mahasiswaTable.searchByNilai(80, 90);
                    if (!result.empty()) {
                        cout << "Data Mahasiswa dengan Nilai 80-90:\n";
                        for (const Mahasiswa& mahasiswa : result) {
                            cout << "NIM: " << mahasiswa.nim << ", Nilai: " << mahasiswa.nilai << endl;
                        }
                    } else {
                        cout << "Tidak ada Mahasiswa dengan Nilai 80-90.\n";
                    }
                }
                break;
            case 5:
                cout << "Terima kasih cuy!!!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 5);

    return 0;
}
```
### Output

#### Menambahkan data 

![out3a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8075d26e-21da-4baa-b633-57d67333528c)
![out3b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/3697c12b-d398-4338-9918-140e71e593f3)

#### Menghapus data 
![out3c](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/14ef31b2-ec87-4f36-9d0b-4e014a14cfe5)

#### Mencari data 
![out3d](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/ea766ff8-2d60-4971-b860-4718a8065ee8)

#### Menampilkan data dengan range nilai (80 - 90) 
![out3e](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/9b851008-bf25-44b5-8911-5203183fb9af)

#### Keluar 
![out3f](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/71a8cddb-299a-4fbf-816e-8fc74b6a04e9)

<p align="justify">Kode di atas merupakan implementasi dari struktur data hash table untuk menyimpan data mahasiswa. Struktur data Mahasiswa merepresentasikan setiap entitas mahasiswa dalam program. Setiap mahasiswa memiliki dua atribut, yaitu NIM (Nomor Induk Mahasiswa) dan nilai. Ini memungkinkan kita untuk menyimpan informasi unik dan spesifik tentang setiap mahasiswa. Dalam hash table, ketika terjadi tabrakan (collision), solusi umumnya adalah menggunakan teknik chaining. Artinya, jika dua atau lebih data di-hash ke indeks yang sama, kita akan membuat sebuah linked list di indeks tersebut untuk menampung data-data tersebut secara berurutan. HashNode digunakan sebagai struktur data dalam chaining, di mana setiap node menyimpan data mahasiswa dan pointer ke node berikutnya. Kelas HashTable adalah inti dari struktur data hash table. Dalam implementasi ini, ukuran hash table ditetapkan sebagai konstanta TABLE_SIZE. Ketika kita ingin memasukkan atau mencari data, kita menghitung hash value dari NIM mahasiswa menggunakan fungsi hashFunc. Ini memungkinkan kita untuk menentukan indeks di mana data akan disimpan atau dicari. Fungsi insert digunakan untuk menambahkan data mahasiswa ke hash table. Jika terjadi tabrakan, data akan dimasukkan ke dalam linked list terkait. Fungsi remove digunakan untuk menghapus data mahasiswa berdasarkan NIM. Kita mencari data mahasiswa yang sesuai dengan NIM, dan jika ditemukan, data tersebut dihapus dari linked list. Fungsi searchByNIM digunakan untuk mencari data mahasiswa berdasarkan NIM. Kita mencari data mahasiswa dengan NIM yang sesuai, dan jika ditemukan, kita mengembalikan data tersebut. Fungsi searchByNilai digunakan untuk mencari data mahasiswa berdasarkan rentang nilai. Kita iterasi melalui semua data dalam hash table, dan jika nilai mahasiswa berada dalam rentang yang diinginkan, kita menambahkan data tersebut ke dalam hasil pencarian. Di dalam main, program menampilkan menu pilihan kepada pengguna. Pengguna dapat memilih operasi yang ingin dilakukan, seperti menambah data mahasiswa, menghapus data mahasiswa, mencari data berdasarkan NIM, mencari data berdasarkan rentang nilai, atau keluar dari program. Setiap operasi akan menampilkan hasilnya sesuai dengan yang diminta oleh pengguna.


## Kesimpulan
<p align="justify">Hash table adalah struktur data yang digunakan untuk menyimpan data dalam bentuk pasangan kunci-nilai, di mana setiap elemen memiliki kunci unik. Ini memungkinkan akses cepat ke data dengan menggunakan fungsi hash untuk menghasilkan indeks unik untuk setiap kunci. Pada hash table juga mungkin terjadinya tabrakan. Tabrakan terjadi ketika dua kunci menghasilkan indeks yang sama dalam hash table. Untuk menangani tabrakan, teknik chaining sering digunakan, di mana data dengan indeks yang sama disimpan dalam bentuk linked list di indeks tersebut. Hash table mendukung operasi dasar seperti penambahan, penghapusan, dan pencarian data. Dengan menggunakan fungsi hash yang efisien, operasi-operasi ini dapat dilakukan dalam waktu konstan, membuat hash table sangat efisien untuk aplikasi yang membutuhkan akses cepat ke data. Hash table digunakan dalam berbagai aplikasi, termasuk basis data, implementasi kamus, caching, dan pencarian data dalam berbagai bahasa pemrograman. Namaun hash table juga memiliki beberapa kekurangann, salah satu keterbatasan hash table adalah penggunaan memori yang dapat menjadi signifikan tergantung pada faktor pengisian tabel (load factor). Selain itu, pemilihan fungsi hash yang tidak efisien dapat mengurangi kinerja hash table secara keseluruhan.

## Referensi

[1] R. Gupta, V. Singh, 2022, "Hash Table: Data Structure to Make Search Fast," in International Journal of Computer Applications, vol. 108, no. 11, pp. 19-22, 2015. DOI: 10.5120/18994-4071.

[2] S. Sugiyanti, A. S. Budi, "Implementasi Tabel Hash untuk Pencarian Data pada Sistem Informasi," J. Informatika, vol. 1, no. 2, pp. 130-139, 2023.

[3] A. Firdaus, M. H. Maulana, R. Amrullah, "Analisis Pemanfaatan Hash Table dalam Optimasi Pencarian Data," J. Teknol. Inf. dan Ilmu Komput., vol. 7, no. 1, pp. 55-62, 2020.






