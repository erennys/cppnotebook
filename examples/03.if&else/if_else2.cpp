#include <iostream>
#include <locale.h>

using namespace std;

// Wifi �ifresi �rne�i

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int sifre = 123456;
	int kullaniciInput;
	
	cout << "L�tfen internet �ifresini giriniz: ";
	cin >> kullaniciInput;
	
	if (kullaniciInput == sifre)
	{
		cout << "Wifi a��na ba�land�n�z!" << endl;
	}
	else
	{
		cout << "�ifre yanl��! L�tfen tekrar deneyiniz." << endl;
	}
	
	return 0;
}
