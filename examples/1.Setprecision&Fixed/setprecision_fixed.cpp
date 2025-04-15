#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    double deger = 3.14159265;
 
    // 1) setprecision(4) (fixed olmadan)
    cout << setprecision(4) << deger << endl;
 
    // 2) fixed + setprecision(4)
    cout << fixed << setprecision(4) << deger << endl;
 
    return 0;
}
