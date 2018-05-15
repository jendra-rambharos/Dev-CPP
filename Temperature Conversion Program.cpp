//
//Program to convert temperature from Celsius degree 
//units to Fahrenheit degree units:
//Fahrenheit = Celsius * (212 - 32)/100 + 32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int Celsius;
    cout<<"Enter the temperature in Celsius: ";
    cin>>Celsius;
    
    int Fahrenheit;
    Fahrenheit = Celsius * (212 - 32)/100 + 32;
    
    cout<<"Temperature in Fahrenheit is: "<<Fahrenheit<<endl;
    
    system("PAUSE");
    return 0;
}
