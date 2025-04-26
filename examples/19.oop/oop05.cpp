#include <iostream>
using namespace std;

class Ogrenci {
private:
    int yas;  // D��ar�dan do�rudan eri�ilemez

public:
    void setYas(int y) {
        if (y > 0)
            yas = y;
        else
            cout << "Ge�ersiz ya�!" << endl;
    }

    int getYas() {
        return yas;
    }
};

int main() {
    Ogrenci ogrenci1;

    ogrenci1.setYas(20);        // Do�ru ya� atan�yor
    cout << "��renci ya��: " << ogrenci1.getYas() << endl;

    // ogrenci1.yas = -5;   // ? Private oldu�u i�in hata verir

    return 0;
}

