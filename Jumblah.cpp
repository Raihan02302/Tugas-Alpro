#include <iostream>

using namespace std;

int main() {
    int bil1, bil2, hasil;

    cout << "Fungsi program tambah 2 Bilangan " << std::endl;
    cout<< std::endl;

    cout << "Masukkan bilangan pertama 1: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua 2: ";
    cin >> bil2;

    hasil = bil1 + bil2;

    cout << "Hasil penjumlahan " << bil1 << " dan " << bil2 << " adalah " << hasil << endl;

    return 0;
}
