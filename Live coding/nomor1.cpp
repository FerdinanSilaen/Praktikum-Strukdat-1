#include <iostream>
using namespace std;

int main (){
    int n = 6;
    int data [n] = {1, 2, 3, 4, 5, 5};
    int cari = 5;
    bool ketemu = false;
    int i;
    
    for (i = 0; i < n; i++){
        if (data [i] == cari){
            ketemu = true;
            break;
        }
    }

     cout << "\t Sequential Search\n" << endl;
    cout << "Data = 1 2 3 4 5 5" << endl;

    if (ketemu) {
        cout << "Angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak ditemukan pada data" << endl;
    }

    return 0;
}