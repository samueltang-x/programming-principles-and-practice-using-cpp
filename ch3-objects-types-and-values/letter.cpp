#include "std_lib_facilities.h"

int main() {
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you.\n";

    cout << "Enter the name of another friend you'd like to ask for:\n";
    string friend_name;
    cin >> friend_name;

    cout << "Enter the sex of the friend: ('m' for male and 'f' for female)\n";
    char friend_sex {0};
    cin >> friend_sex;
    cout << "Have you seen " << friend_name << " lately?\n";

    cout << "If you see " << friend_name;
    if ( friend_sex == 'm' )
        cout << " please ask him to call me.\n";
    else if ( friend_sex == 'f' )
        cout << " please ask her to call me.\n";
    else
        cout << " please ask him/her to call me.\n";


    cout << "Enter the age of the recipient:\n";
    int age;
    cin >> age;
    if ( age > 0 and age < 110 )
        cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    else
        simple_error("you're kidding!");

    if ( age < 12 )
        cout << "Next year you will be " << age + 1 << '\n';
    else if ( age == 17 )
        cout << "Next year you will be able to vote.\n";
    else if ( age > 70 )
        cout << "I hope you are enjoying retirement.\n";

    cout << "Your sincerely,\n\nSamuel\n";

    return 0;
}
