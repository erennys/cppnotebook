#include <iostream>
#include <string>

using namespace std;

class Otomobil {
	
	public:
		string renk;
};


int main() {
	
	Otomobil otomobil1;
	Otomobil otomobil2, otomobil3;
	
	otomobil1.renk = "siyah";
	otomobil2.renk = "yesil";
	otomobil3.renk = "mavi";
	
	cout << "otmobil1 renk: " << otomobil1.renk << endl;
	cout << "otmobil2 renk: " << otomobil2.renk << endl;
	cout << "otmobil3 renk: " << otomobil3.renk << endl;
	
	return 0;
}
