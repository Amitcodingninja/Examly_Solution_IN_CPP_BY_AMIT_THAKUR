// You are using GCC

#include <iostream>
int main()
{
    int hurlFactor, spinFactor, speedFactor;
    std::cin >> hurlFactor >> spinFactor >> speedFactor;
    if (hurlFactor > 50 && spinFactor > 60 && speedFactor > 100)
    {
        std::cout << "10";
    }
    else if (hurlFactor > 50 && spinFactor > 60)
    {
        std::cout << "9";
    }
    else if (spinFactor > 60 && speedFactor > 100)
    {
        std::cout << "8";
    }
    else if (hurlFactor > 50 && speedFactor > 100)
    {
        std::cout << "7";
    }
    else if (hurlFactor > 50 || spinFactor > 60 || speedFactor > 100)
    {
        std::cout << "6";
    }
    else
    {
        std::cout << "5";
    }
    return 0;
}