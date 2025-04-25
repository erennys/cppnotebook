#include <iostream>
using namespace std;

// Struct tan�m�
struct Ogrenci {
    string isim;
    int yas;
};

int main() {
    // 1. Normal struct nesnesi
    Ogrenci ogr1 = {"Elif", 20};

    // 2. Struct pointer'�
    Ogrenci* ptr = &ogr1;  // ogr1'in adresi ptr'ye atan�yor

    // 3. Pointer ile eri�im (-> operat�r� ile)
    cout << "�sim: " << ptr->isim << endl;
    cout << "Ya�: " << ptr->yas << endl;

    // 4. Pointer �zerinden de�er de�i�tirme
    ptr->yas = 21;
    cout << "Yeni Ya�: " << ogr1.yas << endl;

    return 0;
}

