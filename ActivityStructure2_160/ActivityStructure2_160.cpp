#include <iostream>
using namespace std;

struct AlamatDetail {
    string desa;
    string kota;
};

struct Mahasiswa {
    string NIM;
    string nama;
    AlamatDetail alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "Masukkan NIM : ";
    cin >> mhs.NIM;
    cout << "Masukkan Nama : ";
    cin >> mhs.nama;
    cout << "Alamat: " << endl;
    cout << "\tNama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Masukkan Umur : ";
    cin >> mhs.umur;

    cout << "\nNIM : " << mhs.NIM;
    cout << "\nNama : " << mhs.nama;
    cout << "\nDesa : " << mhs.alamat.desa;
    cout << "\nKota : " << mhs.alamat.kota;
    cout << "\nUmur : " << mhs.umur;

}
