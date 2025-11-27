#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah baris Segitiga Pascal: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }

        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";

            val = val * (i - j) / (j + 1);
        }

        cout << endl;
    }
    cout << "\n=========================================\n\n";
    cout << "Nama : Nadila Ristanti\n\n";
    cout << "NIM  : 25104410070\n\n";
    cout << "Prodi: Teknik Informatika - 1B\n\n";
    cout << "=========================================\n";

    return 0;
}