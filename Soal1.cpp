#include <iostream>

using namespace std;

int main() {
    int row, num = 0;

    cout << "Masukkan baris : ";
    cin >> row;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            num++;
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}