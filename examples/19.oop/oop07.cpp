#include <iostream>
using namespace std;

class Araba {
public:
    Araba() {
        cout << "Constructor �al��t�!" << endl;
    }

    ~Araba() {
        cout << "Destructor �al��t�!" << endl;
    }
};

int main() {
    Araba araba1;  // Nesne olu�turuldu, Constructor �al���r

    cout << "Program �al���yor..." << endl;

    // Program bitti�inde, araba1 yok olur ve Destructor �al���r
    return 0;
}

