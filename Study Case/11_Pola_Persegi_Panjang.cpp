#include <iostream>
using namespace std;

// Implementasi : Perulangan for

int main(){
  system("cls");

  int panjang, lebar;

  cout << "Masukkan panjang: ";
  cin >> panjang;
  cout << "Masukkan lebar  : ";
  cin >> lebar;

  cout << endl;

  for(int i = 1; i <= lebar; i++){
    for(int j = 1; j <= panjang; j++){
      cout << " * ";
    }
    cout << endl;
  }
  cout << "\n";

  return 0;
}