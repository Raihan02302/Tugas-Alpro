#include <iostream>
using namespace std;

int pembagian(int a, int b){
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak dapat dilakukan!" << endl;
        return 0;
    }
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}

int main(){
    cout << pembagian(8, 2) << endl;
    return 0;
}

