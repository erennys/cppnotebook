#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int arr1[3][2];
	int arr2[3][2];
	int toplam[3][2] = {0};
	
	cout << "L�tfen birinci matrisin elemanlar�n� giriniz: " << endl;	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "[" << i << "]" << "[" << j << "]" << ". eleman� giriniz: ";
			cin >> arr1[i][j];
		}
	}
	
	cout << "L�tfen ikinci matrisin elemanlar�n� giriniz: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "[" << i << "]" << "[" << j << "]" << ". eleman� giriniz: ";
			cin >> arr2[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			toplam[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
		
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << toplam[i][j] << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
