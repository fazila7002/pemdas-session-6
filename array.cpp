#include <iostream>
using namespace std;

int main(){

    int dataku[5] = {10,20,30,40,50};
    int datamu[5];

    cout << "isi data kedua : " << dataku[1] << endl;

    dataku[1] = 200;

    cout << "isi data kedua setelah dirubah : " << dataku[1] << endl;

    cout << "isikan data pertama : ";
    cin >> datamu[0];
    cout << "isikan data kedua : ";
    cin >> datamu[1];
    cout << "isikan data ketiga : ";
    cin >> datamu[2];
    cout << "isikan data keempatt : ";
    cin >> datamu[3];
    cout << "isikan data kemlima : ";
    cin >> datamu[4];
    cout << endl;


    cout << "data pertamaa = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "datakelima = " << datamu[4] << endl;
    cout << endl;

    cout << "input array menggunakan for " << endl;

    for (int i = 0; i <=4; i++)
    {
        cout << "isikan data ke-" << (i =1) << " : " ;
        cin >> datamu[i];

    }
    cout << endl;

    cout << "tampil data array menggunakan for" << endl;
 
}