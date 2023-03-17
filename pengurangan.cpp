#include <iostream>

using namespace std;

int main() {
    int bil1, bil2, hasil;

    cout << " Fungsi program kurang 2 Bilangan " << std::endl;
    cout<< std::endl;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    hasil = bil1 - bil2;

    cout << "Hasil pengurangan " << bil1 << " dari " << bil2 << " adalah " << hasil << endl;

    return 0;
}

