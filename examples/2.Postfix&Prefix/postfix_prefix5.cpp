#include <iostream>

using namespace std;

int main() 
{   
    int x = 7;
    int y = x * 2 + ++x * ++x;
    cout << x << " , " << y;
    
    return 0;
}
