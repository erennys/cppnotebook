#include <iostream>
using namespace std;

// Üst sýnýf (Base Class)
class Arac {
protected:
    string marka;
    string model;
    int yil;

public:
    Arac(string m, string mo, int y) : marka(m), model(mo), yil(y) {}

    virtual void bilgileriGoster() {
        cout << "Marka: " << marka << ", Model: " << model << ", Yýl: " << yil << endl;
    }
};

// Alt sýnýf (Derived Class)
class Araba : public Arac {
private:
    int kapisayisi;

public:
    Araba(string m, string mo, int y, int kapi) : Arac(m, mo, y), kapisayisi(kapi) {}

    void bilgileriGoster() override {
        cout << "Araba -> Marka: " << marka << ", Model: " << model << ", Yýl: " << yil
             << ", Kapi Sayisi: " << kapisayisi << endl;
    }
};

class Motosiklet : public Arac {
private:
    bool kaskDahilMi;

public:
    Motosiklet(string m, string mo, int y, bool kask) : Arac(m, mo, y), kaskDahilMi(kask) {}

    void bilgileriGoster() override {
        cout << "Motosiklet -> Marka: " << marka << ", Model: " << model << ", Yýl: " << yil
             << ", Kask Dahil: " << (kaskDahilMi ? "Evet" : "Hayýr") << endl;
    }
};

// Kiralama iþlemi fonksiyonu
void araciKirala(Arac* arac) {
    cout << "Arac kiralaniyor..." << endl;
    arac->bilgileriGoster();
    cout << "Ýþlem tamamlandý!" << endl << endl;
}

int main() {
    // Nesneler oluþturuluyor
    Araba araba1("Toyota", "Corolla", 2022, 4);
    Motosiklet moto1("Yamaha", "MT-07", 2021, true);

    // Pointer kullanarak polymorphism örneði
    araciKirala(&araba1);
    araciKirala(&moto1);

    return 0;
}

