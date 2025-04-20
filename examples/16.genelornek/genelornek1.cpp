#include <iostream>

using namespace std;

int main() {
	
	int a[5], *p, z;
	
	for (int i = 0; i < 5; i++){
		a[i] = i * i;
	}
	
	p = a;
	z = *(p+1) + *(a+2);
	cout << z;
	
	return 0;
}
