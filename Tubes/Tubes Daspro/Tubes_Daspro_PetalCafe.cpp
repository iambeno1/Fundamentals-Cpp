/*KELOMPOK 7 DASPRO
1. BENONY GABRIEL               (NIM : 105222002)
2. RAYHAN SURYA DESTIAN         (NIM : 105222024)
3. SHEVA HAYA MILANO            (NIM : 105222036)
4. ANOM WAJAWENING              (NIM : 105222029)
5. MUHAMMAD ABRIYANSYAH PRATAMA (NIM : 105222021)
=================================================*/

#include <iostream>
#include <fstream>

using namespace std;

const int MAX_BARANG = 10;
string nama_barang[MAX_BARANG];
int harga_barang[MAX_BARANG];
int kuantitas_barang[MAX_BARANG];
int total_belanja = 0;
int saldo = 100000;

void tulisMenu() {
    ifstream file("data_barang.txt");
    if(!file.is_open()) {
        ofstream file("data_barang.txt");
        file << "Cappuccino\n25000\n";
        file << "Milkshake Coklat\n22000\n";
        file << "Mocha Mystic\n15000\n";
        file << "Kopi Hitam\n20000\n";
        file << "Lemonade\n16000\n";
        file << "Rose Reverie\n15000\n";
        file << "Soda Gembira\n12000\n";
        file << "Es Teh Manis\n8000\n";
        file << "Starlit Espresso\n21000\n";
        file << "Air Mineral\n7000\n";
        file.close();
    }
}

void bacaSaldo()
{
    ifstream file("saldo.txt");
    if (file.is_open())
    {
        file >> saldo;
        file.close();
    }
    else
    {
        cout << "File saldo.txt tidak dapat dibuka, menggunakan saldo default." << endl;
    }
}

void tulisSaldo()
{
    ofstream file("saldo.txt");
    if (file.is_open())
    {
        file << saldo;
        file.close();
    }
    else
    {
        cout << "File saldo.txt tidak dapat ditulis." << endl;
    }
}

void bacaDataBarang()
{
    ifstream file("data_barang.txt");
    if (file.is_open())
    {
        for (int i = 0; i < MAX_BARANG; i++)
        {
            getline(file, nama_barang[i]);
            file >> harga_barang[i];
            file.ignore();
        }
        file.close();
    }
    else
    {
        cout << "File data_barang.txt tidak dapat dibuka." << endl;
    }
}

void tulisDataBarang()
{
    ofstream file("data_barang.txt");
    if (file.is_open())
    {
        for (int i = 0; i < MAX_BARANG; i++)
        {
            file << nama_barang[i] << endl;
            file << harga_barang[i] << endl;
        }
        file.close();
    }
    else
    {
        cout << "File data_barang.txt tidak dapat ditulis." << endl;
    }
}


void tampilkanDaftarMinuman()
{
    cout << "Petal Cafe menyediakan berbagai jenis minuman" << endl;
    for (int i = 0; i < MAX_BARANG; i++)
    {
        cout << i + 1 << ". " << nama_barang[i] << ": Rp " << harga_barang[i] << endl;
    }
    cout << "11. Urutkan dari yang paling murah" << endl;
    cout << "12. Urutkan dari yang paling mahal" << endl;
    cout << "13. Cari minuman" << endl;
    cout << "14. Kembali ke menu utama" << endl;
    cout << "0. Keluar dari program" << endl;
    cout << "Pilihan : ";
}

void cekSaldo()
{
    cout << "saldo anda Rp. " << saldo << endl;
    cout << "1. Kembali ke menu utama" << endl;
    cout << "0. Keluar dari program" << endl;
    cout << "Pilihan : ";
}

void isiUlangSaldo()
{
    int nominal;
    cout << "Masukkan jumlah nominal isi ulang: ";
    cin >> nominal;
    saldo += nominal;
    tulisSaldo();
    cout << "Jumlah saldo anda saat ini adalah: " << saldo << endl;
    cout << "1. Kembali ke menu utama" << endl;
    cout << "0. Keluar dari program" << endl;
    cout << "Pilihan : ";
}

void tampilkanStruk()
{
  ofstream file("struk.txt");
    if (file.is_open())
    {
        file << endl << "--Struk Belanja--" << endl;
        file << "Nama Item\t\t\t" << "Jumlah\t\t" << "Harga satuan\t\t" << "Harga" << endl;
        for (int i = 0; i < MAX_BARANG; i++)
        {
            if (kuantitas_barang[i] > 0)
            {
                int harga = harga_barang[i] * kuantitas_barang[i];
                file << nama_barang[i] << "\t\t\t" << kuantitas_barang[i] << "\t\t" << harga_barang[i] <<"\t\t" << harga << endl;
            }
        }
        file << "------------------------" << endl;
        file << "Total belanja anda : Rp. " << total_belanja << endl;
        file << "Sisa saldo anda : Rp. " << saldo << endl;
        file << "Terima kasih sudah berbelanja di Petal Cafe." << endl;
        file << "-----------------------------" << endl;

        file.close();
    }
    else
    {
        cout << "File struk.txt tidak dapat ditulis." << endl;
    }
    cout << endl << "--Struk Belanja--" << endl;
    cout << "Nama Item" << "\t\t\t" << "Jumlah" << "\t\t" << "Harga satuan" << "\t\t" << "Harga" << endl;
    for (int i = 0; i < MAX_BARANG; i++)
    {
        if (kuantitas_barang[i] > 0)
        {
            int harga = harga_barang[i] * kuantitas_barang[i];
            cout << nama_barang[i] << "\t\t\t" << kuantitas_barang[i] << "\t\t" << harga_barang[i] << "\t\t" << harga << endl;
        }
    }
    cout << "------------------------" << endl;
    cout << "Total belanja anda : Rp. " << total_belanja << endl;
    cout << "Sisa saldo anda : Rp. " << saldo << endl;
    cout << "Terima kasih sudah berbelanja di toko kami." << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Kembali ke menu utama" << endl;
    cout << "0. Keluar dari program" << endl;
    cout << "Pilihan : ";
}

void urutkanHargaTerendah()
{
    for (int i = 0; i < MAX_BARANG - 1; i++)
    {
        for (int j = i + 1; j < MAX_BARANG; j++)
        {
            if (harga_barang[j] < harga_barang[i])
            {
                // Tukar harga_barang
                int tempHarga = harga_barang[i];
                harga_barang[i] = harga_barang[j];
                harga_barang[j] = tempHarga;

                // Tukar nama_barang
                string tempNama = nama_barang[i];
                nama_barang[i] = nama_barang[j];
                nama_barang[j] = tempNama;
            }
        }
    }
}

void urutkanHargaTertinggi()
{
    for (int i = 0; i < MAX_BARANG - 1; i++)
    {
        for (int j = i + 1; j < MAX_BARANG; j++)
        {
            if (harga_barang[j] > harga_barang[i])
            {
                // Tukar harga_barang
                int tempHarga = harga_barang[i];
                harga_barang[i] = harga_barang[j];
                harga_barang[j] = tempHarga;

                // Tukar nama_barang
                string tempNama = nama_barang[i];
                nama_barang[i] = nama_barang[j];
                nama_barang[j] = tempNama;
            }
        }
    }
}

void cariMinuman()
{
    string cari;
    cout << "Masukkan nama minuman yang ingin dicari: ";
    cin.ignore();
    getline(cin, cari);

    // Cari minuman berdasarkan nama
    bool ditemukan = false;
    for (int i = 0; i < MAX_BARANG; i++)
    {
        if (nama_barang[i].find(cari) != string::npos)
        {
            cout << i + 1 << ". " << nama_barang[i] << ": Rp " << harga_barang[i] << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan)
    {
        cout << "Minuman tidak ditemukan." << endl;
    }
}

void beliMinuman()
{
    int pilihan, kuantitas;
    char tambah_menu = 'y';

    while (tambah_menu == 'y' || tambah_menu == 'Y')
    {
        tampilkanDaftarMinuman();
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= MAX_BARANG)
        {
            cout << nama_barang[pilihan - 1] << ": Rp " << harga_barang[pilihan - 1] << endl;
            cout << "Masukkan jumlah: ";
            cin >> kuantitas;

            if (kuantitas > 0)
            {
                kuantitas_barang[pilihan - 1] += kuantitas;
                total_belanja += harga_barang[pilihan - 1] * kuantitas;
            }
            else
            {
                cout << "Jumlah barang tidak valid!" << endl;
            }
        }
        else if (pilihan == 11){
            urutkanHargaTerendah();
        }
        else if (pilihan == 12){
            urutkanHargaTertinggi();
        }
        else if (pilihan == 13){
            cariMinuman();
        }
        else if (pilihan == 14)
        {
            tambah_menu = 'n';
        }
        else if (pilihan == 0)
        {
            cout << "Terima kasih, ditunggu kedatangannya kembali." << endl;
            return;
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "Tambah menu lain (y/n): ";
        cin >> tambah_menu;
    }

    if (total_belanja > saldo)
    {
        cout << "Gagal berbelanja. Saldo tidak mencukupi." << endl;
        cout << "1. Kembali ke Menu Utama \n0. Keluar dari Program" <<endl;
        total_belanja = 0;
        cout << "Pilihan : ";
    }
    else
    {
        saldo -= total_belanja;
        tulisSaldo();
        tampilkanStruk();
        total_belanja = 0;
    }
}

int main()
{
    tulisMenu();
    bacaDataBarang();
    bacaSaldo();

    int pilihan;
    char ulang_program = 'y';

    while (ulang_program == 'y' || ulang_program == 'Y')
    {
        cout << "===== Petal Cafe =====" << endl;
        cout << "1. Cek saldo PetalPay" << endl;
        cout << "2. Isi ulang saldo" << endl;
        cout << "3. Beli Minuman" << endl;
        cout << "4. Daftar Minuman" << endl;
        cout << "0. Keluar dari program" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cekSaldo();
            cin >> pilihan;
            if (pilihan == 1)
            {
                continue;
            }
            else if (pilihan == 0)
            {
                ulang_program = 'n';
            }
            break;
        case 2:
            isiUlangSaldo();
            cin >> pilihan;
            if (pilihan == 1)
            {
                continue;
            }
            else if (pilihan == 0)
            {
                ulang_program = 'n';
            }
            break;
        case 3:
            beliMinuman();
            cin >> pilihan;
            if (pilihan == 1)
            {
                continue;
            }
            else if (pilihan == 0)
            {
                ulang_program = 'n';
            }
            break;
        case 4:
            tampilkanDaftarMinuman();
            cin >> pilihan;
            if (pilihan == 11){
                urutkanHargaTerendah();
            }
            else if(pilihan == 12){
                urutkanHargaTertinggi();
            }
            else if (pilihan == 13){
                cariMinuman();
            }
            else if (pilihan == 14)
            {
                continue;
            }
            else if (pilihan == 0)
            {
                ulang_program = 'n';
            }
            break;
        case 0:
            ulang_program = 'n';
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }
    }

    tulisDataBarang();
    return 0;
}