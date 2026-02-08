//John Jay CSCI 272(1) Assignment 2
#include <iostream> 
using namespace std;
//Problem 1- Clamp (Template) 
//Scenario : John jay's classroom thermostat can't go below a minimum or above a maximum. if a vlaue goes outside the range, "clamp" it back to range

template <typename T>

T clamp(T value, T low, T high){

    if(value < low){ //if value goes below low, resetting clamp to low
        return low;
    }
    else if (value > high){ //if value goes above high, resetting clamp to high
        return high;
    }
    else{ //otherwise, return value as it is
        return value;
    }
    }

//Problem 2 - Between Check (Template)
//Scenario: you're validating student entries. Some values must be inside a range.

template <typename T>
bool isBetween(T value, T low, T high){
    cout << std::boolalpha; //set the flag to print bool values as true/false
    bool result = (low <= value && value <= high);
    cout << value << " between " << low << " and " << high << "? " << result << endl;
    cout << std::noboolalpha; //reset the flag so it returns to printing 1/0 for bool values.
    return result;
    // cout << value << " between " << low << " and " << high << "? "; // manually ouptting true or false. 
    // if (low <= value && value <= high) {
    //     cout << "true" << endl;
    //     return true;
    // }
    // else {
    //     cout << "false" << endl;
    //     return false;
     }

//Problem 3 - Receipt Calculator (Template + Percent Math) 
//Scenario: A John Jay student buys a snack. You want the final total after:
//                - Tax added
//                - Optional discount subtracted
//                - Optional tip added
template <typename T> 
T receiptTotal( T amount, T taxPercent, T discountPercent , T tipPercent ){
    //taxPercent? so not amount*(1+ taxPercent/100)?? 
    return amount + taxPercent - discountPercent + tipPercent; 

}
    
    int main() {

        //Problem 1: Clamp (template) using different data types

        int intValue = 120;
        double doubleValue = -3.5;
        char charValue = 'z';
        
        int clampedInt = clamp(intValue, 0, 100);
        cout << "Clamped int: " << clampedInt << endl;

        double clampedDouble = clamp(doubleValue, 0.0, 10.0);
        cout << "Clamped double: " << clampedDouble << endl;

        char clampedChar = clamp(charValue, 'a', 'f');
        cout << "Clamped char: " << clampedChar << endl;
        
        cout << endl;

        //Problem 2: Between Check (Template)

        isBetween(7, 1, 10);
        isBetween(12 , 1, 10);
        isBetween('c', 'a', 'f');

        cout << endl;

        //Problem 3: Receipt Calculator (Template + Percent Math)

        cout << "Final Total: $" << receiptTotal(100.0, 8.875, 10.0, 15.0) << endl;
    }   