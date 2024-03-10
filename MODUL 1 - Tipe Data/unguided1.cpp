#include <iostream>
using namespace std;

// Menentukan apakah sebuah bilangan bulat positif, negatif, atau nol
void cekBilangan(int bil) {
    if (bil > 0)
        cout << bil << " adalah bilangan positif." << endl;
    else if (bil < 0)
        cout << bil << " adalah bilangan negatif." << endl;
    else
        cout << bil << " adalah nol." << endl;
}

// Menghitung rata-rata 
float hitungRataRata(float a, float b) {
    return (a + b) / 2.0;
}

int main() {
    int bilangan;
    float num1, num2;

    // Input bilangan bulat
    cout << "Masukkan angka ";
    cin >> bilangan;
    cekBilangan(bilangan);

    // Input dua bilangan pecahan
    cout << "Masukkan angka: ";
    cin >> num1 >> num2;

    // Menghitung rata-rata 
    float average = hitungRataRata(num1, num2);
    cout << "Rata-rata dari " << num1 << " dan " << num2 << " adalah: " << average << endl;

    return 0;
}
