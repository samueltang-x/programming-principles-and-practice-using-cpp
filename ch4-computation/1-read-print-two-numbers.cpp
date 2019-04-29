#include "std_lib_facilities.h"

int main() {
    cout << "Enter two numbers: (terminating with | if want to exit)\n";

    double i1, i2;
    while (cin >> i1 >> i2) {
        if ( i1 < i2 ) {
            cout << "the samller value is: " << i1 << '\n';
            cout << "the larger value is: " << i2 << '\n';
        }
        else if ( i1 > i2) {
            cout << "the samller value is: " << i2 << '\n';
            cout << "the larger value is: " << i1 << '\n';
        } else {
            cout << "the numbers are equal\n";
            continue;
        }

        if ( i1 - i2 < 1.0/100 && i1 - i2 > -1.0/100)
            cout << "the numbers are almost equal\n";
    }

    return 0;
}
