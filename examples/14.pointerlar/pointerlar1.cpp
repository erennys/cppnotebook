#include <iostream>

using namespace std;

int main() {
	
	int x = 10;
	
	int *ptr;
	ptr = &x;       // x deðiþkenin adresi
	
	cout << "x degiskeninin adresi: " << &x << endl;
	cout << "ptr pointerinin icinde tutulan adres: " << ptr << endl;
	
	return 0;
}
