#include <iostream>

using namespace std;

int main() {
	
	for (int i = 20; i <= 40; i++) {
		cout << i << " sayisinin bolenleri: ";
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cout << j << ",";
			}
		}
		cout << endl;
	}
	
	return 0;
}
