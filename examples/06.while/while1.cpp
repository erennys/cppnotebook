#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int baslangic,bitis;
	
	cout << "L�tfen ba�lang�� de�erini giriniz: ";
	cin >> baslangic;
	cout << "L�tfen biti� de�erini giriniz: ";
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
