#include "std_lib_facilities.h"

int main() {
    cout << "Enter a number: (terminating with | if want to exit)\n";

    double smallest{0}, largest{0}, temp;
    while (cin >> temp) {
        if ( temp < smallest ) {
            smallest = temp;
            cout << temp << ": the samllest so far\n";
        } else if ( temp > largest ) {
            largest = temp;
            cout << temp << ": the largest so far\n";
        } else {
            cout << temp << '\n';
        }
    }

    return 0;
}
