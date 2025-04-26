#include <iostream>
using namespace std;

class Araba {
private:
    int hiz;  // Sadece class içinden eriþilebilir

public:
    string marka;  // Her yerden eriþilebilir

    void setHiz(int h) {  // hýz deðerini deðiþtirmek için public fonksiyon
        if (h > 0)
            hiz = h;
    }

    void goster() {
        cout << "Marka: " << marka << ", Hýz: " << hiz << endl;
    }
};

int main() {
    Araba araba1;
    araba1.marka = "BMW";    // ? Public olduðu için doðrudan eriþtik

    // araba1.hiz = 100;    // ? Private olduðu için doðrudan eriþim YASAK!

    araba1.setHiz(120);      // ? Public fonksiyonla hýz deðerini deðiþtirdik
    araba1.goster();

    return 0;
}

