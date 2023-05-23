#include <iostream>
using namespace std;

int pejumblahan(int a, int b){
    if(b==0){
    return a;

    }else{
        return 1+pejumblahan(a,b-1);
    }
}

int main(){
    cout<<pejumblahan(5,8);
}
