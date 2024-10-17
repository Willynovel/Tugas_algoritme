#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah bilangan genap
bool isGenap(int n) {
    return n % 2 == 0;
}

// Fungsi untuk menampilkan bilangan genap
void tampilkanGenap(int batas) {
    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; ++i) {
        if (isGenap(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Fungsi untuk menampilkan bilangan ganjil
void tampilkanGanjil(int batas) {
    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; ++i) {
        if (!isGenap(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int batas;

    // Input batas bilangan
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    // Menampilkan bilangan genap dan ganjil
    tampilkanGenap(batas);
    tampilkanGanjil(batas);

    return 0;
}
