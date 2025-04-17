#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int baslangic,bitis;
	
	cout << "Lütfen baþlangýç deðerini giriniz: ";
	cin >> baslangic;
	cout << "Lütfen bitiþ deðerini giriniz: ";
	cin >> bitis;
	cout << endl;
	
	
	while(baslangic <= bitis ){
			if (baslangic % 7 == 0)
			{
				cout << baslangic << " ";
			}
			
			baslangic++;
	}
	
	cout << endl;
	
	
	return 0;
}
