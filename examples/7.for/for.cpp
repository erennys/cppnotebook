#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int index,faktoriyel;
	
	cout << "Faktoriyelini hesaplamak istediðiniz sayý: ";
	cin >> index;
	
	faktoriyel = 1;
	
	for (int i = 1; i <= index; i++) {
		faktoriyel = faktoriyel * i;
	}
	
	cout << "\n";
	cout << "Faktoriyel: " << faktoriyel;
	
	return 0;
}
