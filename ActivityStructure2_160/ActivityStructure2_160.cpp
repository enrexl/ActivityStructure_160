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
    std::cout << "Hello World!\n";
}
