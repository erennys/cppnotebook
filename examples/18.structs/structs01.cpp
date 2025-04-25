#include <iostream>
using namespace std;

struct Ogrenci {
   int ogrenciNo;
   string isim;
   double notOrtalama;
};

int main() {
    
    // 1. struct tanýmlama yöntemi:
    Ogrenci ogrenci1;
    ogrenci1.ogrenciNo = 100;
    ogrenci1.isim = "Ahmet Yilmaz";
    ogrenci1.notOrtalama = 85.5;
    
    // 2. struct tanýmlama yöntemi:
    Ogrenci ogrenci2 = {102,"Ali Kaya",90.2};  // sýraya uygun yazýlmalý
    
    cout << "ogrenci1: " << ogrenci1.ogrenciNo << " " << ogrenci1.isim << " " << ogrenci1.notOrtalama << endl;
    cout << "ogrenci2: " << ogrenci2.ogrenciNo << " " << ogrenci2.isim << " " << ogrenci2.notOrtalama << endl;

    return 0;
}

