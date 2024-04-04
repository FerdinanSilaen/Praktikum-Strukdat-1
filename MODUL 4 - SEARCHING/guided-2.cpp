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
            if (::data[j] < ::data[min]) { // Menggunakan ::data
                min = j;
            }
        }
        temp = ::data[i]; // Menggunakan ::data
        ::data[i] = ::data[min]; // Menggunakan ::data
        ::data[min] = temp; // Menggunakan ::data
    }
}

void binarysearch() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (::data[tengah] == cari) { // Menggunakan ::data
            b_flag = 1;
            break;
        } else if (::data[tengah] < cari) // Menggunakan ::data
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
        cout << setw(3) << ::data[x]; // Menggunakan ::data

    cout << endl;
    binarysearch();
    cin.get(); // Tunggu input dari pengguna sebelum keluar
    return EXIT_SUCCESS; 
}