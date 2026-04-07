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
    
 
}