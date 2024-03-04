#include <iostream>
using namespace std;

int main(){

    // String adalah array

    string my_name = "Benony Gabriel";
    cout << "[ ";
    for(char i : my_name){
        cout << i << " ";
    }
    cout << "]\n";

    cout << "[ ";
    for(int i = 0; i < my_name.size(); i++){
        cout << i << " ";
    }
    cout << "]\n";


    cout << "[ ";
    for(char i : my_name){
        cout << i << " ";
        if(i == 'y'){
            break;
        }
    }
    cout << "]\n";

    cout << my_name << endl;
    cout << "Indeks ke-0 : " << my_name[0] << endl;
    cout << "Indeks ke-7 : " << my_name[7] << endl;

    return 0;
}