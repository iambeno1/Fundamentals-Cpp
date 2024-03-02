#include <iostream>
#include <iomanip>
using namespace std;

// Belajar array

int main(){
    system("cls");
    
    // int numbers[5] =  {1,2,3,4,5};
    // cout << "Index ke-1: " << numbers[1] << endl; // ingat bahwa index dimulai dari 0, maka ini hasilnya adalah 2

    // Deklarasi array
    // string prodi[5];

    // // Inisialisasi array prodi
    // prodi[0] = "CS";
    // prodi[1] = "CE";
    // prodi[2] = "PE";
    // prodi[3] = "GP";
    // prodi[4] = "GL";

    // Deklarasi + inisialisasi
    string prodi[5] = {"CS", "CE", "PE", "GP", "GL"};
    int kodeProdi[5] = {1,2,3,4,5};

    cout << setw(5) << "Kode";
    for(int i = 0; i < 5; i++){
        cout << setw(5) << kodeProdi[i];
    }

    cout << setw(5) << "\nProdi";
    for(int j = 0; j < 5; j++){
            cout << setw(5) << prodi[j];
        }
    cout << endl;

    // Akses array
    cout << setw(5) << "Kode" << setw(10) << "Prodi" << endl;
    cout << setw(5) << kodeProdi[0] << setw(10) << prodi[0] << endl;
    cout << setw(5) << kodeProdi[1] << setw(10) << prodi[1] << endl;
    cout << setw(5) << kodeProdi[2] << setw(10) << prodi[2] << endl;
    cout << setw(5) << kodeProdi[3] << setw(10) << prodi[3] << endl;
    cout << setw(5) << kodeProdi[4] << setw(10) << prodi[4] << endl;

    // String adalah array
    string nama = "Beno";
    cout << "Indeks ke-0 dari " << nama << " : " << nama[0] << endl;
    for(int i = 0; i < nama.size(); i++){
        cout << nama[i] << " ";
    }

    return 0;
}