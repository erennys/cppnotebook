#include <iostream>

using namespace std;

int ucaginYonBilgileriniHesapla(int x_) {
	// cok fazla sayida matematiksel hesaplama satirlari icerdigini dusun.
	x_ = 34;
	return x_;
}

void ucaginYonBilgileriniHesapla(int *p) {
	// cok fazla sayida matematiksel hesaplama satirlari icerdigini dusun.
	*p = 34;
}

int main() {
	
	int x = 30;
	
	x = ucaginYonBilgileriniHesapla(x);
	
	cout << "yeni yon bilgisi: " << x << endl;
	
	int y = 30;
	int *p;
	p = &y;
	
	ucaginYonBilgileriniHesapla(p);
	
	cout << "yeni yon bilgisi: " << y << endl;
	
	return 0;
}
