#include <iostream>
using namespace std;

// Implementasi : Perulangan for

int main(){
  system("cls");

  int panjang;

  cout << "Masukkan panjang persegi: ";
  cin >> panjang;

  for(int i = 1; i <= panjang; i++){
    for(int j = 1; j <= panjang; j++){
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}