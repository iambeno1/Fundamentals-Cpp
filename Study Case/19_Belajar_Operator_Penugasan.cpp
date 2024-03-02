#include <iostream>
using namespace std;

// Belajar operasi penugasan: =, +=, -=, *=, /=, %=, 
// Operator penugasan bitwise: |= (OR), &= (AND), ^= (XOR)

// Operator `=` atau pengisian nilai
void isiNilai(){
  // Misal melakukan penukaran nilai
  int x, y, z;
  // Nilai awal
  x = 2;
  y = 5;

  cout << "Nilai awal x" << " = " << x << endl;
  cout << "Nilai awal y" << " = " << y << endl;

  // Tukar
  z = y;
  y = x;
  x = z;
  cout << "Setelah tukar x" << " = " << x << endl;
  cout << "Setelah tukar y" << " = " << y << endl;
}

void tambah(){
  int x = 5;
  cout  << "x = " << x << endl; 

  // buat x + 3 pake op penjumlahan += 
  x += 3; // sama saja dengan x = x + 3
  cout  << "x = " << x << endl; 
}

void kurang(){
  int x = 5;
  cout  << "x = " << x << endl; 

  // buat x - 3 pake op kurang -= 
  x -= 3; // sama saja dengan x = x - 3
  cout  << "x = " << x << endl; 
}

void kali(){
  int x = 5;
  cout  << "x = " << x << endl; 

  // buat x * 3 pake op kali *= 
  x *= 3; // sama saja dengan x = x * 3
  cout  << "x = " << x << endl; 
}

void bagi(){
  int x = 8;
  cout  << "x = " << x << endl; 

  // buat x / 4 pake op bagi /= 
  x /= 4; // sama saja dengan x = x / 4
  cout  << "x = " << x << endl; 
}

// Modulus atau sisa hasil bagi
void modulo(){
  int x = 8;
  cout  << "x = " << x << endl; 

  // buat x % 3 pake op modulo %= 
  x %= 3; // sama saja dengan x = x % 3
  cout  << "x = " << x << endl; 
}

// operator bitwise or |= 
void bitwise_or(){
  int x = 8;
  cout  << "x = " << x << endl; 

  // buat x || 3 pake op or |= 
  x |= 3; // sama saja dengan x = x || 3
  cout  << "x = " << x << endl; 
}

// operator bitwise and &= 
void bitwise_and(){
  int x = 8;
  cout  << "x = " << x << endl; 

  // buat x && 3 pake op and &= 
  x &= 3; // sama saja dengan x = x && 3
  cout  << "x = " << x << endl; 
}

// operator bitwise xxor ^= 
void bitwise_xor(){
  int x = 8;
  cout  << "x = " << x << endl; 

  // buat x && 3 pake op and &= 
  x ^= 3; // sama saja dengan x = x && 3
  cout  << "x = " << x << endl; 
}

int main(){
  system("clear");

  // isiNilai();
  // tambah();
  // kurang();
  // kali();
  // bagi();
  // modulo();
  // bitwise_or();
  // bitwise_and();
  bitwise_xor();

  return 0;
}