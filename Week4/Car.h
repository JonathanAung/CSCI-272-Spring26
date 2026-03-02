#include <iostream>
using namespace std; 

class Car{
    private:
        string brand{"BMW"};
        string model = "M3";
        int year {2026};
    
    public:
        
        Car(){ //Default constructor
            
        } 
        
        ~Car() {
            cout << "Car constructor is destroyed" << endl;
        }
        Car(string b, string m , int y) {//parameteried constructor
            brand = b;
            model = m; 
            year = y;
        }
        
        Car(const Car&other){ //Copy constructor
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        void startEngine(){ 
            //cout << "start engine" << endl;
            cout << "Brand: " << brand << " Mode: " << model << " Year: " << year << endl; 
        }
        
        void acclerate(){
            cout << "accelerate engine" << endl;
        }
    
};