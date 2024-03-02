#include <iostream>
using namespace std;

// Deklarasi variabel konstan untuk nilai Pi
const double PHI = 3.14159;

// Fungsi untuk menghitung luas lingkaran
double luasLingkaran(double radius){
    return PHI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
double kelilingLingkaran(double radius){
    return 2 * PHI * radius;
}

int main(){
    system("cls");

    double radius;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;

    double luas = luasLingkaran(radius);
    double keliling = kelilingLingkaran(radius);

    cout << "Luas lingkaran     : " << luas << endl;
    cout << "Keliling lingkaran : " << keliling << endl;

    return 0;
}