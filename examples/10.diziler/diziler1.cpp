#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	double sinavNotlari[4];
	double toplam = 0;
	
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". s�nav notunu giriniz: ";
		cin >> sinavNotlari[i];
		toplam = toplam + sinavNotlari[i];
	}
	
	double ortalama = toplam / 4;
	
	cout << "S�nav notlar�n�n ortalamas�: " << ortalama << endl;
}
