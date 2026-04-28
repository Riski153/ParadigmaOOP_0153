#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public: // akses modifier
    int NIM;
    string nama;
    float nilai;

    void printData() 
    {
        cout << "NIM   = " << NIM << endl;
        cout << "Nama  = " << nama << endl;
        cout << "Nilai = " << nilai << endl;
    }
};

int main()
{
    Mahasiswa mhs; // deklarasi objek

    mhs.NIM = 2000;
    mhs.nama = "Kevin";
    mhs.nilai = 75.5;

    mhs.printData();
}