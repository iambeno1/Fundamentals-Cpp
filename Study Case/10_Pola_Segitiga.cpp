#include <iostream>
using namespace std;

// Implementasi : Perulangan for

int main(){
  system("cls");

  int tinggi;

  cout << "Masukkan tinggi segitiga: ";
  cin >> tinggi;

  for(int i = 1; i <= tinggi; i++){
    for(int j = 1; j <= i; j++){
      cout << " *";
    }
    cout << endl;
  }

  return 0;
}