#include <iostream>
using namespace std;

struct Ogrenci {
    string isim;
    int yas;
};

// Fonksiyon struct'� parametre olarak al�r
void bilgileriYazdir(Ogrenci o) {
    cout << "�sim: " << o.isim << ", Ya�: " << o.yas << endl;
}

int main() {
    Ogrenci ogr1 = {"Ay�e", 21};
    bilgileriYazdir(ogr1);
    return 0;
}

