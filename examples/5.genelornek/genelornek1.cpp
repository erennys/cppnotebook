#include <iostream>
#include <locale.h>

using namespace std;

// Kullanc�dan �� tamsay� giri�i alan ve bu girdiler aras�ndaki en k�����n� bulan bir program yaz�n.

int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	int sayi1, sayi2, sayi3;
	
	cout << "L�tfen girmek istedi�iniz 3 tam say�y� s�ras�yla giriniz." << endl;
	cout << "1.say�: ";
	cin >> sayi1;
	cout << "2.say�: ";
	cin >> sayi2;
	cout << "3.say�: ";
	cin >> sayi3;
	cout << endl;
	
	if (sayi1 < sayi2 && sayi1 < sayi3)
	{
		cout << "Girdi�iniz say�lar aras�ndaki en k���k say�: " << sayi1 << endl;
	}
	else if (sayi2 < sayi1 && sayi2 < sayi3)
	{
		cout << "Girdi�iniz say�lar aras�ndaki en k���k say�: " << sayi2 << endl;
	}
	else if (sayi3 < sayi1 && sayi3 < sayi2)
	{
		cout << "Girdi�iniz say�lar aras�ndaki en k���k say�: " << sayi3 << endl;
	}
	else if (sayi1 == sayi2 && sayi1 == sayi3)
	{
		cout << "Girdi�iniz t�m say�lar ayn�! Bu say�lar aras�nda k���kl�k s�ralamas� yap�lamaz.";
	}
	
	return 0;
}
