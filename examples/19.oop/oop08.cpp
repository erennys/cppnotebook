#include <iostream>
using namespace std;

class Araba {
public:
    int* hiz;  // hiz art�k bir pointer

    // Constructor: ba�lang��ta bellek ay�r�yoruz
    Araba() {
        hiz = new int;   // int i�in heap'te yer a�
        *hiz = 0;        // ba�lang�� de�eri 0
        cout << "Constructor: Hiz olusturuldu." << endl;
    }

    // Destructor: program bitince bellek temizle
    ~Araba() {
        delete hiz;      // heap belle�i bo�alt
        cout << "Destructor: Hiz silindi." << endl;
    }

    void setHiz(int yeniHiz) {
        *hiz = yeniHiz;
    }

    int getHiz() {
        return *hiz;
    }
};

int main() {
    Araba araba1;

    araba1.setHiz(180);
    cout << "Araban�n h�z�: " << araba1.getHiz() << " km/h" << endl;

    return 0;
}

