#include "std_lib_facilities.h"

int main() {
  cout << "Please enter a number:\n";
  int i;
  cin >> i;
  if (!cin) error("input error.\n");

  cout << "The number is: " << i << '\n';

  return 0;
}
