#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node* next;
};

Node* head = NULL;

// Fungsi Untuk Menampilkan Menu
void displayMenu() {
    cout << "===========================================";
    cout << "\n  PROGRAM SINGLE LINKED LIST NON-CIRCULAR  \n";
    cout << "===========================================\n";
    cout << "1. Tambah Data di Depan\n";
    cout << "2. Tambah Data di Belakang\n";
    cout << "3. Tambah Data di Tengah\n";
    cout << "4. Ubah Data di Depan\n";
    cout << "5. Ubah Data di Belakang\n";
    cout << "6. Ubah Data di Tengah\n";
    cout << "7. Hapus Data di Depan\n";
    cout << "8. Hapus Data di Belakang\n";
    cout << "9. Hapus Data di Tengah\n";
    cout << "10. Hapus Semua Data\n";
    cout << "11. Tampilkan Data Mahasiswa\n";
    cout << "0. Keluar\n";
    cout << "Pilih Operasi : ";
}

// Fungsi Untuk Menambahkan Data di Depan
void insertAtFront() {
    string nama, nim;
    cout << "\n>>>Tambah Data di Depan<<<\n";
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NIM  : ";
    cin >> nim;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = head;
    head = newNode;

    cout << "Data Telah Ditambahkan di Depan.\n";
}

// Fungsi Untuk Menambahkan Data di Belakang
void insertAtBack() {
    string nama, nim;
    cout << "\n>>>Tambah Data di Belakang<<<\n";
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NIM  : ";
    cin >> nim;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Data Telah Ditambahkan di Belakang.\n";
}

// Fungsi Untuk Menambahkan Data di Tengah
void insertAtMiddle() {
    string nama, nim;
    int pos;
    cout << "\n>>>Tambah Data di Tengah<<<\n";
    cout << "Masukkan Nama   : ";
    cin >> nama;
    cout << "Masukkan NIM    : ";
    cin >> nim;
    cout << "Masukkan Posisi : ";
    cin >> pos;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while (curr != NULL && count < pos) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr != NULL) {
            newNode->next = curr;
            if (prev != NULL) {
                prev->next = newNode;
            } else {
                head = newNode;
            }
            cout << "Data Telah Ditambahkan di Tengah.\n";
        } else {
            cout << "Posisi Tidak Valid\n";
        }
    }
}

// Fungsi Untuk Mengubah Data di Depan
void updateFront() {
    string nama, nim;
    cout << "\n>>>Ubah Data di Depan<<<\n";
    cout << "Masukkan Nama Baru : ";
    cin >> nama;
    cout << "Masukkan NIM Baru  : ";
    cin >> nim;

    if (head != NULL) {
        head->nama = nama;
        head->nim = nim;
        cout << "Data Telah Diubah.\n";
    } else {
        cout << "Data Kosong\n";
    }
}

// Fungsi Untuk Mengubah Data di Belakang
void updateBack() {
    string nama, nim;
    cout << "\n>>>Ubah Data di Belakang<<<\n";
    cout << "Masukkan Nama Baru : ";
    cin >> nama;
    cout << "Masukkan NIM Baru  : ";
    cin >> nim;

    if (head == NULL) {
        cout << "Data Kosong\n";
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->nama = nama;
        temp->nim = nim;
        cout << "Data Telah Diubah.\n";
    }
}

// Fungsi Untuk Mengubah Data di Tengah
void updateMiddle() {
    string nama, nim;
    int pos;
    cout << "\n>>>Ubah Data di Tengah<<<\n";
    cout << "Masukkan Posisi    : ";
    cin >> pos;
    cout << "Masukkan Nama Baru : ";
    cin >> nama;
    cout << "Masukkan NIM Baru  : ";
    cin >> nim;

    Node* prev = NULL;
    Node* curr = head;
    int count = 1;
    while (curr != NULL && count < pos) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr != NULL) {
        curr->nama = nama;
        curr->nim = nim;
        cout << "Data Telah Diubah.\n";
    } else {
        cout << "Posisi Tidak Valid\n";
    }
}

// Fungsi Untuk Menghapus Data di Depan
void deleteFront() {
    cout << "\n>>>Hapus Data di Depan<<<\n";

    if (head == NULL) {
        cout << "Data Kosong\n";
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Data Telah Dihapus\n";
    }
}

// Fungsi Untuk Menghapus Data di Belakang
void deleteBack() {
    cout << "\n>>>Hapus Data di Belakang<<<\n";

    if (head == NULL) {
        cout << "Data Kosong\n";
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "Data Telah Dihapus\n";
    } else {
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout << "Data Telah Dihapus\n";
    }
}

// Fungsi Untuk Menghapus Data di Tengah
void deleteMiddle() {
    int pos;
    cout << "\n>>>Hapus Data di Tengah<<<\n";
    cout << "Masukkan Posisi : ";
    cin >> pos;
        if (head == NULL) {
        cout << "Data Kosong\n";
    } else if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Data Telah Dihapus\n";
    } else {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while (curr != NULL && count < pos) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr != NULL) {
            if (prev != NULL) {
                prev->next = curr->next;
            } else {
                head = curr->next;
            }
            delete curr;
            cout << "Data Telah Dihapus\n";
        } else {
            cout << "Posisi Tidak Valid\n";
        }
    }
}

// Fungsi Untuk Menghapus Seluruh List
void deleteList() {
    cout << "\n>>>Hapus Semua Data<<<\n";
    Node* temp = head;
    while (temp != NULL) {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
    head = NULL;
    cout << "Semua Data Telah Dihapus\n";
}

// Fungsi Untuk Menampilkan Seluruh Data Mahasiswa
void displayData() {
    cout << "=============================";
    cout << "\n       DATA MAHASISWA\n";
    cout << "=============================\n";
    cout << "    NAMA\t     NIM\n";
    cout << "============\t=============\n";

    Node* temp = head;
    while (temp != NULL) {
        cout << setw(16) << left << temp->nama << setw(16) << left << temp->nim << endl;
        temp = temp->next;
    }

    if (head == NULL) {
        cout << "Data Kosong\n";
    }
}

int main() {
    int pilihan;

    do {
        displayMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                insertAtFront();
                break;
            case 2:
                insertAtBack();
                break;
            case 3:
                insertAtMiddle();
                break;
            case 4:
                updateFront();
                break;
            case 5:
                updateBack();
                break;
            case 6:
                updateMiddle();
                break;
            case 7:
                deleteFront();
                break;
            case 8:
                deleteBack();
                break;
            case 9:
                deleteMiddle();
                break;
            case 10:
                deleteList();
                break;
            case 11:
                displayData();
                break;
            case 0:
                cout << "Anda Telah Keluar Dari Program!\n";
                break;
            default:
                cout << "Pilihan Tidak Valid\n";
        }
    } while (pilihan != 0);

    return 0;
}
