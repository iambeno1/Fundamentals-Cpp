#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> anggota;
    anggota = {"Beno", "Eki", "Ical", "Ferdi"};
    anggota.push_back("Wili");

    for(int i = 0; i <= anggota.size(); i++){
        cout << anggota[i] << endl;
    }

    // cout << anggota[4] << endl;
    anggota.pop_back();

    for(auto it : anggota){
        cout << it << endl;
    }

    anggota.push_back("Wili");
    anggota.insert(anggota.begin(), "Rinto");
    anggota.insert(anggota.begin() + 2, "Aba");
    anggota.insert(anggota.end(), "Rian");
    anggota.insert(anggota.end() - 2, "Nugie");
    anggota.erase(anggota.begin());
    for(string it : anggota){
        cout << it << endl;
    }

    cout << "\nSize: " << anggota.size() << endl;
    cout << "Caps: " << anggota.capacity() << endl;

    // utk mengatasi jumlah size dan kapasitas agar berjumlah sama, gunakan shrink_to_fit()
    anggota.shrink_to_fit();

    anggota.push_back("ali");
    anggota.shrink_to_fit();
    // anggota.clear()

    cout << anggota.front() << endl;
    cout << anggota.back() << endl;


    cout << "\nafter fit\n\nSize: " << anggota.size() << endl;
    cout << "Caps: " << anggota.capacity() << endl;


    return 0;
}