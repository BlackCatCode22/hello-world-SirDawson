/*
sD 8/14/24
tripleInt.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    int userInteger = 0;

    cout << "Please enter a number to be tripled: ";
    cin >> userInteger;

    int tripleInt = userInteger * 3;

    cout << "\nThe tripled integer is: " << tripleInt << ".\n\n"
         << "Thanks for tripling. :)";

    return 0;
}
