#include <iostream>
using namespace std;

/*Loop for each adalah fitur dalam beberapa bahasa pemrograman yang memungkinkan kita untuk mengiterasi melalui setiap elemen dalam suatu koleksi (seperti array, vektor, daftar, dll.) tanpa harus menggunakan indeks atau iterator secara eksplisit. Istilah "for each" biasanya digunakan secara longgar dan dapat merujuk pada berbagai implementasi dalam bahasa pemrograman yang berbeda.

Dalam C++, loop for each umumnya diimplementasikan menggunakan range-based for loop, yang diperkenalkan dalam standar C++11. Bentuk umum dari loop for each di C++ adalah sebagai berikut:

for(element_type element : collection){
    // kode untuk manipulasi elemnt disini
}

Di sini:

- elemen_type adalah tipe data elemen dalam koleksi.
- element adalah variabel yang akan menyimpan nilai dari setiap elemen dalam koleksi saat iterasi.
- collection adalah koleksi dari elemen yang akan diiterasi.

Loop for each ini akan secara otomatis mengiterasi melalui setiap elemen dalam koleksi, dan pada setiap iterasi, nilai dari elemen tersebut akan diberikan ke variabel element. Kita kemudian dapat memanipulasi nilai elemen tersebut dalam blok loop.*/

int main(){
    system("cls");

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for(int i : myNumbers){
        cout << i << " ";
    }

    cout << endl;

    string sebutan[5] = {"Sepuluh", "Dua puluh", "Tiga puluh", "Empat puluh", "Lima puluh"};
    for(string i : sebutan){
        cout << i << " ";
    }

    return 0;
}