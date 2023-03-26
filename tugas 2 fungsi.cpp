#include <iostream>


using namespace std;

int main(){
        std::cout<<"|*----------------------------------------------*| "<< std::endl;
        std::cout<<"|________________ Program Fungsi ________________| "<< std::endl;
        std::cout<<"|                                                | "<< std::endl;
        std::cout<<"|   </> Dibuat Oleh Norenza Muhammad Raihan  </> | "<< std::endl;
        std::cout<<"|                                                | "<< std::endl;
        std::cout<<"|________________ A11.2022.14779 ________________| "<< std::endl;
        std::cout<<"|------------------------------------------------| "<< std::endl;


     //nilai Max
     int x = 50, y = 20;
     std::cout<< std::endl << " Nilai maksimum antara " << x << " dan " << y << " adalah " << max(x, y) << std::endl;
             std::cout<<"       "<< std::endl;
     //nilai Min
     int a = 30, b = 20;
     std::cout << " Nilai minimum antara " << a << " dan " << b << " adalah " << min(a, b) << std::endl;
            std::cout<<"       "<< std::endl;
     //nilai maxarray
     int maxarray(int arr[], int size);
     int arr[] = {123, 220, 380, 424, 500};
     int size = sizeof(arr)/sizeof(arr[0]);
     std::cout << " Nilai maksimum dalam array adalah " <<maxarray(arr, size)<< std::endl;
            std::cout<<"       "<< std::endl;
     //nilai minarray
     int minarray(int ar[], int n);
     int ar[] = {10, 20, 30, 40, 50};
     int n = sizeof(ar)/sizeof(ar[0]);
     std::cout << " Nilai minimum dalam array adalah " << minarray(ar, n) << std::endl;
            std::cout<<"       "<< std::endl;
     //IsEven
     int zulu = 10;
     bool IsEven(int num);
     if(IsEven(zulu)){
        std::cout << zulu << " adalah bilangan genap" << std::endl;
     }
     else {
        std::cout << zulu << " adalah bilangan ganjil" << std::endl;
     }
            std::cout<<"       "<< std::endl;
     //IsOdd
     bool IsOdd(int num);
     int Hotel = 11;
     if(IsOdd(x)) {
       std::cout << Hotel << " adalah bilangan ganjil" << std::endl;
     }
     else {
       std::cout << Hotel << " adalah bilangan genap" << std::endl;
     }
            std::cout<<"       "<< std::endl;
     //IsFactor
     bool IsFactor(int num, int factor);
     int November = 10, Foxtrot = 5;
     if(IsFactor(November, Foxtrot)) {
        std::cout << Foxtrot << " adalah faktor dari " << November << std::endl;
     }
     else {
        std::cout << Foxtrot << " bukan faktor dari " << November << std::endl;
     }
            std::cout<<"       "<< std::endl;
      //Search
      int search(int arecon[], int squad, int target);
      int arecon[] = {10, 20, 30, 40, 50};
      int squad = sizeof(arecon)/sizeof(arecon[0]);
      int target = 30;
      int result = search(arecon, squad, target);
      if(result == -1) {
        std::cout << target << " tidak ditemukan dalam array" << std::endl;
        }
      else {
        std::cout << target << " ditemukan pada indeks ke-" << result << " dalam array" << std::endl;
        }
            std::cout<<"       "<< std::endl;
      //IsFound
        bool IsFound(int arecon2[], int squad2, int target);
        int arecon2[] = {10, 20, 30, 40, 50};
        int squad2 = sizeof(arecon2)/sizeof(arecon2[0]);
        int target1 = 30, target2 = 60;
        if(IsFound(arecon2, squad2, target1)) {
            std::cout << target1 << " ditemukan dalam array" << std::endl;
        }
        else {
            std::cout << target1 << " tidak ditemukan dalam array" << std::endl;
        }
        if(IsFound(arecon2, squad2, target2)) {
            std::cout << target2 << " ditemukan dalam array" << std::endl;
        }
        else {
            std::cout << target2 << " tidak ditemukan dalam array" << std::endl;
        }
            std::cout<<"       "<< std::endl;
        //SumEven
        int sumEven(int arecon3[], int squad3);
        int arecon3[] = {1, 2, 3, 4, 5, 6};
        int squad3 = sizeof(arecon3)/sizeof(arecon3[0]);
        int result2 = sumEven(arecon3, squad3);
        std::cout << "Jumlah seluruh elemen genap dalam array adalah: " << result2 << std::endl;
            std::cout<<"       "<< std::endl;
        //SumOdd
        int sumOdd(int arecon4[], int squad4);
        int arecon4[] = {1, 2, 3, 4, 5, 6};
        int squad4 = sizeof(arecon4)/sizeof(arecon4[0]);
        int result23 = sumOdd(arecon4, squad4);
        std::cout << "12. Jumlah seluruh elemen ganjil dalam array adalah: " << result23 << std::endl;


     return 0;
}
//________________________________________________________________________________________________________///


//Nilai Max
int Max(int a,int b){
    int m;
    if (a>b){
        m=a;
    }
    else {
        m=b;
    }
return m;
}
//Nilai Min
int Min(int a,int b){
    int m;
    if (a<b){
        m=a;
    }
    else {
        m=b;
    }
return m;
}
//MaxArray
int maxarray(int arr[], int size) {
  int max = arr[0];
  for(int i = 1; i < size; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
//MinArray
int minarray(int ar[], int n) {
  int min = ar[0];
  for(int i = 1; i < n; i++) {
    if(ar[i] < min) {
      min = ar[i];
    }
  }
  return min;
}

//IsEven
bool IsEven(int num) {
  if(num % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

//IsOdd
bool IsOdd(int num) {
  if(num % 2 == 0) {
    return false;
  }
  else {
    return true;
  }
}

//IsFactor
bool IsFactor(int num, int factor) {
  if(num % factor == 0) {
    return true;
  }
  else {
    return false;
  }
}

//search
int search(int arecon[], int squad, int target) {
  for(int i = 0; i < squad; i++) {
    if(arecon[i] == target) {
      return i;
    }
  }
  return -1;
}

//IsFound
bool IsFound(int arecon2[], int squad2, int target) {
  for(int i = 0; i < squad2; i++) {
    if(arecon2[i] == target) {
      return true;
    }
  }
  return false;
}

//SumEvent
int sumEven(int arr[], int size) {
  int sum = 0;
  for(int i = 0; i < size; i++) {
    if(arr[i] % 2 == 0) {
      sum += arr[i];
    }
  }
  return sum;
}

//SumOdd
int sumOdd(int arecon4[], int squad4) {
  int sum = 0;
  for(int i = 0; i < squad4; i++) {
    if(arecon4[i] % 2 == 1) {
      sum += arecon4[i];
    }
  }
  return sum;
}

