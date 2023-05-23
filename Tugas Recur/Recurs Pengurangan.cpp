#include <iostream>
using namespace std;

int pengurangan(int a, int b){
    if(b == 0){
        return a;
    }else{
        return pengurangan(a, b - 1) - 1;
    }
}

int main(){
    cout << pengurangan(8, 5);
    return 0;
}
