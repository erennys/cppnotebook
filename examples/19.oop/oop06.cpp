#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    int hiz;

    void bilgiYaz() {
        cout << "Marka: " << marka << ", H�z: " << hiz << endl;
    }
};

int main() {
    // Pointer ile nesne olu�turma
    Araba* arabaPtr = new Araba();

    // Pointer �zerinden de�er atama
    arabaPtr->marka = "Mercedes";
    arabaPtr->hiz = 220;

    // Pointer �zerinden fonksiyon �a��rma
    arabaPtr->bilgiYaz();

    // Bellek temizli�i
    delete arabaPtr;

    return 0;
}

