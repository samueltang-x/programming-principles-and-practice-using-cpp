#include "std_lib_facilities.h"

int main() {
    cout << "Enter the opration:\n";

    string operation;
    double operand1, operand2, result;
    cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus")
        result = operand1 + operand2;
    else if (operation == "-" || operation == "minus")
        result = operand1 - operand2;
    else if (operation == "*" || operation == "mul")
        result = operand1 * operand2;
    else if (operation == "/" || operation == "div")
        result = operand1 / operand2;
    else {
        cout << "unknown operation.\n";
        return 1;
    }

    cout << "The resule is: " << result << '\n';

    return 0;
}
