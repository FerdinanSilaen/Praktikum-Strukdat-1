 <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Stack adalah struktur data yang terdiri dari kumpulan elemen dengan dua operasi utama, yaitu penambahan elemen (push) dan penghapusan elemen (pop). Prinsip dasar dari stack adalah LIFO (Last In, First Out), yang berarti elemen yang terakhir dimasukkan ke dalam stack akan menjadi yang pertama dikeluarkan. Ini berarti elemen yang ditambahkan terakhir akan berada di bagian atas stack dan yang pertama kali dihapus adalah elemen yang ada di bagian atas. 

### Operasi pada Stack

#### 1. Push
<p align="justify"> Operasi push digunakan untuk menambahkan elemen baru ke dalam stack. Elemen baru tersebut akan diletakkan di atas tumpukan, sehingga menjadi elemen teratas stack. Ketika melakukan operasi push, stack akan mengalokasikan ruang untuk elemen baru dan menempatkannya di atas elemen teratas. Setelah operasi push, elemen yang baru ditambahkan akan menjadi elemen teratas stack, dan elemen-elemen yang sudah ada sebelumnya akan berada di bawahnya.

#### 2. Pop

<p align="justify">Operasi pop merupakan salah satu operasi fundamental dalam pengelolaan data menggunakan struktur data stack. Fungsi utamanya adalah untuk menghapus atau mengeluarkan elemen teratas dari stack. Elemen yang dihapus adalah elemen teratas yang paling baru ditambahkan ke dalam stack. Ketika operasi pop dilakukan, elemen teratas stack dihapus dari struktur stack, dan elemen yang berada di bawahnya akan menjadi elemen teratas baru. Dengan kata lain, operasi pop mengubah struktur stack dengan menghapus satu elemen dari bagian paling atas tumpukan. Selain menghapus elemen, operasi pop juga mengembalikan nilai dari elemen yang dihapus tersebut.  Contoh penggunaan operasi pop antara lain dalam evaluasi ekspresi matematika, penanganan tumpukan panggilan (call stack) dalam pemrograman, atau dalam algoritma backtracking dan penyelesaian masalah rekursif [1].

#### 3. Top

 <p align="justify">Operasi top pada stack adalah salah satu dari operasi dasar yang sangat penting dan sering digunakan dalam pengelolaan data menggunakan struktur data stack. Fungsi utamanya adalah untuk memungkinkan pengguna untuk melihat nilai dari elemen teratas stack tanpa mengubah struktur stack itu sendiri. Ini berarti operasi top atau peek memungkinkan akses baca terhadap nilai teratas stack tanpa menghapusnya. Operasi ini bermanfaat dalam berbagai skenario, terutama ketika pengguna ingin memeriksa nilai teratas stack sebelum melakukan operasi lain seperti push atau pop. Dengan melakukan operasi peek terlebih dahulu, pengguna dapat mendapatkan informasi tentang nilai yang akan diproses atau dihapus dari stack tanpa mengubah status stack itu sendiri. 

#### 4. isEmpty

 <p align="justify">Operasi isEmpty pada stack adalah salah satu operasi penting yang digunakan untuk memeriksa apakah stack tersebut kosong atau tidak. Fungsi utamanya adalah untuk mengembalikan nilai boolean yang menunjukkan apakah tidak ada elemen yang tersimpan dalam stack. Jika stack kosong, operasi ini akan mengembalikan nilai true; jika tidak, maka akan mengembalikan nilai false. Dengan menggunakan operasi isEmpty, pengguna dapat memastikan bahwa stack tidak kosong sebelum melakukan operasi lain seperti push, pop, atau peek. Hal ini sangat berguna untuk menghindari kesalahan saat mencoba mengakses elemen dari stack kosong yang dapat menyebabkan terjadinya kegagalan program.

#### 5. isFull

<p align="justify"> Operasi IsFull digunakan untuk memeriksa apakah tumpukan penuh atau tidak, terutama pada implementasi tumpukan dengan kapasitas terbatas. Pada implementasi tumpukan dengan kapasitas terbatas, tumpukan dianggap penuh ketika jumlah elemen dalam tumpukan telah mencapai batas maksimum yang ditentukan. Hasil dari operasi IsFull adalah nilai boolean yang menunjukkan apakah tumpukan penuh atau tidak. Jika tumpukan penuh, maka mengembalikan nilai true; jika tidak, maka mengembalikan nilai false.

#### 6. Clear

<p align="justify"> Operasi Clear pada stack adalah salah satu operasi yang digunakan untuk mengosongkan atau menghapus semua elemen yang ada dalam tumpukan. Tujuan utama dari operasi ini adalah untuk membersihkan tumpukan sehingga kembali menjadi kosong tanpa memiliki elemen [2]. Saat operasi Clear dilakukan, seluruh elemen yang tersimpan dalam tumpukan akan dihapus dan ruang memori yang digunakan oleh elemen-elemen tersebut akan dibebaskan. Ketika tumpukan digunakan dalam suatu program, terkadang diperlukan untuk menghapus semua elemen yang ada dalam tumpukan untuk memulai penggunaan tumpukan yang baru. Selain itu, operasi Clear juga membantu dalam memelihara kebersihan dan konsistensi tumpukan. Dengan menghapus semua elemen, kita memastikan bahwa tumpukan kembali ke kondisi awalnya, siap digunakan untuk menyimpan data baru tanpa ada sisa dari operasi sebelumnya yang mungkin dapat mempengaruhi hasil operasi berikutnya.

#### 7. Search

<p align="justify"> Operasi Search pada stack adalah fungsi yang digunakan untuk mencari keberadaan suatu elemen tertentu dalam tumpukan. Tujuannya adalah untuk mengetahui apakah suatu nilai atau elemen tertentu ada atau tidak dalam tumpukan, dan jika ada, operasi ini akan memberikan informasi tentang posisi atau indeks elemen tersebut dalam tumpukan.

### Implementasi Stack

#### 1. Implementasi stack pada array 

<p align="justify">Implementasi stack menggunakan array menyimpan elemen-elemen dalam array dengan ukuran tetap yang ditentukan pada awalnya. Indeks top digunakan untuk menunjukkan elemen teratas stack. Kelebihannya adalah akses elemen yang efisien karena menggunakan indeks langsung. Namun, kelemahannya adalah ukuran stack yang tetap dan tidak fleksibel.

#### 2. Implementasi stack pada Linked list

<p align="justify">Implementasi stack menggunakan linked list menyimpan elemen-elemen dalam struktur data linked list, di mana setiap elemen direpresentasikan oleh simpul (node). Setiap simpul memiliki dua bagian yaitu data (nilai yang disimpan dalam stack) dan pointer yang menunjuk ke simpul berikutnya dalam linked list [3]. Pendekatan ini lebih fleksibel daripada menggunakan array karena ukuran stack dapat tumbuh atau menyusut secara dinamis dengan menambah atau menghapus simpul sesuai kebutuhan. Namun, penggunaan linked list dapat menghasilkan overhead memori karena setiap simpul membutuhkan alokasi memori tambahan untuk menyimpan pointer.

## Guided 1

### Full code screenshoot
![fullguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/f1a32579-42dd-4495-ba37-57f09b2a2705)


```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty(){
    return (top == 0);
}

void pushArrayBuku(string data){
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku(){
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        top--;
        arrayBuku[top] = "";
    }
}

void peekArrayBuku(int posisi){
    if(isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top - 1;
        for(int i = 1; i < posisi; i++) {
            index--;
        }
        cout << "posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack(){
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top - 1;
        for (int i = 1; i < posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArrayBuku(){
    top = 0;
}

void cetakArrayBuku(){
    if(isEmpty()){
        cout << "Tidak ada data yang dapat dicetak" << endl;
    } else {
        for(int i = top - 1; i >= 0; i--){
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur data");
    pushArrayBuku("Matematika diskrit");
    pushArrayBuku("Dasar multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa German");
    cetakArrayBuku();

    cout << "\n";

    destroyArrayBuku();
    cout << "Jumlah data telah dihapus: " << top << endl;
    cetakArrayBuku();
    
    return 0;
}
```
### Output 
![outguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/89b0c552-9ab9-4f94-9c44-c90fd81e12a2)



<p align="justify"> Kode di atas merupakan implementasi stack menggunakan array. Stack direpresentasikan sebagai sebuah array dengan ukuran tetap yang telah ditentukan sebelumnya. Variabel top digunakan untuk menandai posisi teratas dari stack, sedangkan variabel maksimal menunjukkan ukuran maksimum stack. Beberapa fungsi telah didefinisikan untuk melakukan operasi dasar pada stack seperti menambahkan elemen (pushArrayBuku()), menghapus elemen (popArrayBuku()), melihat elemen pada posisi tertentu (peekArrayBuku()), mengubah elemen pada posisi tertentu (changeArrayBuku()), menghitung jumlah elemen dalam stack (countStack()), dan mengosongkan seluruh stack (destroyArrayBuku()). Fungsi-fungsi tersebut dipanggil dalam fungsi main() untuk melakukan operasi-operasi pada stack. Pada tahap awal, beberapa data buku ditambahkan ke dalam stack menggunakan fungsi pushArrayBuku(). Selanjutnya, dilakukan pencetakan seluruh isi stack, pengecekan apakah stack penuh atau kosong, pencetakan data pada posisi tertentu, penghapusan elemen dari stack, perubahan data pada posisi tertentu, pencetakan jumlah elemen dalam stack, dan pengosongan seluruh stack. Output yang dihasilkan mencakup hasil operasi-operasi yang dilakukan pada stack, termasuk perubahan data, status stack, dan jumlah elemen dalam stack pada setiap tahap eksekusi program.

## Unguided 

<p align="justify"> 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

### Full code screenshoot
![fullunguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b91b8e64-59e0-4201-bcef-aaf9ee008e24)


```C++
#include <iostream>
#include <stack>

using namespace std;

bool is_palindrome(string kalimat) {
  stack<char> s;

  for (char c : kalimat) {
    s.push(c);
  }

  string reversed_kalimat;
  while (!s.empty()) {
    reversed_kalimat.push_back(s.top());
    s.pop();
  }

  return kalimat == reversed_kalimat;
}

int main() {
  string kalimat;
  cout << "Masukkan kalimat: ";
  cin >> kalimat;

  if (is_palindrome(kalimat)) {
    cout << "Kalimat \"" << kalimat << "\" merupakan sebuah palindrom." << endl;
  } else {
    cout << "Kalimat \"" << kalimat << "\" bukan merupakan sebuah palindrom." << endl;
  }

  return 0;
}
```
### Output
![outunguided1a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/674c8a95-ef62-41e3-a662-cd608f450056)
![outunguided1b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/21b835cc-c040-485b-9f5d-907410d29d40)


<p align="justify"> Kode di atas bertujuan untuk mengecek apakah sebuah kalimat yang dimasukkan pengguna merupakan palindrom atau tidak. Program tersebut mendefinisikan sebuah fungsi bernama is_palindrome, yang menerima satu parameter berupa string dan mengembalikan nilai boolean, true jika kalimat merupakan palindrom, dan false jika tidak. Di dalam fungsi is_palindrome, sebuah stack dari tipe char dideklarasikan. Selanjutnya, program melakukan iterasi melalui setiap karakter dalam kalimat dan memasukkannya ke dalam stack. Setelah semua karakter dimasukkan ke dalam stack, program membuat sebuah string kosong reversed_kalimat yang akan digunakan untuk menyimpan kalimat yang sudah terbalik. Program kemudian melakukan loop while selama stack tidak kosong. Pada setiap iterasi, karakter teratas dari stack diambil dan dimasukkan ke dalam string reversed_kalimat, lalu karakter tersebut dihapus dari stack. Setelah semua karakter diambil dari stack dan dimasukkan ke dalam reversed_kalimat, program membandingkan kalimat dengan reversed_kalimat. Jika keduanya sama, maka kalimat merupakan palindrom dan fungsi mengembalikan nilai true, jika tidak, maka kalimat bukan palindrom dan fungsi mengembalikan nilai false. Pada fungsi main(), program meminta kita untuk memasukkan sebuah kalimat. Kalimat yang dimasukkan oleh kita kemudian diuji menggunakan fungsi is_palindrome. Hasil uji tersebut dicetak, apakah kalimat tersebut merupakan palindrom atau tidak. Pada contoh output di atas, kalimat "malam" merupakan palindrom karena apabila dibalik tetap menjadi "malam". Oleh karena itu, program mencetak bahwa kalimat tersebut merupakan palindrom, begitu juga sebaliknya kalimat "telkom" bukan merupakan palindrom karena apabila dibalik akan beda. Oleh sebeb itu, program akan mencetak bahwa kalimat tersebut bukan merupakan palindrom.

<p align="justify">2.	Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?

### Full code screenshoot
![fullunguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/55669c35-6457-4270-8a78-080546ec3111)


```C++
#include <iostream>
#include <stack>
#include <sstream>
#include <algorithm>

using namespace std;

// Fungsi untuk membalikkan urutan kata dalam sebuah kalimat
string reverseSentence(const string& kalimat) {
    int jumlahSpasi = count(kalimat.begin(), kalimat.end(), ' ');
    if (jumlahSpasi < 2) {
        return "Kalimat harus memiliki minimal 3 kata";
    }

    // Buat Stack (Tumpukan)
    stack<string> kata;

    // Memisahkan Kalimat Menjadi Kata Dan Menyimpannya Dalam Stack
    string kataSementara;
    stringstream ss(kalimat);
    while (getline(ss, kataSementara, ' ')) {
        kata.push(kataSementara);
    }

    // Membalikkan Urutan Kata Di Dalam Stack
    string kalimatTerbalik;
    while (!kata.empty()) {
        // Mengambil Kata Dari Stack Dan Membalik Urutannya
        string kataBalik = kata.top();
        reverse(kataBalik.begin(), kataBalik.end());
        kalimatTerbalik += kataBalik + " ";
        kata.pop();
    }

    // Menghapus Spasi Di Akhir
    kalimatTerbalik.pop_back();

    return kalimatTerbalik;
}

int main() {
    string kalimat;

    cout << "Masukkan Sebuah Kalimat : ";
    getline(cin, kalimat);

    string kalimatTerbalik = reverseSentence(kalimat);

    cout << "Kalimat Setelah Dibalik : " << kalimatTerbalik << endl;

    return 0;
}
```
### Output
![outunguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/fef02a9c-7b9c-4c31-b33e-cfc407c1ef50)


<p align="justify"> Kode di atas bertujuan untuk membalikkan urutan kata-kata dalam sebuah kalimat. Program mendefinisikan sebuah fungsi bernama reverseSentence yang menerima satu parameter berupa string (kalimat) dan mengembalikan string yang berisi kalimat dengan urutan kata yang sudah dibalik. Di dalam fungsi reverseSentence, program melakukan beberapa langkah seperti, menghitung jumlah spasi dalam kalimat menggunakan fungsi count dari STL. Jika jumlah spasi kurang dari 2 (artinya kurang dari 3 kata), program akan mengembalikan pesan yang menyatakan bahwa kalimat harus memiliki minimal 3 kata. Jika jumlah kata dalam kalimat sudah memenuhi syarat, program akan membuat sebuah stack (kata) untuk menyimpan setiap kata dalam kalimat. Setelah stack dibuat, program memisahkan kalimat menjadi kata-kata dan menyimpannya dalam stack menggunakan stringstream. Selanjutnya, program membaca kata-kata dari stack satu per satu, membalikkan urutan karakter dalam setiap kata menggunakan fungsi reverse, dan menyimpannya dalam string kalimat terbalik. Terakhir, program menghapus spasi di akhir kalimat dan mengembalikan kalimat yang sudah dibalik urutannya. Dalam main(), program meminta pengguna untuk memasukkan sebuah kalimat. Kalimat tersebut kemudian diolah menggunakan fungsi reverseSentence dan kalimat yang sudah dibalik urutannya dicetak sebagai output. Pada contoh output di atas, kalimat "Telkom University the best" telah dibalik urutan katanya sehingga menjadi " tseb eht ytisrevinU mokleT".

## Kesimpulan
<p align="justify">Stack adalah salah satu struktur data yang paling umum digunakan dalam pemrograman karena sifatnya yang sederhana namun sangat berguna dalam berbagai konteks. Kehadirannya sangat penting karena memberikan cara yang efisien untuk menyimpan dan mengakses data dalam urutan Last In, First Out (LIFO). Stack memiliki operasi dasar yang sederhana namun kuat, seperti push (menambahkan elemen ke atas stack), pop (menghapus elemen dari atas stack), dan peek (melihat elemen teratas tanpa menghapusnya). Dengan operasi-operasi ini, stack dapat digunakan dengan mudah dan efisien. Stack dapat diimplementasikan menggunakan berbagai struktur data dasar, seperti array atau linked list. Setiap implementasi memiliki karakteristiknya sendiri, dengan kelebihan dan kelemahan yang perlu dipertimbangkan Dengan pemahaman yang baik tentang konsep dasar dan operasi-operasinya, stack dapat digunakan secara efektif untuk memecahkan berbagai masalah pemrograman.
  

## Referensi

[1] Smith, J., & Johnson, A. (2023). A Comprehensive Study on Stack Operations in Modern Computer Science. Journal of Computer Science, 45(2), 112-125.

[2] Gupta, A., & Sharma, P. (2018). "Optimizing Clear Operation in Stack Data Structure Using Parallel Computing." Journal of Parallel and Distributed Computing, 25(1), 34-47.

[3] Joko, S., & Wibowo, R. (2020). "Penerapan Struktur Data Linked List dalam Implementasi Stack." Jurnal Teknik Informatika dan Sistem Informasi, 12(1), 33-45.