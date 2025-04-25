#include <iostream>
using namespace std;

// Struct tanýmý
struct Ogrenci {
    string isim;
    int yas;
};

int main() {
    // 1. Normal struct nesnesi
    Ogrenci ogr1 = {"Elif", 20};

    // 2. Struct pointer'ý
    Ogrenci* ptr = &ogr1;  // ogr1'in adresi ptr'ye atanýyor

    // 3. Pointer ile eriþim (-> operatörü ile)
    cout << "Ýsim: " << ptr->isim << endl;
    cout << "Yaþ: " << ptr->yas << endl;

    // 4. Pointer üzerinden deðer deðiþtirme
    ptr->yas = 21;
    cout << "Yeni Yaþ: " << ogr1.yas << endl;

    return 0;
}

