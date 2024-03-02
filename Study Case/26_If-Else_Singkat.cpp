#include <iostream>
using namespace std;

int main(){
    system("cls");

    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    string hasil = (angka % 2 == 0) ? "Genap" : "Ganjil";

    cout << hasil;

    return 0;
}