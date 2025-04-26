#include <iostream>
using namespace std;

class Araba {
private:
    int hiz;

public:
    // Setter: h�z de�erini de�i�tirir
    void setHiz(int h) {
        if (h >= 0)  // negatif h�z olmas�n diye kontrol
            hiz = h;
    }

    // Getter: h�z de�erini d�nd�r�r
    int getHiz() {
        return hiz;
    }
};

int main() {
    Araba araba1;

    araba1.setHiz(120);     // h�z de�i�tiriliyor (set)
    cout << "Araban�n hizi: " << araba1.getHiz() << endl; // h�z okunuyor (get)

    return 0;
}

