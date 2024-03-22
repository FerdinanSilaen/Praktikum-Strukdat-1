#include <iostream>

using namespace std;

int main(){
  int a209, b209, c209;
    cout << "Masukkan jumlah elemen: ";
    cin >> a209 >> b209 >> c209;

    int arr209[a209][b209][c209];


    for (int x209= 0; x209<a209; x209++){
        for ( int y209=0; y209<b209; y209++){
            for (int z209=0; z209<c209; z209++){
                cout << "Input Array[" << x209 << "][" << y209 << "][" << z209 << "] = ";
                cin >> arr209[x209][y209][z209];
            }
        }
        cout << endl;
    }

    for(int x209=0; x209<a209; x209++){
        for (int y209 = 0; y209 < b209; y209++){
            for (int z209 = 0; z209 < c209; z209++){
                cout << "Data Array[" << x209 << "][" << y209 << "][" << z209 << "] = " << arr209[x209][y209][z209] << endl;
            }
        }
    }

    cout << endl;


    for(int x209 = 0; x209 < a209; x209++){
        for ( int y209 = 0; y209 < b209; y209++){
            for (int z209 = 0; z209 < c209; z209++){
                cout << arr209[x209][y209][z209] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}