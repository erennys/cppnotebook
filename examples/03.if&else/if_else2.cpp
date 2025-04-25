#include <iostream>
#include <locale.h>

using namespace std;

// Wifi þifresi örneði

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int sifre = 123456;
	int kullaniciInput;
	
	cout << "Lütfen internet þifresini giriniz: ";
	cin >> kullaniciInput;
	
	if (kullaniciInput == sifre)
	{
		cout << "Wifi aðýna baðlandýnýz!" << endl;
	}
	else
	{
		cout << "Þifre yanlýþ! Lütfen tekrar deneyiniz." << endl;
	}
	
	return 0;
}
