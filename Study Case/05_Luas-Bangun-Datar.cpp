#include <iostream>
using namespace std;

// Program sederhana untuk menghitung luas dari beberapa bangun datar

float luas, panjang, lebar, alas, tinggi, jari2;

void persegi(float panjang){
  cout << "Panjang sisi: ";
  cin >> panjang;
  luas = panjang * panjang;
  cout << "Luas Persegi \t= sisi * sisi\n";
  cout << "\t\t= " << panjang << " * " << panjang << "\n\t\t= " << luas << endl;
}

void persegiPanjang(float panjang, float lebar){
  cout << "Panjang sisi\t: ";
  cin >> panjang;
  cout << "Lebar sisi\t: ";
  cin >> lebar;
  luas = panjang * lebar;
  cout << "Luas Persegi Panjang\t= P * L\n";
  cout << "\t\t\t= " << panjang << " * " << lebar << "\n\t\t\t= " << luas << endl;
}

void segitiga(float alas, float tinggi){
  cout << "Input alas\t: ";
  cin >> alas;
  cout << "Input tinggi\t: ";
  cin >> tinggi;
  luas = alas * tinggi;
  cout << "Luas Segitiga\t= A * T\n";
  cout << "\t\t= " << alas << " * " << tinggi << "\n\t\t= " << luas << endl;
}

void lingkaran(float jari2){
  cout << "Input Jari-jari\t: ";
  cin >> jari2;
  luas = 3.14 * jari2 * jari2;
  cout << "Luas Lingkaran\t= Phi * r * r\n";
  cout << "\t\t= " << "3.14 * "<< jari2 << " * " << jari2 << "\n\t\t= " << luas << endl;
}

int main(){
  system("cls");

  int pilihan;

  do{
    cout << "=====PROGRAM MENGHITUNG LUAS BANGUN DATAR=====" << endl;
    cout << "1. Luas persegi\n";
    cout << "2. Luas persegi panjang\n";
    cout << "3. Luas segitiga\n";
    cout << "4. Luas lingkaran\n";
    cout << "0. Keluar\n";
    cout << "Masukkan pilihan[1/2/3/4/0]: ";
    cin >> pilihan;

    switch(pilihan){
      case 1:
        cout << "\n~Luas Persegi~\n";
        persegi(panjang);
        system("pause");
        break;
      case 2:
        cout << "\n~Luas Persegi Panjang~\n";
        persegiPanjang(panjang, lebar);
        system("pause");
        break;
      case 3:
        cout << "\n~Luas Segitiga~\n";
        segitiga(alas, tinggi);
        system("pause");
        break;
      case 4:
        cout << "\n~Luas Lingkaran~\n";
        lingkaran(jari2);
        system("pause");
        break;
      case 0:
        cout << "\nExit\n";
        exit(0);
        break;
      default:
        cout << "Pilihan tidak tersedia, coba lagi!" << endl;
    }
  }while(true);

  return 0;
}