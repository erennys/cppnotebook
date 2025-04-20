#include <iostream>

using namespace std;

void degistir(int deger) {
	deger = deger * 5;
	cout << "deger: " << deger << endl;
}

int main() {
	
	int sayi = 5;
	degistir(sayi);
	cout << "Sayi: " << sayi << endl;
	
	return 0;
} 
