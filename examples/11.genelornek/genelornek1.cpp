#include <iostream>

using namespace std;

int main() {
	
	int sayi;
	cout << "Lutfen sayi giriniz: ";
	cin >> sayi;
	
	for (int i = 1; i <= sayi; i++)
	{
		int sayac = 0;
		
		for (int j = 0; j <= i; j++)
		{
			if (i % j == 0)
			{
				sayac++;
			}
			
			if (sayac > 2)
			{
				break;
			}
		}
		
		if (sayac == 2)
		{
			cout << i << ",";
		}
	}
	
	return 0;
}
