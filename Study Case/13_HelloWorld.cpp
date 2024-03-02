#include <iostream>
using namespace std;

int main() {
    const string input = "Hello World";
    const string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string output = "";
    int index = 0;

    // Mengatur seed untuk random berdasarkan waktu
    unsigned int seed = static_cast<unsigned int>(time(0));
    
    while (input != output) {
        if (input[index] == ' ') {
            output += ' ';
            index++;
            continue;
        }

        // Menggunakan operasi sederhana pada seed waktu untuk membuat angka acak
        seed = (seed * 1103515245 + 12345) % 2147483648;
        int randomIndex = seed % alphabet.length();
        char randomAlphabet = alphabet[randomIndex];

        if (input[index] == randomAlphabet) {
            output += randomAlphabet;
            index++;
            cout << output << endl;
        } else {
            cout << output + randomAlphabet << endl;
        }
    }

    // Menambahkan delay dengan loop for
    for (int i = 0; i < 500000; i++) {
        // Do nothing, just a delay
    }

    return 0;
}

// Reference : ig @rpnolep
