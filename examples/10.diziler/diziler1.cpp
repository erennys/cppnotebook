#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	double sinavNotlari[4];
	double toplam = 0;
	
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". sýnav notunu giriniz: ";
		cin >> sinavNotlari[i];
		toplam = toplam + sinavNotlari[i];
	}
	
	double ortalama = toplam / 4;
	
	cout << "Sýnav notlarýnýn ortalamasý: " << ortalama << endl;
}
