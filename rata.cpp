#include <iostream>

using namespace std;

double hitungRata(int arr[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    double rata = total / n;

    return rata;
}

int main() {
    int n;

    cout << "Fungsi untuk menghitung jumblah nilai total dari sebuah array" << std::endl;
    cout<< std::endl;


    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    double rata = hitungRata(arr, n);

    cout << "Rata-rata dari array adalah: " << rata << endl;

    return 0;
}
