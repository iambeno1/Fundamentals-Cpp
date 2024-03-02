#include <iostream>
using namespace std;

// Implementasi : Perulangan do-while, switch case

// Membuat program menu berulang dengan pilihan exit untuk tutup program

int main(){
  system("cls");

  int pilihan;

  do{
    cout << "======PROGRAM MENU BERULANG======" << endl;
    cout << "1. Pilihan 1\n";
    cout << "2. Pilihan 2\n";
    cout << "3. Pilihan 3\n";
    cout << "0. Exit \n";
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch(pilihan){
      case 1: 
        cout << "Anda menekan pilihan 1\n";
        system("pause"); // digunakan untuk menunggu input dari user baru dilanjutkan --> "Press any key to continue..." selain itu bisa juga pake getch() dari library conio.h
        break;
      
      case 2:
        cout << "Anda menekan pilihan 2\n";
        system("pause");
        break;

      case 3:
        cout << "Anda menekan pilihan 3\n";
        system("pause");
        break;

      case 0:
        cout << "Exit\n";
        exit(0);
        break;

      default:
        cout << "Pilihan tidak tersedia, coba lagi\n";
        break;
    }
  }while(true);

  return 0;
}