#include <iostream>
using namespace std;

int main() {
    try {
        int a = 5, b = 0;
        if (b == 0)
            throw "S�f�ra b�lme hatas�!";
        cout << a / b;
    }
    catch (const char* mesaj) {
        cout << "Hata: " << mesaj << endl;
    }
}

