#include <iostream>
using namespace std;

// Latihan perulangan for

// Soal: Buatlah program C++ yang menampilkan hasil perkalian dari angka yang diinput user pake for loop

int main(){
  system("cls");

  int angka;
  cout << "Masukkan angka: ";
  cin >> angka;

  cout << "Kelipatan " << angka << " : ";
  for(int i = angka; i <= angka * 10; i += angka){
  cout << i << " ";
    
  }

  return 0;
}