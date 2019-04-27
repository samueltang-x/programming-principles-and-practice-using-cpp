#include "std_lib_facilities.h"

int main() {
    cout << "Enter the opration:\n";

    string operation;
    double oprand1, oprand2, result;
    cin >> operation >> oprand1 >> oprand2;

    if (operation == "+" || operation == "plus")
        result = oprand1 + oprand2;
    else if (operation == "-" || operation == "minus")
        result = oprand1 - oprand2;
    else if (operation == "*" || operation == "mul")
        result = oprand1 * oprand2;
    else if (operation == "/" || operation == "div")
        result = oprand1 / oprand2;
    else {
        cout << "unknown operation.\n";
        return 1;
    }

    cout << "The resule is: " << result << '\n';

    return 0;
}
