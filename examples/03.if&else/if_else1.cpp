#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int sicaklik;
	
	cout << "L�tfen s�cakl�k bilgisini giriniz: ";
	cin >> sicaklik;
	
	if (sicaklik >= 35)
	{
		cout << "Ortam s�cak!" << endl;
	}
	else
	{
		cout << "Ortam so�uk!" << endl;
	}
	
	
	return 0;
}
