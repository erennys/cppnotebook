#include <iostream>
using namespace std;

// �nce struct tan�m� yap�l�r
struct Ogrenci {
    string isim;
    int yas;
    double ortalama;
};

int main() {
    // 3 elemanl� Ogrenci dizisi tan�mlan�yor
    Ogrenci ogrenciler[3];

    // ��renci bilgileri atan�yor
    ogrenciler[0] = {"Ahmet", 20, 3.5};
    ogrenciler[1] = {"Zeynep", 21, 3.8};
    ogrenciler[2] = {"Mehmet", 19, 2.9};

    // Bilgileri ekrana yazd�r
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". ��renci: " << ogrenciler[i].isim 
             << ", Ya�: " << ogrenciler[i].yas 
             << ", Ortalama: " << ogrenciler[i].ortalama << endl;
    }

    return 0;
}

