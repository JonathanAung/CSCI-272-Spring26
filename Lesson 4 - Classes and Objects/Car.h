/*
*Name: Tun Tun (Jonathan) Aung
 *Course: CSCI 272 [1]
 *LEsson Number: 4
 *Code Topic: Classes and Objects/Constructors
 *02/28/2026
 */

#include <iostream>
#include <string>
using namespace std;

class Car {
    private: //Private members, I can only use them while in here.
        string brand{"(This is Default:) Volkswagen"}; //you can assign values like this
        string model="(This is default) Polo"; //or the standard way
        int year {2012};

    protected: //protected members, i can use them in here and children classes but not in main or other files unless i call them through a function in this class or its children classes.
        string color{"Red"};
    public: //Public Members, accessible from anywhere.
    //Understand that a constructor has already been created for us by default here but we can create our own constructor to initialize the data members of the class.
    Car() { //Default constructor (No parameters);
    }
    Car(string b, string m, int y) { //Parameterized constructor (Takes parameter, but remember their order and also to assign them properly)
        brand = b;
        model = m;
        year = y;
    }
    Car(const Car&other) { //copy constructor (Exactly what it sounded like it is, it copies the data members of another object of the same class)
        brand = other.brand;
        model = other.model;
        year = other.year;

    }
        void startEngine() { //test functions
            cout << "Started " << brand << "'s engine." << endl;
        }
        void accelerate() {
        //test functions
        cout << "Accelerating Engine" << endl;
    }
        void showInfo() { //Protected members test
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
    }
};