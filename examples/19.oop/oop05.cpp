#include <iostream>
using namespace std;

class Ogrenci {
private:
    int yas;  // Dýþarýdan doðrudan eriþilemez

public:
    void setYas(int y) {
        if (y > 0)
            yas = y;
        else
            cout << "Geçersiz yaþ!" << endl;
    }

    int getYas() {
        return yas;
    }
};

int main() {
    Ogrenci ogrenci1;

    ogrenci1.setYas(20);        // Doðru yaþ atanýyor
    cout << "Öðrenci yaþý: " << ogrenci1.getYas() << endl;

    // ogrenci1.yas = -5;   // ? Private olduðu için hata verir

    return 0;
}

