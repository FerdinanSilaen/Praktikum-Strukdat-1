#include <iostream>
using namespace std;


int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;
     
    cout << "masukkan bilangan: ";
    cin >> bilangan;
    if (bilangan < 0) {
        cout << "masukkan bilangan: " << endl;
    } else {
        cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    }

    return 0;
}
