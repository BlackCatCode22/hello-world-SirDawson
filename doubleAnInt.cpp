/*
sD 8/14/24
doubleInt.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    int userInteger = 0;

    cout << "Please enter a number to be doubled: ";
    cin >> userInteger;

    int doubleInt = userInteger * 2;

    cout << "\nThe doubled integer is: " << doubleInt << ".\n\n"
         << "Thanks for doubling. :)";

    return 0;
}