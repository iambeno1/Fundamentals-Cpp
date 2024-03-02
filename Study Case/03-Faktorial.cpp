#include <iostream>
using namespace std;

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


int main(){
  system("cls");
  int angka, hasil;

  while(true){
    cout << "==========FAKTORIAL==========" << endl;
    cout << "Masukkan angka: ";
    cin >> angka;
    hasil = 1;

    for(int i = 1; i <= angka; i++) {
      hasil = hasil * i;
    }
    cout << angka << "! = " << hasil;
    cout << "\n" << endl;
    ulangi();
    cout << "\n" << endl;
  }

  return 0;
}