#include <iostream>
using namespace std;

int birinciDerecePolinom(int a, int x, int b) {
    return a * x + b;
}

int main() {
    int hesaplama = birinciDerecePolinom(1, 1, 1);
    cout << hesaplama << endl;
    return 0;
}
