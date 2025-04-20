#include <iostream>

using namespace std;

// pointerlar ile diziler arasindaki iliski

int main() {
	
	int arr[] = {8,12,20};
	
	int *p;
	p = arr;  
	
	cout << p << endl;
	cout << arr << endl;
	
	cout << arr[0] << endl;
	cout << *p << endl;
	cout << *(p+1) << endl;
	cout << *(p+2) << endl;
	
	*(p+2) = 22;
	cout << *(p+2) << endl;
	cout << arr[2] << endl;
	
	// adressler ileri seviye bilgi
	cout << p << endl;
	cout << (p+1) << endl;
	
	return 0;
}
