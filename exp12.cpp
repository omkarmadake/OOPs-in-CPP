#include <iostream>
using namespace std;
int main() 
{
    char operation;
    double operand1, operand2, result;
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    
    cout << "Enter operand 1: ";
    cin >> operand1;
    cout << "Enter operand 2: ";
    cin >> operand2;
    cout << "Enter the operation number: ";
    cin >> operation;
       
    switch (operation) {
        case '1':
            result = operand1 + operand2;
            cout << "Result: " << result << endl;
            break;
        case '2':
            result = operand1 - operand2;
            cout << "Result: " << result << endl;
            break;
        case '3':
            result = operand1 * operand2;
            cout << "Result: " << result << endl;
            break;
        case '4':
            if (operand2 != 0) {
                result = operand1 / operand2;
                cout << "Result: " << result << endl;
            } 
            else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter a valid operation number." << endl;
    }

    return 0;
}
