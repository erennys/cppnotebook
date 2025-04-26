#include <iostream>
using namespace std;

class Araba {
private:
    int hiz;  // Sadece class i�inden eri�ilebilir

public:
    string marka;  // Her yerden eri�ilebilir

    void setHiz(int h) {  // h�z de�erini de�i�tirmek i�in public fonksiyon
        if (h > 0)
            hiz = h;
    }

    void goster() {
        cout << "Marka: " << marka << ", H�z: " << hiz << endl;
    }
};

int main() {
    Araba araba1;
    araba1.marka = "BMW";    // ? Public oldu�u i�in do�rudan eri�tik

    // araba1.hiz = 100;    // ? Private oldu�u i�in do�rudan eri�im YASAK!

    araba1.setHiz(120);      // ? Public fonksiyonla h�z de�erini de�i�tirdik
    araba1.goster();

    return 0;
}

