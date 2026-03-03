/*
 *Name: Tun Tun (Jonathan) Aung
 *Course: CSCI 272 [1]
 *LEsson Number: 4
 *Code Topic: Classes and Objects/Constructors
 *02/28/2026
 */

//#include "Car.h" //Include the header file for the Car class, so we can use it in this file.
//Note that we do not need to include iostream and string since they are brought along via the Car.h
#include "SportsCar.h"
int main() {
    Car car1; //Default constructor
    Car car2("Honda", "Civic?" , 2022); //Paramterized constructor
    Car car3(car2); //Copy constructor copying car2 data members
    Car car[20]; //Array of 20 Car objects, all of them will inherit default constructor's data member

    car1.startEngine(); //Testing, this should work since its public
    car2.startEngine();
    car3.startEngine();

    Car* pCar1 = new Car;
    Car* pCar2 = new Car("Tesla", "X", 2022);

    pCar1->startEngine(); //-> is a pointer operator since pCar1 is a pointer, we use -> to access the function of the class.
    pCar2->startEngine();


    //Destructor is automatically called when the object goes out of scope like car1, car2, and car3
    //But pCar1 and pCar2 are pointers and they are not subject to automatic destructions
    delete pCar1; //syntax to deconstruct pointer objects is delele pointerName;
    delete pCar2;

    cout << "\n ------- SportsCar Example ------- \n" << endl;
    SportsCar sc1("Ferrari", "F8", 2020); //Testing parameterized constructor of child class.
    sc1.startEngine(); //Inherited function from Car class, this should work since its public
    sc1.showStuff(); //This should work since its a function in the SportsCar and color is a protected member from the parent

return 0;
}

/*
 *Reflections:
 *1. Practice constructors, creating objects, how to utilize them, understanding whats accessible and whats not
 *   through public, private and protected access specifiers.
 *2. Learned how to deconstruct pointer objects using delete keywords
 *3. Consolidated my understanding of classes and objects, e.g. learn when is default constructor set up even without us creating one
 *4. Learned parameter constructor and copy constructor
 *5. I tried to include both Car.h and SportsCar.h but it caused some issues with the constructors, so I just included SportsCar.h since it already includes Car.h
 *   the error says its redefinition of Car class. (Which was pretty direct and easy to figure out

 Difficulties:
 1. Remembering syntax and going and back and forth between the header files and the main files
 2. Pointer syntax was a little bit diffcult to grasp but it made sense after trying a few times

 Research:
 1. Had to look up how to deconstruct pointer objects using delete keyword, I tried to ~pCar1(); but that didn't work

 AI Usage:
 1. Used AI to understand the concept and their differences, I learn better with analogy so for public, private and protected, I was given a netflix account example

 What I Learned:
 1. Foundational Grasp on how class and object works.
 */



