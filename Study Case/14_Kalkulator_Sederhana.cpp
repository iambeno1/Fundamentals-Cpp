#include <iostream>
using namespace std;

// Kalkulator sederhana dengan hanya mengoperasikan dua angka
// Implementasi : if-else statement

void tambah(float angka1, float angka2){
  float hasil;
  cout << "\t\n-------Penjumlahan-------\n";
  cout << "\tMasukkan angka 1: ";
  cin >> angka1;
  cout << "\tMasukkan angka 2: ";
  cin >> angka2;

  hasil = angka1 + angka2;

  cout << "\tHasil " << angka1 << " + " << angka2 << " = " << hasil;
}

void kurang(float angka1, float angka2){
  float hasil;
  cout << "\t\n-------Pengurangan-------\n";
  cout << "\tMasukkan angka 1: ";
  cin >> angka1;
  cout << "\tMasukkan angka 2: ";
  cin >> angka2;

  hasil = angka1 - angka2;

  cout << "\tHasil " << angka1 << " - " << angka2 << " = " << hasil;
}

void kali(float angka1, float angka2){
  float hasil;
  cout << "\t\n-------Perkalian-------\n";
  cout << "\tMasukkan angka 1: ";
  cin >> angka1;
  cout << "\tMasukkan angka 2: ";
  cin >> angka2;

  hasil = angka1 * angka2;

  cout << "\tHasil " << angka1 << " * " << angka2 << " = " << hasil;
}

void bagi(float angka1, float angka2){
  float hasil;
  cout << "\t\n-------Pembagian-------\n";
  cout << "\tMasukkan angka 1: ";
  cin >> angka1;
  cout << "\tMasukkan angka 2: ";
  cin >> angka2;

  hasil = angka1 / angka2;

  cout << "\tHasil " << angka1 << " / " << angka2 << " \t= " << hasil;
}

int main(){
  system("cls");

  float angka1;
  float angka2;
  int pilihan;
  
  do{
    cout << "==========KALKULATOR==========\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "0. Exit\n";
    cout << "Masukkan pilihan[0/1/2/3/4]: ";
    cin >> pilihan;

    // Disini saya menggunakan if-else untuk menghindari infinite loop (terjadi jika pake switch case dan menerima input string)
    if(pilihan == 1){
      tambah(angka1, angka2);
      cout << endl;
    } else if(pilihan == 2){
      kurang(angka1, angka2);
      cout << endl;
    }else if(pilihan == 3){
      kali(angka1, angka2);
      cout << endl;
    } else if(pilihan == 4){
      bagi(angka1, angka2);
      cout << endl;
    }else if(pilihan == 0){
      cout << "Exit" << endl;
    }else{
      cout << "Pilihan tidak tersedia, coba lagi!" << endl;
    }

  } while(pilihan != 0);

  return 0;
}