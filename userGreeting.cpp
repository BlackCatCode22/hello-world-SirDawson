/*
sD 8/14/24
greeting.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    string firstName;
    string lastName;

    cout << "\nHey there! What's your name?\n\n"
         << "Type in your first name: ";
    cin >> firstName;

    cout << "\nNow, type in your last name: ";
    cin >> lastName;

    cout << "\nHello, " << firstName << " " << lastName << "! I hope you've been having a nice day so far! :)\n\n";

    return 0;
}