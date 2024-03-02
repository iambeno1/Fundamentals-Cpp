#include <iostream>
using namespace std;

// PROGRAM MENGECEK BILANGAN PRIMA
// Implementasi : pengkondisian(if-else), looping(do-while, for), prosedur/function(void & bool)

void ulangi(){
  char ulangi;
  do{
    cout << "Ingin coba lagi? [y/n] : ";
    cin >> ulangi;
    if(ulangi == 'y' || ulangi == 'Y')
      break;
    else if(ulangi == 'n' || ulangi == 'N'){
      cout << "Exit" << endl;
      exit(0);
    } else
      cout << "Pilihan tidak tersedia, coba lagi!" << endl;
  } while(true);
}

bool cekPrima(){
  do{
    int angka;
    bool bil_prima = true;
    cout << "==========CEK BILANGAN PRIMA==========" << endl;
    cout << "Masukkan bilangan (bil bulat) : ";
    cin >> angka;

    // 0 dan 1 bukan bilangan priima
    if (angka == 0 || angka == 1)
      bil_prima = false;
    else{
      for(int i = 2; i <= angka / 2; i++){
        if(angka % i == 0){
          bil_prima = false;
          break;
        }
      }
    }
    cout << endl;
    if(bil_prima){
      cout << angka << " adalah bilangan prima" << endl;
      ulangi();
    }else{
      cout << angka << " bukan bilangan prima" << endl;
      ulangi();
    }
    cout << endl;
  }while(true);
}

int main(){
  system("cls");

  cekPrima();

  return 0;
}