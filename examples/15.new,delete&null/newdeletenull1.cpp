#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kac eleman gireceksiniz? ";
    cin >> n;

    // Dinamik dizi oluþtur
    int* dizi = new int[n];

    // Diziye deðerleri ata
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". sayiyi girin: ";
        cin >> dizi[i];
    }

    // Deðerleri yazdýr
    cout << "Girdiginiz sayilar: ";
    for (int i = 0; i < n; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    // Belleði serbest býrak
    delete[] dizi;

    return 0;
}

