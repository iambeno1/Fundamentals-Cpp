#include <iostream>
using namespace std;

// PROGRAM MENGECEK BILANGAN GANJIL DAN GENAP
// Implementasi : pengkondisian(if-else), looping(do-while), prosedur/function(void)
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

void cekBilangan(){
  do{
    int input;
    cout << "==========CEK BILANGAN==========" << endl;
    cout << "Masukkan bilangan : ";
    cin >> input;
    if (input % 2 == 0){
      cout << input << " adalah bilangan GENAP" << endl;
      ulangi();
    }
    else{
      cout << input << " adalah bilangan GANJIL" << endl;
      ulangi();
    }
  }while(true);
}

int main(){
  system("cls");
  cekBilangan();

  return 0;
}