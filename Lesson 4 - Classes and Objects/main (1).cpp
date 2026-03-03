/******************************************************************************
https://www.onlinegdb.com/?dest_fid=#editor_1
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <Car.h>
#include <Person.h>
using namespace std;
int main()
{
    // Car car1;
    
    // car1.startEngine();
    // car1.acclerate();
    
    
    // Person p1;
    // cout << "Enter your name: " ; 
    // cin >> p1.name; 
    // cout << endl; 
    // cout <<"Enter age: ";
    // cin >> p1.age; 
    // cout << endl; 
    // cout << "Enter gender: "; 
    // cin >> p1.gender; 
    
    // p1.name = "Avijit";
    // p1.age = 30;
    // p1.gender = 'M';
    
    // p1.introduce();
    
    Car car1;//default constructor
    Car car2("Honda", "Civic", 2026); //parameterizezd constructor
    Car car3(car2); //copy constructor
    
    Car* pCar1 = new Car; //default constructor 
    Car* pCar2 = new Car("Toyota", "Corolla", 2025); // parameterized constructor
    
    //Car car[20]; //deffault constructor that can take 20 car. 
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1 -> startEngine(); //Because pCar1 is a pointer, so we would need "->" to point to the function 
    pCar2 -> startEngine(); 
    return 0;
}