//template 
#include <iostream>
using namespace std;

template <typename T>
T myMax(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    cout << "int: " << myMax(3, 7) << endl;
    cout << "double: " << myMax(3.14, 2.71) << endl;
    cout << "char: " << myMax('a','z') << endl;
    cout << "char: " << myMax('Z','z') << endl;
    
    return 0;
}