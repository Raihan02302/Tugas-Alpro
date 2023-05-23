#include <iostream>
using namespace std;

int pejumblahan(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return 1 + pejumblahan(a, b - 1);
    }
}

int main() {
    int num1, num2;

    cout << "Masukkan angka pertama: ";
    cin >> num1;

    cout << "Masukkan angka kedua: ";
    cin >> num2;

    int result = pejumblahan(num1, num2);
    cout << "Hasil pejumblahan: " << result << endl;

    return 0;
}

