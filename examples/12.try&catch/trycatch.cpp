#include <iostream>
using namespace std;

int main() {
    try {
        int a = 5, b = 0;
        if (b == 0)
            throw "Sýfýra bölme hatasý!";
        cout << a / b;
    }
    catch (const char* mesaj) {
        cout << "Hata: " << mesaj << endl;
    }
}

