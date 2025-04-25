#include <iostream>
#include <string>
 
 // BU PROGRAM HATA VERÝCEK.
 
using namespace std;
 
struct Ogrenci {
    int ogrenciNo;
    string isim;
};
 
void bilgileriYazdir(Ogrenci* ogr) {
    cout << "Ogrenci No: " << ogr->ogrenciNo << ", Isim: " << ogr->isim << endl;
}
 
int main() {
    // Dinamik bellekten iki öðrenci oluþturuluyor
    Ogrenci* pogrenci1 = new Ogrenci;
    Ogrenci* pogrenci2 = new Ogrenci;
 
    // Deðer atamalarý
    pogrenci1->ogrenciNo = 101;
    pogrenci1->isim = "Ahmet";
 
    pogrenci2 = pogrenci1; 
 
    pogrenci2->ogrenciNo = 102;
    pogrenci2->isim = "Mehmet";
 
    bilgileriYazdir(pogrenci1);
    bilgileriYazdir(pogrenci2);
 
    // Bellek temizleme
    delete pogrenci1;
    delete pogrenci2; 
 
    return 0;
}
