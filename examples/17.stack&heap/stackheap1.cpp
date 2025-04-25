#include <iostream>
 
void exampleFunction() {
    int a = 10;              // 1
    float b = 5.5;           // 2
    int* ptr1 = new int(20); // 3
    char c = 'X';            // 4
    double* ptr2 = new double(7.8); // 5
 
    delete ptr1; // 6
    delete ptr2; // 7
}
 
int main() {
    exampleFunction();
    return 0;
}


// a,b,c,ptr1,ptr2 stack bellekte ancak *ptr1 ve *ptr2 heap bellekte tutulur.


