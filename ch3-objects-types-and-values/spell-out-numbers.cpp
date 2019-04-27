#include "std_lib_facilities.h"

int main() {
    vector<string> number_list {"zero", "one", "two", "three", "four"};

    cout << "Enter the spelled-out number:\n";
    string spelled_out_number;
    cin >> spelled_out_number;

    for (vector<string>::size_type i = 0; i != number_list.size(); ++i) {
        if (number_list[i] == spelled_out_number) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << "not a number I know.\n";
    return 0;
}
