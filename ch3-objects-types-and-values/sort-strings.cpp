#include "std_lib_facilities.h"

int main() {
    cout << "Enter there strings to sort:\n";
    vector<string> input(3);
    for (vector<string>::size_type i = 0; i != input.size(); ++i)
        cin >> input[i];

    sort(input.begin(), input.end());

    cout << "sorted strings:";
    for (vector<string>::size_type i = 0; i != input.size(); ++i)
        cout << ' ' << input[i];

    cout << '\n';
}
