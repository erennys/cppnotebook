#include <iostream>
using namespace std;
 
struct Ogrenci {
    int ogrenciNo;
    string isim;  
};
 
void bilgileriYazdir(Ogrenci ogr) {
    cout << "Ogrenci No: " << ogr.ogrenciNo << ", Isim: " << ogr.isim << endl;
}
 
int main() {
    Ogrenci ogrenci1 = {101, "Ahmet"};
    Ogrenci ogrenci2 = ogrenci1;  
 
    ogrenci2.ogrenciNo = 102;
    ogrenci2.isim = "Mehmet";
 
    bilgileriYazdir(ogrenci1);
    bilgileriYazdir(ogrenci2);
 
    return 0;
}
