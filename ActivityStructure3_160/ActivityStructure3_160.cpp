#include <iostream>
using namespace std;

struct ALamatDetail {
    char desa[20];
    char kota[20];
};

struct Mahasiswa {
    char NIM[12];
    char nama[20];
    ALamatDetail alamat;
    int umur;
};

int main()
{
    std::cout << "Hello World!\n";
}
