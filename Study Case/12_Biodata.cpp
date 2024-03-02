#include <iostream>
using namespace std;

// Implementasi: Input, output, getline

int main(){
  system("cls");

  string nama;
  int umur;
  string prodi;
  string alamat;

  cout << "Masukkan nama anda\t: ";
  getline(cin, nama);

  cout << "Masukkan umur anda\t: ";
  cin >> umur;

  cin.ignore();
  cout << "Masukkan prodi anda\t: ";
  getline(cin, prodi);

  cout << "Masukkan alamat anda\t: ";
  getline(cin, alamat);

  cout << "\n=============DATA DIRI=============" << endl;
  cout << "Nama\t: " << nama << endl;
  cout << "Umur\t: " << umur << endl;
  cout << "Prodi\t: " << prodi << endl;
  cout << "Alamat\t: " << alamat << endl;

  return 0;
}