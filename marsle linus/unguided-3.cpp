#include <iostream>

using namespace std;

int main() {
    int n209;
    cout << "Masukkan jumlah elemen: ";
    cin >> n209;

    int data209[n209];

    cout << "Masukkan data: ";
    for (int i209 = 0; i209 < n209; i209++) {
        cin >> data209[i209];
    }

    int pilihan209;
    do {
        cout << "\nPilih operasi: " << endl;
        cout << "1. Cari nilai maksimum" << endl;
        cout << "2. Cari nilai minimum" << endl;
        cout << "3. Cari rata-rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan209;

        switch (pilihan209) {
            case 1: {
                int max209 = data209[0];
                for (int i209 = 1; i209 < n209; i209++) {
                    if (data209[i209] > max209) {
                        max209 = data209[i209];
                    }
                }
                cout << "Nilai maksimum: " << max209 << endl;
                break;
            }
            case 2: {
                int min209 = data209[0];
                for (int i209 = 1; i209 < n209; i209++) {
                    if (data209[i209] < min209) {
                        min209 = data209[i209];
                    }
              }
                cout << "Nilai minimum: " << min209 << endl;
                break;
            }
            case 3: {
                int jumlah209 = 0;
                for (int i209 = 0; i209 < n209; i209++) {
                    jumlah209 += data209[i209];
                }
                double avg209 = (jumlah209) / n209;
                cout << "Rata-rata: " << avg209 << endl;
                break;
            }
            case 4:
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan209 != 4);

    return 0;
}