#include <iostream>
using namespace std; 

class Person{
    public:
        string name;
        int age;
        char gender;
    public:
        void introduce(){
            cout << "Hello, I'm " << name << ". Age: " << age << endl; 
            if (gender == 'M' ){
                cout << " I am a Male." << endl; 
            } else if (gender == 'F') {
                cout << " I am a Female." << endl; 
            } else {
                cout << " Gender unspecified." << endl;
            }
        }
};