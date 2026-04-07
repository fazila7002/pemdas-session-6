#include <iostream>
using namespace std ;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main()
{
    Orang mhs;
    cout << "Isikan data nama   : ";
    getline(cin , mhs.nama);
    cout << "Isikan data desa   : ";
    getline(cin , mhs.alamat.desa);
    cout << "isikan data kota   : ";
    getline(cin , mhs.alamat.kota);
    cout << "isikan data umur   : ";
    cin >> mhs.umur;
    cout << endl;



}