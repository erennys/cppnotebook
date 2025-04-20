#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kac eleman gireceksiniz? ";
    cin >> n;

    // Dinamik dizi olu�tur
    int* dizi = new int[n];

    // Diziye de�erleri ata
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". sayiyi girin: ";
        cin >> dizi[i];
    }

    // De�erleri yazd�r
    cout << "Girdiginiz sayilar: ";
    for (int i = 0; i < n; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    // Belle�i serbest b�rak
    delete[] dizi;

    return 0;
}

