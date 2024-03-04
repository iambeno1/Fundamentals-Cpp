#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> buah;
    buah = {"mangga", "Rambutan", "Lemon"};

    // Pake for each loop
    for(string i : buah){
        cout << i << endl;
    }

    cout << endl;

    buah.push_back("Jeruk");
    buah.push_back("Durian");
    buah.push_back("Apel");

    // Pake for loop biasa
    for(int i = 0; i < buah.size(); i++){
        cout << buah[i] << endl;
    }

    cout << endl;
    
    // Hapus apel
    buah.pop_back();
    for(string i : buah){
        cout << i << endl;
    }

    cout << endl;

    // Hapus Jeruk
    for(int i = 0; i < buah.size(); i++){
        if(buah[i] == "Jeruk"){
            buah.erase(buah.begin() + i);
            break;
        }
    }

    for(string i : buah){
        cout << i << endl;
    }

    return 0;
}