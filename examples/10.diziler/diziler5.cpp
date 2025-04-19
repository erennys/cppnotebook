#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	cout << "Sayýlarý giriniz: ";
	cout << endl;
	
	int dizi[4];
	
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ".nci sayýyý giriniz: ";
		cin >> dizi[i];
	}
	
	for (int i = 3; i >= 0; i--) {
		cout << dizi[i] << " ";
	}
	
	return 0;
}
