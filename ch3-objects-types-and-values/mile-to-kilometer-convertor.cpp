#include "std_lib_facilities.h"

int main() {
    static double mile_to_kilometer_factor = 1.609;

    cout << "Enter the number in miles you want to convert to kilometers:\n";
    double input_miles;
    cin >> input_miles;

    cout << input_miles << " miles = " << input_miles * mile_to_kilometer_rate << " kilometers.\n";

    return 0;
}
