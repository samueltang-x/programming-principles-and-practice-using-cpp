#include "std_lib_facilities.h"

int main() {
    cout << "Enter a integer:\n";
    int input;
    cin >> input;

    cout << "The value " << input
        << " is an " << (input % 2 ? "old" : "even") << " number.\n";

    return 0;
}
