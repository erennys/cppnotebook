#include <iostream>
using namespace std;

int alanHesapla(int x, int y) {
	return x * y;
}

int main(){
	
	int a,b;
	
	cout << "Lutfen ucgenin dik kenarini giriniz: ";
	cin >> a;
	cout << "Lutfen ucgenin tabanini giriniz: ";
	cin >> b;
	
	cout << endl <<  "Ucgenin alani: " << alanHesapla(a,b);	
	
	return 0;
}
