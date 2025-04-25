#include <iostream>
using namespace std;

// Önce struct tanýmý yapýlýr
struct Ogrenci {
    string isim;
    int yas;
    double ortalama;
};

int main() {
    // 3 elemanlý Ogrenci dizisi tanýmlanýyor
    Ogrenci ogrenciler[3];

    // Öðrenci bilgileri atanýyor
    ogrenciler[0] = {"Ahmet", 20, 3.5};
    ogrenciler[1] = {"Zeynep", 21, 3.8};
    ogrenciler[2] = {"Mehmet", 19, 2.9};

    // Bilgileri ekrana yazdýr
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". Öðrenci: " << ogrenciler[i].isim 
             << ", Yaþ: " << ogrenciler[i].yas 
             << ", Ortalama: " << ogrenciler[i].ortalama << endl;
    }

    return 0;
}

