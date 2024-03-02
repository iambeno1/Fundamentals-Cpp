#include <iostream>
using namespace std;

/*
Belajar increment dan decrement

Increment(++) / penjumlahan:
    - Pre-increment : ++i
    - Post-increment : i++

Decrement(--) / pengurangan
    - Pre-decrement : --i
    - Post-decrement : i--
*/

int main(){
    system("cls");

    int x;

    cout << "Pre-Increment" << endl;
    x = 1;
    cout << "x = " << x << endl;
    ++x;
    cout << "x = " << x << endl;
    ++x;
    cout << "x = " << x << endl;
    ++x;
    cout << "x = " << x << endl;

    cout << endl;

    cout << "Post-Increment" << endl;
    x = 1;
    cout << "x = " << x << endl;
    x++;
    cout << "x = " << x << endl;
    x++;
    cout << "x = " << x << endl;
    x++;
    cout << "x = " << x << endl;

    cout << endl;

    cout << "Lihat perbedaan" << endl;
    // Pre-increment
    cout << "Pre" << endl;
    x = 1;
    cout << "x = " << ++x << endl;
    cout << "x = " << ++x << endl;
    cout << "x = " << ++x << endl;

    cout << endl;
    // Post-increment
    cout << "Post" << endl;
    x = 1;
    cout << "x = " << x++ << endl;
    cout << "x = " << x++ << endl;
    cout << "x = " << x++ << endl;

    cout << endl;
    
    // Untuk decrement cara kerjanya sama, bedanya hanya di pengurangan
    cout << "Pre-Decrement" << endl;
    x = 10;
    cout << "x = " << x << endl;
    --x;
    cout << "x = " << x << endl;
    --x;
    cout << "x = " << x << endl;
    --x;
    cout << "x = " << x << endl;

    cout << endl;

    cout << "Post-Decrement" << endl;
    x = 10;
    cout << "x = " << x << endl;
    x--;
    cout << "x = " << x << endl;
    x--;
    cout << "x = " << x << endl;
    x--;
    cout << "x = " << x << endl;

    cout << endl;

    cout << "Lihat perbedaan" << endl;
    // Pre-Decrement
    cout << "Pre" << endl;
    x = 10;
    cout << "x = " << --x << endl;
    cout << "x = " << --x << endl;
    cout << "x = " << --x << endl;

    cout << endl;
    // Post-Decrement
    cout << "Post" << endl;
    x = 10;
    cout << "x = " << x-- << endl;
    cout << "x = " << x-- << endl;
    cout << "x = " << x-- << endl;

    return 0;
}