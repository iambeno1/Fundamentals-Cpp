#include <iostream>
using namespace std;
// Belajar - Const / Konstan
// Ketika Anda tidak ingin orang lain (atau diri Anda sendiri) mengubah nilai variabel yang ada, gunakan kata kunci const (ini akan mendeklarasikan variabel sebagai "konstan", yang berarti tidak dapat diubah dan hanya dapat dibaca-read-only):

/*Variabel konstan (`const`) digunakan ketika Anda ingin mendeklarasikan suatu nilai yang tetap atau tidak berubah selama jalannya program. Penggunaan variabel konstan membantu meningkatkan kejelasan kode, mencegah perubahan nilai yang tidak disengaja, dan memudahkan pemeliharaan kode. Berikut adalah beberapa situasi di mana penggunaan variabel konstan sangat berguna:

1. **Nilai Tetap:** Ketika Anda ingin mendeklarasikan nilai yang tetap dan tidak boleh diubah selama jalannya program. Contohnya, nilai pi dalam matematika seringkali dinyatakan sebagai konstanta:
    ```cpp
    const double PI = 3.14159;
    ```

2. **Ukuran Array:** Saat mendeklarasikan array dengan ukuran tetap, Anda dapat menggunakan variabel konstan untuk ukuran array tersebut. Ini berguna karena memungkinkan Anda untuk dengan mudah mengubah ukuran array hanya dengan mengubah nilai variabel konstan tersebut.
    ```cpp
    const int UKURAN_ARRAY = 10;
    int array[UKURAN_ARRAY];
    ```

3. **Parameter Fungsi:** Saat Anda mendefinisikan fungsi, menggunakan parameter konstan memungkinkan Anda memastikan bahwa nilai parameter tidak akan berubah dalam tubuh fungsi.
    ```cpp
    void fungsi(const int x) {
       // Isi fungsi
    }
    ```

4. **Pointer Konstan:** Saat Anda ingin membuat pointer yang menunjuk pada lokasi memori yang tidak boleh diubah nilainya.
    ```cpp
    int angka = 10;
    const int *ptr = &angka; // Pointer konstan ke integer konstan
    ```

5. **Referensi Konstan:** Saat Anda ingin membuat referensi yang tidak dapat mengubah nilai yang direferensikan.
    ```cpp
    int angka = 10;
    const int &ref = angka; // Referensi konstan ke integer konstan
    ```

Penggunaan variabel konstan membantu meningkatkan keamanan dan kejelasan kode Anda, serta memfasilitasi pemeliharaan kode di masa depan.
*/


int main(){
    system("cls");

    const string nama = "Beno"; // artinya value dari variabel nama tidak dapat di ubah atau di modif (karena bersifat konstan/tetap)
    cout << "Nama : " << nama << endl;

    const int satuMenit = 60; // artinya satu menit adalah 60 detik (bersifat konstan/tetap) value ini tidak dapat dioperasikan

    // satuMenit = 50; // hasil error

    // satuMenit = 50 + 10; // hasil error juga

    return 0;
}