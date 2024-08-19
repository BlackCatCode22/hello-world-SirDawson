#include <iostream>

using namespace std;

int main()
{
    cout << "\nWelcome to my Warm-up!\n";

    // Create some variables

    int userAge = 0;
    double userAgeDouble = 0.0;
    char userAgeChar = 'x';

    cout << "\nPlease enter your age (whole number): ";
    cin >> userAge;

    cout << "\nPlease enter your age (decimal number): ";
    cin >> userAgeDouble;

    cout << "\nPlease enter your age (single, non-number character): ";
    cin >> userAgeChar;

    cout << "\nYour age as an integer is: \n" << userAge;

    cout << "\nYour age as a decimal is: \n" << userAgeDouble;

    cout << "\nYour age as a single character is: \n" << userAgeChar;

    return 0;
}