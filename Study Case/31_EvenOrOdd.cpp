#include <iostream>
using namespace std;

string check(int angka){
    return (angka % 2 == 0) ? "Genap" : "Ganjil";
}

int main(){

    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    cout << angka << " adalah " << check(angka) << endl;

    return 0;
}