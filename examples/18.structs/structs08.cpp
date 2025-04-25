#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

int main() {
	
	int n;      // dizinin sayýsýný belirticek
	
	cout << "Kac ogrenci kaydedilecek?";
	cin >> n;
	cin.ignore();  // yeni satýr hatasýný önlemek için
	
	// heap bellekte ogrenci dizisi olustur
	Ogrenci *ogrenciler = new Ogrenci[n];
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". OgrenciNo: ";
		cin >> ogrenciler[i].ogrenciNo;
		cin.ignore();
		cout << "Isim: ";
		getline(cin, ogrenciler[i].isim);
		cout << "Not ortalamasi: ";
		cin >> ogrenciler[i].notOrtalama;
	}
	
	cout << "\nOgrenci Bilgileri:\n";
	
	for (int i = 0; i < n; i++) {
		cout << ogrenciler[i].ogrenciNo << " "
			 << ogrenciler[i].isim << " "
			 << ogrenciler[i].notOrtalama << endl;
	}
	
	delete[] ogrenciler;
	
	return 0;
}
