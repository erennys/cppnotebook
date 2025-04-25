#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

void ogrenciDurumYazdir (Ogrenci ogr) {
	if (ogr.notOrtalama < 50) {
		cout << ogr.isim << " sinifta kaldi!" << endl;
	}
	else {
		cout << ogr.isim << " sinifi gecti, tebrikler!" << endl;
	}
}

int main() {
	
	Ogrenci ogrenci1 = {101,"Ali Kaya",48.5};
	ogrenciDurumYazdir(ogrenci1);
	
	return 0;
}
