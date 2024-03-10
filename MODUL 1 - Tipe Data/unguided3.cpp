#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map untuk menyimpan data siswa (nama sebagai kunci, nilai sebagai umur)
    map<string, int> dataSiswa;

    // Menambahkan data siswa ke dalam map
    dataSiswa["gustap"] = 27;
    dataSiswa["joel"] = 15;
    dataSiswa["munib"] = 18;
    dataSiswa["ahmad"] = 24;

    // Menampilkan umur siswa menggunakan map
    cout << "Umur gustap: " << dataSiswa["gustap"] << " tahun" << endl;
    cout << "Umur joel: " << dataSiswa["joel"] << " tahun" << endl;
    cout << "Umur munib: " << dataSiswa["munib"] << " tahun" << endl;
    cout << "Umur ahmad: " << dataSiswa["ahmad"] << " tahun" << endl;

    return 0;
}
