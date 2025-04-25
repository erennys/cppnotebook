#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1,sayi2,islem;
	
	cout << "--Hesap Makinesi--" << endl;
	cout << "1.Ýþlem: Toplama" << endl;
	cout << "2.Ýþlem: Çýkarma" << endl;
	cout << "3.Ýþlem: Çarpma" << endl;
	cout << "4.Ýþlem: Bölme" << endl;
	cout << "5.Ýþlem: Mod Alma" << endl;
	cout << "------------------\n";
	
	cout << "\nLütfen yapýlacak iþlemi seçiniz: ";
	cin >> islem;
	
	cout << "\nLütfen 1.sayýyý giriniz: ";
	cin >> sayi1;
	
	cout << "Lütfen 2.sayýyý giriniz: ";
	cin >> sayi2;
	cout << endl;
	
	if (islem == 1)
	{
		cout << "Toplam iþlemi sonucu: " << sayi1 + sayi2 << endl;
	}
	else if (islem == 2)
	{
		cout << "Çýkarma iþlemi sonucu: " << sayi1 - sayi2 << endl;
	}
	else if (islem == 3)
	{
		cout << "Çarpma iþlemi sonucu: " << sayi1 * sayi2 << endl;
	}
	else if (islem == 4)
	{
		cout << "Bölme iþlemi sonucu: " << sayi1 / sayi2 << endl;
	}
	else if (islem == 5)
	{
		cout <<"Mod alma iþlemi sonucu: " << sayi1 % sayi2 << endl;
	}
	else 
	{
		cout << "Geçersiz iþlem! Lütfen geçerli bir iþlem giriniz.";
	}
	
	return 0;
}
