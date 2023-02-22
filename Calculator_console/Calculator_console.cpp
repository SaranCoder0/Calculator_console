// Calculator_console.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{
    double a, b, result;
    char oper = '+';
    
    calculator c;
    
    cout <<"            " << "Calculator" << endl;
    cout << endl;
    
    cout << "format : a (+ or - or * or / or %)" << endl;
    cin >> a >> oper >> b;
    result = c.calculate(a, oper, b);
    cout << "The calculated value is : " << result;
    return 0;
}