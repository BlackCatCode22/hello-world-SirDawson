/*
sD 8/22/24
largestOfThree.cpp
*/

#include <iostream>
#include <unistd.h>

using namespace std;


// Function declaration and signatures.
void findLargestOfThree(int, int, int);


int main()
{
    cout << "\n***** Welcome to my Largest of Three Program! *****\n";

    // The variables for this program.
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;
    
    cout << "\nEnter the first number: ";
    cin >> firstNum;

    cout << "\nEnter the second number: ";
    cin >> secondNum;

    cout << "\nEnter the third number: ";
    cin >> thirdNum;
    cout << "\n";

    // Invokes the 'findLargestOfThree()' function.
    findLargestOfThree(firstNum, secondNum, thirdNum);

    sleep(5);

    return 0;
}


// Function definition.
void findLargestOfThree(int firstNum, int secondNum, int thirdNum)
{
    int largestNum;

    if(firstNum > secondNum)
        {
            if(firstNum > thirdNum)
            {
                largestNum = firstNum;
            } else
                {  
                    largestNum = thirdNum;
                }
        } else 
            {  
                if(secondNum > thirdNum)
                {
                    largestNum = secondNum;
                } else
                    {  
                        largestNum = thirdNum;
                    }
        }

    // Displays the largest of three numbers.

    cout << "The largest of three is: " << largestNum << ".\n\n"
         << "Thanks for finding out which numbers was the largest out of three! :)\n\n"
         << "***** End of program. Will close automatically in five seconds. *****\n\n";
}