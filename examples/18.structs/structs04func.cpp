#include <iostream>
using namespace std;

struct Ogrenci {
    string isim;
    int yas;
};

// Fonksiyon struct'ý parametre olarak alýr
void bilgileriYazdir(Ogrenci o) {
    cout << "Ýsim: " << o.isim << ", Yaþ: " << o.yas << endl;
}

int main() {
    Ogrenci ogr1 = {"Ayþe", 21};
    bilgileriYazdir(ogr1);
    return 0;
}

