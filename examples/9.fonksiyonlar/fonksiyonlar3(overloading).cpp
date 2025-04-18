#include <iostream>
using namespace std;

void yazdir(int x) {
    cout << "Tam sayý: " << x << endl;
}

void yazdir(double x) {
    cout << "Ondalýk sayý: " << x << endl;
}

void yazdir(string x) {
    cout << "Metin: " << x << endl;
}

int main() {
    yazdir(5);          // Tam sayý
    yazdir(3.14);       // Ondalýk sayý
    yazdir("Merhaba");  // Metin
    return 0;
}

