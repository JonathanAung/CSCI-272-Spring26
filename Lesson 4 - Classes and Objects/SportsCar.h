/*
*Name: Tun Tun (Jonathan) Aung
 *Course: CSCI 272 [1]
 *LEsson Number: 4
 *Code Topic: Classes and Objects/Constructors
 *02/28/2026
 */
#include"Car.h"

class SportsCar: public Car { //Defining a new class, a child class call SportsCar with parent class of Car and have access to public and protected members
public:
    SportsCar(string b, string m, int y) : Car(b, m, y) { //ran into some trouble with this due to private and public lcasses mismatch with parameters
    }
    void showStuff(){
        cout << "This is a sports car with this color:  " << color << endl; //color is a protected member of the parent class, so we can access it here but not in main or other files
    }

};