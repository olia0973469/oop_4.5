#include <iostream>
#include <cmath>
#include <typeinfo> 
#include "Ellipse.h"
#include "Hyperbola.h"
#include "Function.h"

int main() {

    Function* function[2];

    Ellipse ellipse(6.0, 7.0);
    Hyperbola hyperbola(4.0, 8.0);
    
    function[0] = &ellipse;
    function[1] = &hyperbola;

    for (int i = 0; i < 2; ++i)
    {
        std::cout << "Curve " << i + 1 << ":" << std::endl;
        std::cout << "Type: ";

        if (typeid(*function[i]) == typeid(Ellipse))
        {
            std::cout << "ellipse" << std::endl;
        }
        else if (typeid(*function[i]) == typeid(Hyperbola))
        {
            std::cout << "square" << std::endl;
        }

        std::cout << "count y: " << function[i]->count(5) << std::endl;
        std::cout << std::endl;
    }

    return 0;
}