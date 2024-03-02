#include <iostream>
#include <vector>
using namespace std;

struct data_student{
    string nama;
    string nim;
    string prodi;
    int tahun_masuk;
};

vector<data_student> init_students(){
    vector<data_student> students = {
        {"Beno", "01", "CS", 2022},
        {"Andi", "02", "CE", 2023},
        {"Geri", "03", "CS", 2021},
        {"Ardi", "04", "CS", 2022},
        {"Sandi", "05", "CE", 2022}
    };
    return students;
}

// Inisialisaasi data student
vector<data_student> students = init_students();

void lihat_data(){
    for(const auto& student : students){
        cout << "Nama        : " << student.nama << endl;
        cout << "NIM         : " << student.nim << endl;
        cout << "Prodi       : " << student.prodi << endl;
        cout << "Tahun masuk : " << student.tahun_masuk << endl;
        cout << endl;
    }
}

// Note : Gunakan getline kalau mau terima lebih dari satu kata

void tambah_data(){
    string nama_siswa;
    string nim;
    string prodi;
    int tahun_masuk;

    cout << "Masukkan nama siswa: ";
    cin >> nama_siswa;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan prodi: ";
    cin >> prodi;
    cout << "Tahun masuk: ";
    cin >> tahun_masuk;

    students.push_back({nama_siswa, nim, prodi, tahun_masuk});
}

void hapus_data(){
    string nama_siswa;
    cout << "Masukkan nama siswa yang ingin dihapus: ";
    cin >> nama_siswa;

    for(auto it = students.begin(); it != students.end(); ++it){
        if(it->nama == nama_siswa){
            students.erase(it);
            cout << "Data siswa " << nama_siswa << " berhasil dihapus!" << endl;
            break;
        }
        else{
            cout << nama_siswa << " tidak ditemukkan!" << endl;
        }
    }
}

void update_data(){
    string nama_siswa;
    string nim;
    string prodi;
    int tahun_masuk;

    cout << "Masukkkan nama siswa yang ingin diupdate: ";
    cin >> nama_siswa;

    for(auto &student : students){
        if(student.nama == nama_siswa){
            cout << "Update data siswa" << nama_siswa << endl;
            cout << "Masukkan nama: ";
            cin >> nama_siswa;
            cout << "Masukkan nim: ";
            cin >> nim;
            cout << "Masukkan prodi: ";
            cin >> prodi;
            cout << "Masukkan tahun masuk: ";
            cin >> tahun_masuk;

            student.nama = nama_siswa;
            student.nim = nim;
            student.prodi = prodi;
            student.tahun_masuk = tahun_masuk;
            break;
        }else{
            cout << "Data siswa " << nama_siswa << " tidak ditemukan!"<< endl;
        }
    }
}

void pilihan_menu(int pilihan){
    switch(pilihan){
        case 1:
        cout << "Lihat Data Siswa\n";
        lihat_data();
        break;

        case 2:
        cout << "Tambah Siswa\n";
        tambah_data();
        break;

        case 3:
        cout << "Hapus Siswa\n";
        hapus_data();
        break;

        case 4:
        cout << "Update Data\n";
        update_data();
        break;

        case 0:
        cout << "Exit\n";
        exit(1);

        default:
        cout << "Piliihan tidak tersedia, coba lagi!\n";
        break;
    }
}

int main(){

    int pilihan;
    do{
        cout << "=====WELCOME=====" << endl;
        cout << "1. Lihat data siswa\n";
        cout << "2. Tambah siswa\n";
        cout << "3. Hapus siswa\n";
        cout << "4. Update data\n";
        cout << "0. Exit\n";
        cout << "Masukkan piliihan: ";
        cin >> pilihan;

        pilihan_menu(pilihan);

    }while(true);

    return 0;
}