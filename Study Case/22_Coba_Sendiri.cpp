#include <iostream>
using namespace std;

// Membuat pola (coba diimplementasikan pake for, while, do-while)

// =====Persegi=====
// For
void polaPersegiFor(){
    int panjang;
    cout << "Masukkan panjang sisi: ";
    cin >> panjang;

    for(int i = 1; i <= panjang; i++){
        for(int j = 1; j <= panjang; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

// while
void polaPersegiWhile(){
    int panjang;
    int i = 1;
    int j;

    cout << "Masukkan panjang sisi: ";
    cin >> panjang;

    while(i <= panjang){
        j = 1;
        while(j <= panjang){
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// do-while
void polaPersegiDo(){
    int panjang;
    int i = 1;
    int j;

    cout << "Masukkan panjang sisi: ";
    cin >> panjang;

    do{
        j = 1;
        cout << endl;
        i++;
        do{
            cout << " * ";
            j++;
        }while(j <= panjang);
    }while(i <= panjang);
}

// =====Persegi panjang=====
// For
void polaPersegiPanjangFor(){
    int panjang;
    int lebar;

    cout << "Masukkan panjang sisi: ";
    cin >> panjang;
    cout << "Masukkan lebar sisi: ";
    cin >> lebar;

    for(int i = 1; i <= lebar; i++){
        for(int j = 1; j <= panjang; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

// While
void polaPersegiPanjangWhile(){
    int panjang;
    int lebar;
    int i = 1;
    int j;

    cout << "Masukkan panjang sisi: ";
    cin >> panjang;
    cout << "Masukkan lebar sisi: ";
    cin >> lebar;

    while(i <= lebar){
        j = 1;
        cout << endl;
        while(j <= panjang){
            cout << " * ";
            j++;
        }
        i++;

    }
}

// do while
void polaPersegiPanjangDo(){
    int panjang;
    int lebar;
    int i = 1;
    int j;

    cout << "Masukkan panjang sisi: ";
    cin >> panjang;
    cout << "Masukkan lebar sisi: ";
    cin >> lebar;

    do{
        j = 1;
        cout << endl;
        do{
            cout << " * ";
            j++;
        }while(j <= panjang);
        i++;
    }while(i <= lebar);
}

// Segitiga siku

// Segitiga siku terbalik

// Segitiga / piramida

// Segitiga / piramida terbalik

// belah ketupat

int main(){
    system("cls");

    // polaPersegiFor();
    // polaPersegiWhile();
    // polaPersegiDo();
    // polaPersegiPanjangFor();
    // polaPersegiPanjangWhile();
    // polaPersegiPanjangDo();

    return 0;
}