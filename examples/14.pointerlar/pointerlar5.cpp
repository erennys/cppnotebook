#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int arr[5] = {10, 20, 30, 40, 50}; 
    int* ptr1 = arr; 
    int* ptr2 = arr + 3; 
 
    cout << "ptr2'nin tuttuğu değer: " << *ptr2 << endl; 
 
    ptr1++;
    ptr2--; 
 
    cout << "ptr1'in tuttuğu değer: " << *ptr1 << endl; 
    cout << "ptr2'nin tuttuğu değer: " << *ptr2 << endl; 
    return 0; 
} 
