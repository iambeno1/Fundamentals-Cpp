#include <iostream>
using namespace std;

// Cetak kelipatan pake looping for, while, dna do-while

void loopFor(int angka){
    cout << "Kelipatan " << angka << " = ";
    for(int i = angka; i <= angka * 10; i += angka){
        cout << i << " ";
    }
}

void loopWhile(int angka){
    int i = angka;
    cout << "Kelipatan " << angka << " = ";

    while(i <= angka * 10){
        cout << i << " ";
        i += angka;
    }
}

void loopDoWhile(int angka){
    int i = angka;
    cout << "Kelipatan " << angka << " = ";

    do{
        cout << i << " ";;
        i += angka;
    }while(i <= angka * 10);
}

int main(){
    system("clear");

    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    // loopFor(angka);
    // loopWhile(angka);
    loopDoWhile(angka);


    return 0;
}