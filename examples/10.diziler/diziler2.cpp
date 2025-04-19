#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	const int size = 4;
	double sinavNotlari[size];
	double sinavAgirlik[size] = {0.15,0.15,0.30,0.40};
	double agirlikliToplam = 0;
	
	for (int i = 0; i < size;i++) {
		cout << i + 1 << ". s�nav notunu giriniz: ";
		cin >> sinavNotlari[i];
		agirlikliToplam = agirlikliToplam + sinavNotlari[i] * sinavAgirlik[i];
	}
	
	cout << "S�nav notlar�n�n ortalamas�: " << agirlikliToplam << endl;
	
	return 0;
}
