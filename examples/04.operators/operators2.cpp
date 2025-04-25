#include <iostream>

using namespace std;

int main(){
	
	int sayi1, sayi2;
	
	cout << "1.sayiyi giriniz: ";
	cin >> sayi1;
	cout << endl << "2.sayiyi giriniz: ";
	cin >> sayi2;
	
	if (sayi1 >= 0 && sayi2 >= 0){
		cout << "\nHer iki sayiniz da pozitif" << endl;
	}
	else if (sayi1 <= 0 && sayi2 <= 0){
		cout << "\nHer iki sayiniz da negatif" << endl;
	}
	else if (sayi1 < 0 || sayi2 < 0) {
		cout << "\nSayilarinizdan biri negatif" << endl;
	}
	
	return 0;
}
