#include <iostream>
using namespace std;

void bubble_sorting(int arr[], int length){
    bool not_sorting = true;
    int j = 0;
    int tmp;

    while (not_sorting){
        not_sorting = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorting = true;
            }
        }
    }
}

void print_array(int a[], int length) {

    for(int i = 0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    int a[] = {5, 1, 4, 2, 8};

    cout << "Sebelum sorting " << endl;
    print_array(a, length);

    bubble_sorting(a, length);

    cout << "Setelah sorting" << endl;
    print_array(a, length);
}
