#include <iostream>

using namespace std;

int hitungJumlah(int arr[], int n) {
    int total = 0.0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}

int main() {
    int n;

    cout << "Fungsi untuk menghitung rata-rata dari sebuah array" << std::endl;
    cout<< std::endl;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    int total = hitungJumlah(arr, n);

    cout << "Total nilai dari array adalah: " << total << endl;

    return 0;
}
