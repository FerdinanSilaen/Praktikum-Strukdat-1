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
