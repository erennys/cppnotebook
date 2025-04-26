#include <iostream>
using namespace std;

class Araba {
private:
    int hiz;

public:
    // Setter: hýz deðerini deðiþtirir
    void setHiz(int h) {
        if (h >= 0)  // negatif hýz olmasýn diye kontrol
            hiz = h;
    }

    // Getter: hýz deðerini döndürür
    int getHiz() {
        return hiz;
    }
};

int main() {
    Araba araba1;

    araba1.setHiz(120);     // hýz deðiþtiriliyor (set)
    cout << "Arabanýn hizi: " << araba1.getHiz() << endl; // hýz okunuyor (get)

    return 0;
}

