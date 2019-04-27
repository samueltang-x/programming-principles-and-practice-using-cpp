#include "std_lib_facilities.h"

int main() {
    cout << "Enter two integers:\n";

    int val1, val2;
    cin >> val1 >> val2;

    cout << "the smaller:\t" << min(val1, val2) << '\n';
    cout << "the larger:\t" << max(val1, val2) << '\n';
    cout << "the sum:\t" << val1 + val2 << '\n';
    cout << "the difference:\t" << val1 - val2 << '\n';
    cout << "the product:\t" << val1 * val2 << '\n';
    cout << "the ratio:\t" << val1 / val2 << '\n';
}
