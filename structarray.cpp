#include <iostream>
using namespace std;

struct detailAalamat 
{
    string desa;
    string kota;

};

struct Orang
{
    string nama;
    detailAalamat alamat;
    int umur;
};

int main()
{
    Orang mhs[3];
    for( int i = 0; i<= 2; i++)
    {
        cout << "isikan data nama   : ";
        getline(cin , mhs[i].nama);
        cout << "isikan data desa   : ";
        getline(cin , mhs[i].alamat.desa);
        cout << "isikan data kota   : ";
        getline(cin , mhs[i].alamat.kota);
        cout << "isikan data umur   : ";
        cin >> mhs[i].umur;
        cin.ignore();
        cout << endl;
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << "Data Tampil" << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "Desa   : " << mhs[i].alamat.desa << endl;
        cout << "Nama   : " << mhs[i].alamat.kota << endl;
        cout << "Nama   : " << mhs[i].umur << endl;
      
    }
}
