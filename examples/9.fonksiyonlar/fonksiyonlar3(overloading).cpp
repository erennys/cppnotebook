#include <iostream>
using namespace std;

void yazdir(int x) {
    cout << "Tam say�: " << x << endl;
}

void yazdir(double x) {
    cout << "Ondal�k say�: " << x << endl;
}

void yazdir(string x) {
    cout << "Metin: " << x << endl;
}

int main() {
    yazdir(5);          // Tam say�
    yazdir(3.14);       // Ondal�k say�
    yazdir("Merhaba");  // Metin
    return 0;
}

