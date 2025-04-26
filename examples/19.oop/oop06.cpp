#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    int hiz;

    void bilgiYaz() {
        cout << "Marka: " << marka << ", Hýz: " << hiz << endl;
    }
};

int main() {
    // Pointer ile nesne oluþturma
    Araba* arabaPtr = new Araba();

    // Pointer üzerinden deðer atama
    arabaPtr->marka = "Mercedes";
    arabaPtr->hiz = 220;

    // Pointer üzerinden fonksiyon çaðýrma
    arabaPtr->bilgiYaz();

    // Bellek temizliði
    delete arabaPtr;

    return 0;
}

