//FunctionDemo - Demonstrate the use of functions
//               by breaking the inner loop of the 
//               NestedDemo program off into it's own
//               function

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//sum sequence - add a sequence of numbers entered from a 
//keyboard until the user enters a negative number.
//return - the summation of numbers entered.

int sumSequence (void)
{
    //loop forever
    int accumulator = 0;
    for(;;)
    {
           // fetch another number
           int value = 0;
           cout << "Enter next number: ";
           cin >> value;
           
           // if it's negative
           if (value < 0)
           {
                     // then exit
                     break;                         
           }
           // otherwise add the number to the accumulator
           accumulator = accumulator + value;
           
    }
    
    return accumulator;
}


int main(int nNumberofArgs, char* pszArgs[])
{
    cout << "This program sums multiple series\n"
         << "of numbers. Terminate each sequence\n"
         << "by entering a negative number.\n"
         << "Terminate the series by entering two\n"
         << "negative numbers in a row.\n";
         
    //accumulate sequences of numbers...
    int accumulatedValue;
    for (;;)
    {
        // sum a sequence of numbers entered from
        // the keyboard
        cout << "Enter next sequence" << endl;
        accumulatedValue = sumSequence();
        
        //terminate the loop if sumSequence() returns a zero
        
        if (accumulatedValue == 0)
        {
             break;
        }
        
        //now output the accumulated result
        cout << "The total is "
             << accumulatedValue
             << "\n"
             << endl;
             
    }
    cout << "Thank you" << endl;
    
    // wait until the user is ready before terminating program
    //to allow the user to see the program results
    system("PAUSE");
    return 0;
}
