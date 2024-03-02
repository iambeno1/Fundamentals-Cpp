#include <iostream>
using namespace std;

// Program sederhana untuk menampilkan nama bulan sesuai angka yang diinputkan user
// Implementasi: Switch case, looping(do-while)


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

  int input;
  while(true){
    cout << "Masukkan nomor bulan(1-12): ";
    cin >> input;

    switch(input){
      case 1:
      cout << "Januari" <<endl;
      break;
      case 2:
      cout << "Febuari" << endl;
      break;
      case 3:
      cout << "Maret" << endl;
      break;
      case 4:
      cout << "April" << endl;
      break;
      case 5:
      cout << "Mei" << endl;
      break;
      case 6:
      cout << "Juni" << endl;
      break;
      case 7:
      cout << "Juli" << endl;
      break;
      case 8:
      cout << "Agustus" << endl;
      break;
      case 9:
      cout << "September" << endl;
      break;
      case 10:
      cout << "Oktober" << endl;
      break;
      case 11:
      cout << "November" << endl;
      break;
      case 12:
      cout << "Desember" << endl;
      break;
      default:
      cout << "Nomor bulan tidak valid, coba lagi!" << endl;
    }
    ulangi();
  }
  
  return 0;
}