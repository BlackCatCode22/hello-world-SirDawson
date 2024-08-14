/*
sD 8/14/24
sumInts.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    int userInteger1 = 0;
    int userInteger2 = 0;

    cout << "Please enter a number: ";
    cin >> userInteger1;
    
    cout << "\nPlease enter another number: ";
    cin >> userInteger2;

    int sum = userInteger1 + userInteger2;

    cout << "\nThe sum of these two numbers is: " << sum << ".\n\n"
         << "Thanks for adding. :)";

    return 0;
}