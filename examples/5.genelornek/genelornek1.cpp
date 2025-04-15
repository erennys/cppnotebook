#include <iostream>
#include <locale.h>

using namespace std;

// Kullancýdan üç tamsayý giriþi alan ve bu girdiler arasýndaki en küçüðünü bulan bir program yazýn.

int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	int sayi1, sayi2, sayi3;
	
	cout << "Lütfen girmek istediðiniz 3 tam sayýyý sýrasýyla giriniz." << endl;
	cout << "1.sayý: ";
	cin >> sayi1;
	cout << "2.sayý: ";
	cin >> sayi2;
	cout << "3.sayý: ";
	cin >> sayi3;
	cout << endl;
	
	if (sayi1 < sayi2 && sayi1 < sayi3)
	{
		cout << "Girdiðiniz sayýlar arasýndaki en küçük sayý: " << sayi1 << endl;
	}
	else if (sayi2 < sayi1 && sayi2 < sayi3)
	{
		cout << "Girdiðiniz sayýlar arasýndaki en küçük sayý: " << sayi2 << endl;
	}
	else if (sayi3 < sayi1 && sayi3 < sayi2)
	{
		cout << "Girdiðiniz sayýlar arasýndaki en küçük sayý: " << sayi3 << endl;
	}
	else if (sayi1 == sayi2 && sayi1 == sayi3)
	{
		cout << "Girdiðiniz tüm sayýlar ayný! Bu sayýlar arasýnda küçüklük sýralamasý yapýlamaz.";
	}
	
	return 0;
}
