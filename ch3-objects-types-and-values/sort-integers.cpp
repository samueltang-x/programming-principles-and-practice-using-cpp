#include "std_lib_facilities.h"

int main() {
    cout << "Enter there integers to sort:\n";
    vector<int> input(3);
    for (vector<int>::size_type i = 0; i != input.size(); ++i)
        cin >> input[i];

    sort(input.begin(), input.end());

    cout << "sorted values:";
    for (vector<int>::size_type i = 0; i != input.size(); ++i)
        cout << ' ' << input[i];

    cout << '\n';
}
