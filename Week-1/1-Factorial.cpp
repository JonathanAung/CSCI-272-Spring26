/*
 *      Author: MaksiKutrolli
 */

//This example demonstrates how to use functions to calculate the factorial of a number. 
//Using functions in this example promotes code reusability and modularity, allowing us to encapsulate specific tasks
//like calculating the factorial of a number

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to calculate the factorial of a number using iterative approach
// Factorial of a non-negative integer 'n' (denoted as n!) is the product
// of all positive integers less than or equal to 'n'.
int factorial(int n) {
    int result = 1;  //Declaring and initalizing "result" variable to 1
    for (int i = 1; i <= n; i++) {  //Loop from 1 and increment to n
        result *= i; //Multiply result by i in each iteration (Factorial Logic)
    }
    return result; //Return result variable after loop ends.
}

// This is the main function where the program execution starts.
int main() { //main fuunction, the gateway to the program as taught in class
    int num; // integer variable named "num", no initial value assigned

    // Prompt user to input a positive integer
    std::cout << "Enter a positive(non-negative) integer: "; //display message to prompt user for input
    std::cin >> num; //cin object to take user input and store it in "num" variable

    // Calculate the factorial using the factorial function
    int result = factorial(num); //Utilizing the factorial function to calculate factorial of "num" and store it in "result" variable

    // Display the result to the user
    std::cout << "Factorial of " << num << " is: " << result << std::endl; //construct output message displaying the factorial result

    return 0; //Indicates that the program ended successfully
}
