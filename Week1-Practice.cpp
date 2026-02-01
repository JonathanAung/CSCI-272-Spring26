#include <iostream> //CSCI 272 - John Jay First week code practice.

double add (double num1, double num2) { //function to add two decimal numbers
    return num1 + num2;
} //
double minus (double num1, double num2) { //function to subtract two decimal numbers
    return num1 - num2;
}
double mult (double num1, double num2) { // function to multiply two decimal numbers
    return num1 * num2;
}
double quotient (double num1, double num2) { //function to divide two decimal numbers and handle division by zero
    if (num2 != 0)
        return num1 / num2;
        else {
            std::cout <<"You're trying to divide by zero" << std::endl;
            return 0.0;
        }
    }
double add(double num1, double num2, double num3) { //function to add three decimal numbers
    return num1 + num2 + num3;
}
string add (string str1, string str2) { //function to concatenate two strings
    return str1 + str2;
}
void printMessage(std::string message = "This is a message to practice default arguments") { //function to print a message with default argument
    std::cout << message << std::endl;
}
int main() {
    std::cout << "Week 1 Practice Code - Jonathan" << std::endl;
    std::cout << "1. Practicing basic math operations through user input and output." << std::endl;
    std::cout << "Enter two decimal numbers to perform addition, subtraction, multiplication, and quotient." << std::endl;
    double num1, num2; //declare two double variables for decimal numbers
    std::cout << "Enter first number for num1:"; //prompt user for first number
    std::cin >> num1; //take user input for num1

    std::cout << "Enter second number for num2:"; //prompt user for second nuumber
    std::cin >> num2; //take user input for num2
    
    std::cout << "add (num1 + num2): " << add(num1, num2) << std::endl;
    std::cout << "minus(num1 - num2): " << minus(num1, num2) << std::endl;
    std::cout << "mult(num1 * num2): " << mult(num1, num2) <<  std::endl;
    std::cout << "quotient(num1 / num2): " << quotient(num1, num2) << std::endl;

    std::cout << "2. Practicing default arguments in functions." << std::endl;

    printMessage(); //call function without argument to use default message (i.e. no argument passed)
    printMessage("This is a custom message passed to the function."); //call function with custom

    std::cout << "3. Practicing what function overloading is" << std::endl;
    std::cout << "add(num1, num2, num3=10.5): " << add(num1, num2, 10.5) << std::endl; //call add function with three decimal numbers
    std::cout << "add(str1, str2): " << add("Hello, ", "World!") << std::endl; //call add function with two strings
    return 0;

}

