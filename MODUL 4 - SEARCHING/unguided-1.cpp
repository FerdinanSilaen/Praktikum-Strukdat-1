#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

// Fungsi untuk mencari semua kemunculan sebuah huruf menggunakan binary search
std::vector<int> binarySearchAll(const std::string& str, char target) {
    std::vector<int> indices;

    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (std::tolower(str[mid]) == std::tolower(target)) {
            indices.push_back(mid);
            int left_temp = mid - 1;
            int right_temp = mid + 1;

            // Cari indeks lainnya di sebelah kiri
            while (left_temp >= left && std::tolower(str[left_temp]) == std::tolower(target)) {
                indices.push_back(left_temp);
                left_temp--;
            }

            // Cari indeks lainnya di sebelah kanan
            while (right_temp <= right && std::tolower(str[right_temp]) == std::tolower(target)) {
                indices.push_back(right_temp);
                right_temp++;
            }

            return indices; // Kembalikan semua indeks huruf yang ditemukan
        } else if (std::tolower(str[mid]) < std::tolower(target)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return indices; // Huruf tidak ditemukan
}

int main() {
    std::string kalimat;
    char huruf;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Menghapus spasi dari kalimat
    kalimat.erase(std::remove_if(kalimat.begin(), kalimat.end(), ::isspace), kalimat.end());

    std::sort(kalimat.begin(), kalimat.end()); // Urutkan huruf-huruf dalam kalimat

    std::cout << "Huruf-huruf dalam kalimat setelah diurutkan: ";
    for (char ch : kalimat) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    std::cout << "Masukkan huruf yang ingin dicari: ";
    std::cin >> huruf;

    // Cari semua kemunculan huruf menggunakan binary search dan dapatkan indeksnya
    std::vector<int> indeks = binarySearchAll(kalimat, huruf);

    if (!indeks.empty()) {
        // Urutkan indeks dari terkecil ke terbesar
        std::sort(indeks.begin(), indeks.end());

        std::cout << "Huruf '" << huruf << "' ditemukan pada indeks: ";
        for (int i = 0; i < indeks.size(); ++i) {
            std::cout << indeks[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << std::endl;
    }

    return 0;
}
