/*Buatlah kode program C++ konversi suhu. Program meminta 1 inputan berupa suhu dalam satuan derajat cescius. Hasilnya akan menampilkan konversi suhu untuk derajat Fahrenheit, Kelvin dan Reamur.

Rumus:
Fahrenheit = (9/5) * Celcius + 32
Kelvin = Celcius + 273.15
Reamur = (4/5) * Celcius*/

// Implementasi : input & output, operasi aritmatika

#include <iostream>
using namespace std;

int main(){
  system("cls");

  int pilihan;
  float celcius, fahrenheit, kelvin, reamur;

  cout << "=====KONVERSI SUHU CELCIUS=====" << endl;
  cout << "Masukkan suhu celcius: ";;
  cin >> celcius;

  fahrenheit = (9.0/5.0 * celcius) + 32;
  kelvin = celcius + 273.15;
  reamur = (4.0/5.0) * celcius;

  cout  << celcius << " derajat Celcius = " << fahrenheit << " derajat fahrenheit" << endl;
  cout  << celcius << " derajat Celcius = " << kelvin << " derajat kelvin" << endl;
  cout  << celcius << " derajat Celcius = " << reamur << " derajat reamur" << endl;

  return 0;
}