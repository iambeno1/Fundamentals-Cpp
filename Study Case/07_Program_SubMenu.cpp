#include <iostream>
using namespace std;

// Implementasi : Perulangan do-while, switch case

// Membuat program menu berulang + sub menu dengan pilihan exit untuk tutup program

// Silahkan disesuakan dengan kebutuhan
void subPilihan1(int pilihan){
  do{
    cout << "\t-----Pilihan 1-----" << endl;
    cout << "\t1. Sub pilihan 1.1\n";
    cout << "\t2. Sub pilihan 1.2\n";
    cout << "\t3. Sub pilihan 1.3\n";
    cout << "\t9. Kembali\n";
    cout << "\tMasukkan pilihan: ";
    cin >> pilihan;

    switch(pilihan){
      case 1:
        cout << "\tAnda menekan sub pilihan 1.1\n";
        system("pause");
        break;
      
      case 2:
        cout << "\tAnda menekan sub pilihan 1.2\n";
        system("pause");
        break;
      
      case 3:
        cout << "\tAnda menekan sub pilihan 1.3\n";
        system("pause");
        break;

      case 9:
        cout << "\tKembali\n";
        break;

      default:
        cout << "\tPilihan tidak tersedia, coba lagi\n";
        break;    
    }
  }while(pilihan != 9);
}

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
        subPilihan1(pilihan);
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