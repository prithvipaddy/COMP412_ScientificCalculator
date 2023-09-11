#include <iostream>
#include <cmath>

#include "Prithvi_ScientificCalc.h"

void Input::input()
{
    std::cout << "These are the choices for calculation:- " <<
    "\n1. Addition" <<
    "\n2. Subtraction" <<
    "\n3. Multiplication" <<
    "\n4. Division" <<
    "\n5. Percentage" <<
    "\n6. Square root" <<
    "\n7. Square" <<
    "\n8. Power (x^y)" <<
    "\n9. ln" <<
    "\n10. Log" <<
    "\n\nAny other input to exit." <<
    "\n\n Please enter the serial number for calculation: "
    << std::endl;
    std::cin >> in;
    switch(in)
    {
        case 1:
        {
            std::cout << "Enter numbers to add: " << std::endl;
            std::cin >> x;
            std::cin >> y;
            add();
            break;
        }
        case 2:
        {
            std::cout << "Enter numbers to subtract: " << std::endl;
            std::cin >> x;
            std::cin >> y;
            subtract();
            break;
        }
        case 3:
        {
            std::cout << "Enter numbers to multiply: " << std::endl;
            std::cin >> x;
            std::cin >> y;
            mult();
            break;
        }
        case 4:
        {
            std::cout << "Enter numbers to divide: " << std::endl;
            std::cin >> x;
            std::cin >> y;
            div();
            break;
        }
        case 5:
        {
            std::cout << "Enter numbers for percentage: " << std::endl;
            std::cin >> x;
            std::cin >> y;
            perc();
            break;
        }
        case 6:
        {
            std::cout << "Enter number for square root: " << std::endl;
            std::cin >> x;
            root();
            break;
        }
        case 7:
        {
            std::cout << "Enter number for square: " << std::endl;
            std::cin >> x;
            square();
            break;
        }
        case 8:
        {
            std::cout << "Enter numbers for power: " << std::endl;
            std::cin >> x;
            std::cin >> y;
            power();
            break;
        }
        case 9:
        {
            std::cout << "Enter number for ln: " << std::endl;
            std::cin >> x;
            ln();
            break;
        }
        case 10:
        {
            std::cout << "Enter number for log: " << std::endl;
            std::cin >> x;
            logarithm();
            break;
        }
        default:
        {
            std::cout << "Exiting..." << std::endl;
            exit(0);
        }
    }

}

template<class X> void Calculator<X>::add()
{
    std::cout << "The result is: " << (X)(x+y) << std::endl;
}

template<class X> void Calculator<X>::subtract()
{
    std::cout << "The result is: " << (X)(x-y) << std::endl;
}

template<class X> void Calculator<X>::mult()
{
    std::cout << "The result is: " << (X)(x*y) << std::endl;
}

template<class X> void Calculator<X>::div()
{
    std::cout << "The result is: " << (X)(double)(x/y) << std::endl;
}

template<class X> void Calculator<X>::perc()
{
    std::cout << "The result is: " << (X)(x/y * 100) << "%" << std::endl;
}

template<class X> void Calculator<X>::root()
{
    std::cout << "The result is: " << (X)sqrt(x) << std::endl;
}

template<class X> void Calculator<X>::square()
{
    std::cout << "The result is: " << (X)(x*x) << std::endl;
}

template<class X> void Calculator<X>::power()
{
    std::cout << "The result is: " << (X)pow(x,y) << std::endl;
}

template<class X> void Calculator<X>::ln()
{
    std::cout << "The result is: " << (X)log(x) << std::endl;
}

template<class X> void Calculator<X>::logarithm()
{
    std::cout << "The result is: " << (X)log10(x) << std::endl;
}