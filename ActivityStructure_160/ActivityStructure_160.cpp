#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs1, mhs2;
    mhs1.NIM = "20220140160";
    mhs1.nama = "Jordy";
    mhs1.alamat = "Kasihan";
    mhs1.umur = 20;

    cout << "Masukkan NIM : ";
    cin >> mhs2.NIM;
    cout << "Masukkan Nama : ";
    cin >> mhs2.nama;
    cout << "Masukkan Alamat : ";
    cin >> mhs2.alamat;
    cout << "Masukkan Umur : ";
    cin >> mhs2.umur;

    cout << "\nNIM : " << mhs1.NIM;
    cout << "\nNama : " << mhs1.nama;
    cout << "\nAlamat : " << mhs1.alamat;
    cout << "\nUmur : " << mhs1.umur << endl;

    cout << "\nNIM : " << mhs2.NIM;
    cout << "\nNama : " << mhs2.nama;
    cout << "\nAlamat : " << mhs2.alamat;
    cout << "\nUmur : " << mhs2.umur;

}
