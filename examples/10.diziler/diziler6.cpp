#include <iostream>

using namespace std;

int ortalamaUzeriNotlar(int notlar[], int uzunluk) {
	
	int toplam = 0;
	
	for (int i = 0; i < uzunluk; ++i) {
		toplam += notlar[i];
	}
	
	int ortalama = toplam / uzunluk;
	
	int sayac = 0;
	
	for (int i = 0; i < uzunluk; ++i) {
		if (notlar[i] > ortalama) {
			++sayac;
		}
	}
	return sayac;
}

int main() {
	
	int notlar[] = {85,78,90,66,88,72,95,80,84,77};
	int sonuc = ortalamaUzeriNotlar(notlar, 10);
	cout << "Ortalama uzeri notlar: " << sonuc << endl;
}
