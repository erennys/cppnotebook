#include <iostream>
using namespace std;

struct Ogrenci {
    string isim;
    int yas;

    void yazdir() {
        cout << "Ýsim: " << isim << ", Yaþ: " << yas << endl;
    }
};

int main() {
    Ogrenci ogr1 = {"Kemal", 22};
    ogr1.yazdir();  // direkt struct içindeki fonksiyon çaðrýlýr
    return 0;
}

