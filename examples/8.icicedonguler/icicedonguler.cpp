#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int index;
	
	cout << "L�tfen bir say� giriniz: ";
	cin >> index;
	cout << endl;
	
	for (int i = 1; i <= index; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
