#include <iostream>

using namespace std;

int main() {
    int angka, jumlah = 0; 

    cout << "Masukkan angka : ";
    cin >> angka;

    if(angka < 0) {
        cout << angka << " merupakan bilangan negatif";
    } 

    while(angka > 0) {
        int sisa = angka % 10;
        jumlah += sisa;

        angka /= 10;
    }

    cout << "Jumlah = " << jumlah; 
}