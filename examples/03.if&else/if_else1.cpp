#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int sicaklik;
	
	cout << "Lütfen sýcaklýk bilgisini giriniz: ";
	cin >> sicaklik;
	
	if (sicaklik >= 35)
	{
		cout << "Ortam sýcak!" << endl;
	}
	else
	{
		cout << "Ortam soðuk!" << endl;
	}
	
	
	return 0;
}
