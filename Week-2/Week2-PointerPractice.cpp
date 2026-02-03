#include <iostream>
using namespace std;

int main() {
    int a = 10;           // Step 1: Declaring a variable as an integer
    int* p = &a;          // Step 2: Declaring a pointer and points it to the address of variable a
    
    cout << "Variable a: " << a << endl; // Step 3: Checkiing the values of both a and p
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p: " << p << endl;
    cout << "Value at address point p is point to: " << *p << endl;
    cout << "Address of pointer p for clarity sake: " << &p << endl;
    cout << "----------------------------------" << endl;
    //Step 4: Modify variable "a" through the pointer *p
    *p = 20;
    cout << "After changing *p to 20:" << endl;
    cout << "Variable 'a' value is now after pointer *p modificiation: " << a << endl;
    cout << "Verifying pointer *p value: " << *p << endl;
    cout << "Address of a： " << &a << endl;
    cout << "Pointer p's value： " << p << endl;
    return 0;
}