#include <iostream>

using namespace std;

int main() {
    int n209;
    cout << "Masukkan jumlah data: ";
    cin >> n209;

    int data209[n209];
    cout << "Masukkan " << n209 << " bilangan: ";
    for (int i209 = 0; i209 < n209; i209++) {
        cin >> data209[i209];
    }

    cout << "\nData: ";
    for (int i209 = 0; i209 < n209; i209++) {
        cout << data209[i209] << " ";
    }

    cout << "\n\nBilangan genap: ";
    for (int i209 = 0; i209 < n209; i209++) {
        if (data209[i209] % 2 == 0) {
            cout << data209[i209] << " ";
        }
    }

    cout << "\n\nBilangan ganjil: ";
    for (int i209 = 0; i209 < n209; i209++) {
        if (data209[i209] % 2 != 0) {
            cout << data209[i209] << " ";
        }
    }

    return 0;
}
