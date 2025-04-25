#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir öðrenci için durum yazdýrma:
void ogrenciDurumYazdir(Ogrenci &ogr) {
	if (ogr.notOrtalama < 50) {
		cout << "Durum: " << " sinifta kaldi!" << endl;
	}
	else {
		cout << "Durum: " << " sinifi gecti, tebrikler!" << endl;
	}
}

// Tüm öðrenciler için durum yazdýrma:
void tumOgrencilerDurumYazdir (Ogrenci ogrenciler[], int size) {
	cout << "\n* * Ogrenci Durumlari * *\n";
	for (int i = 0; i < 3; i++) {
		cout << ogrenciler[i].ogrenciNo << " " <<
				ogrenciler[i].isim << " " <<
				ogrenciler[i].notOrtalama << " ";
				ogrenciDurumYazdir(ogrenciler[i]);
				
	}
}

int main() {
	
	Ogrenci ogrenciler[3] = {
		{101,"Ali Kaya",58.5},
		{102,"Elif Demir",45},
		{103,"Kaan Kara",75.3}
	};
	
	tumOgrencilerDurumYazdir(ogrenciler, 3);
	
	return 0;
}
