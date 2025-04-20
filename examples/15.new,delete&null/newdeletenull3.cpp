#include <iostream>

using namespace std;

void func() {
	int *p = new int;
	*p = 34;
	p = NULL;
	return p;
}

int main() {
	
	int *ptr;
	ptr = func();
	
	if (ptr != NULL)
	{
		cout << *ptr << endl;
		delete ptr;
	}
	
	return 0;
}
