#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1,sayi2,islem;
	
	cout << "--Hesap Makinesi--" << endl;
	cout << "1.��lem: Toplama" << endl;
	cout << "2.��lem: ��karma" << endl;
	cout << "3.��lem: �arpma" << endl;
	cout << "4.��lem: B�lme" << endl;
	cout << "5.��lem: Mod Alma" << endl;
	cout << "------------------\n";
	
	cout << "\nL�tfen yap�lacak i�lemi se�iniz: ";
	cin >> islem;
	
	cout << "\nL�tfen 1.say�y� giriniz: ";
	cin >> sayi1;
	
	cout << "L�tfen 2.say�y� giriniz: ";
	cin >> sayi2;
	cout << endl;
	
	if (islem == 1)
	{
		cout << "Toplam i�lemi sonucu: " << sayi1 + sayi2 << endl;
	}
	else if (islem == 2)
	{
		cout << "��karma i�lemi sonucu: " << sayi1 - sayi2 << endl;
	}
	else if (islem == 3)
	{
		cout << "�arpma i�lemi sonucu: " << sayi1 * sayi2 << endl;
	}
	else if (islem == 4)
	{
		cout << "B�lme i�lemi sonucu: " << sayi1 / sayi2 << endl;
	}
	else if (islem == 5)
	{
		cout <<"Mod alma i�lemi sonucu: " << sayi1 % sayi2 << endl;
	}
	else 
	{
		cout << "Ge�ersiz i�lem! L�tfen ge�erli bir i�lem giriniz.";
	}
	
	return 0;
}
