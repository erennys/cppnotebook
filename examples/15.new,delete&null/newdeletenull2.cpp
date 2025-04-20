#include <iostream>

using namespace std;

void func(int *p) {
	if (p != NULL)
		cout << *p << endl;
}

int main() {
	
	int *p = new int;
	*p = 5;
	
	cout << *p << endl;
	delete p;
	
	p = NULL;       //null eklenmesi gerek yoksa program hata verir.
	func(p);
	
	return 0;
}
