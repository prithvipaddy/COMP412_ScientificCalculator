#include <iostream>

#include "Prithvi_ScientificCalc.h"

int main()
{
    Input i;
    bool flag = true;
    while(flag == true)
    {
        i.input();
        std::cout << "Would you like to continue calculating? "
        << "Enter 'Y' to continue, or any other character to exit: " << std::endl;
        std::string opt;
        std::cin >> opt;
        if(opt != "Y" && opt != "y")
            flag = false;
    }
    return 0;
}