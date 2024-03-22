#include <iostream>

using namespace std;

int main(){
  int rows, cols, depth;
    cout << "Masukkan jumlah derajat, baris, dan kolom: ";
    cin >> rows >> cols >> depth;

    int arr[rows][cols][depth];

    // Memasukkan elemen-elemen array
    for (int i = 0; i < rows; i++){
        cout << "Masukkan elemen-elemen derajat ke-" << i+1 << ":" << endl;
        for ( int j = 0; j < cols; j++){
            for (int k = 0; k < depth; k++){
                cout << "Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Mencetak kembali nilai-nilai yang dimasukkan
    cout << "Elemen-elemen array adalah:" << endl;
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            for (int k = 0; k < depth; k++){
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
        cout << endl;
    }

     for(int i = 0; i < rows; i++){
        for ( int j = 0; j < cols; j++){
            for (int k = 0; k < depth; k++){
                cout << arr[i][j][k] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}