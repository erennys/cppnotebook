#include <iostream>

using namespace std;

int main () {
	
	int x = 7;
	int *p = &x;
	int y = *p + 8;
	int *z = &y;
	int w = *z + 5;
	cout << w;
	
	return 0;
}
