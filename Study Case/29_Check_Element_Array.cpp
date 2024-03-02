#include <iostream>
using namespace std;

int main(){
    system("cls");

    int arr_size, cari;

    cout << "Masukkan ukuran array: ";
    cin >> arr_size;
    int arr[arr_size];
    
    cout << endl;

    for(int i = 0; i < arr_size; i++){
        cout << "Masukkan elemen array ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\nArray anda: ";
    for(int j = 0; j < arr_size; j++){
        cout << arr[j] << " ";
    }

    cout << "\nMasukkan elemen yang ingin dicari: ";
    cin >> cari;

    bool found = false;
    int idx_posisi = -1;

    for(int k = 0; k < arr_size; k++){
        if(arr[k] == cari){
            found = true;
            idx_posisi = k;
            break;
        }
    }

    if(found){
        cout << cari << " ditemukan, berada pada index ke-" << idx_posisi << "!"<< endl;
    }else{
        cout << cari << " tidak ditemukan!" << endl;
    }

    return 0;
}