#include <iostream>
using namespace std;


struct Node{
    
    int data;
    Node *next;
};
    Node *head;
    Node *tail;

void init(){
    head = NULL;
    tail = NULL;
}

bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
// Tambah Depan
void insertDepan(int nilai){
    
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}

// Hitung list
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}