#include <iostream>
using namespace std;

// Dalam kasus ini kita akan membuat contoh dengan mengisi biodata sederhana dengan menerapkan "cls" ke dalam do-while loop

int main(){

    string nama;
    int umur;
    char pilihan;

    do{
        system("cls");

        cout << "Masukkan nama kamu\t: ";
        getline(cin, nama);
        cout << "Masukkan umur kamu\t: ";
        cin >> umur;

        system("cls");

        cout << "Hai " << nama << " kamu berumur " << umur << " tahun!" << endl;
        cout << "Ingin coba lagi? [y/n]: ";
        cin >> pilihan;
        cin.ignore();

    }while(pilihan == 'y' || pilihan == 'Y');
    cout << "exit" << endl;

    return 0;
}