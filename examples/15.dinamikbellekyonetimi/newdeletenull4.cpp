#include <iostream>

using namespace std;

int main() {
	
	int n;
	cout << "Lutfen kac adet tamsayi icerecegini yaziniz: ";
	cin >> n;	
	
	int *p = new int[n];
	
	for(int i = 0; i < n; i++) {
		cout << i + 1 << ".sayiyi giriniz: ";
		cin >> p[i];
	}
	
	int sum = 0;
	
	for(int i = 0; i < n; i++) {
		sum += p[i];
	}
	
	cout << "sum: " << sum << endl;
	delete[] p;
	
	return 0;
}
