#include <iostream>
using namespace std;

class Araba {
public:
    Araba() {
        cout << "Constructor çalýþtý!" << endl;
    }

    ~Araba() {
        cout << "Destructor çalýþtý!" << endl;
    }
};

int main() {
    Araba araba1;  // Nesne oluþturuldu, Constructor çalýþýr

    cout << "Program çalýþýyor..." << endl;

    // Program bittiðinde, araba1 yok olur ve Destructor çalýþýr
    return 0;
}

