#include <iostream>
using namespace std;

class Araba {
public:
    int* hiz;  // hiz artýk bir pointer

    // Constructor: baþlangýçta bellek ayýrýyoruz
    Araba() {
        hiz = new int;   // int için heap'te yer aç
        *hiz = 0;        // baþlangýç deðeri 0
        cout << "Constructor: Hiz olusturuldu." << endl;
    }

    // Destructor: program bitince bellek temizle
    ~Araba() {
        delete hiz;      // heap belleði boþalt
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
    cout << "Arabanýn hýzý: " << araba1.getHiz() << " km/h" << endl;

    return 0;
}

