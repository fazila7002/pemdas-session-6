#include <iostream>
using namespace std;

struct Orang 
{
    string nama;
    string alamat;
    int umur;

};

int main()
{
    Orang mhs;


    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data alamaat : ";
    cin >> mhs.alamat;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data tampil" << endl;
    cout << " Nama  : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur   : " << mhs.umur << endl;
    
    return 0;

    }