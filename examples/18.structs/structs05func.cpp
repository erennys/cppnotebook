#include <iostream>
using namespace std;

struct Ogrenci {
    string isim;
    int yas;

    void yazdir() {
        cout << "�sim: " << isim << ", Ya�: " << yas << endl;
    }
};

int main() {
    Ogrenci ogr1 = {"Kemal", 22};
    ogr1.yazdir();  // direkt struct i�indeki fonksiyon �a�r�l�r
    return 0;
}

