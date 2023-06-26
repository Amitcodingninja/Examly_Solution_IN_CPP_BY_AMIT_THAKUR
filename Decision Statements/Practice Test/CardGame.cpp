// You are using GCC

#include <iostream>
int main()
{
    char type1, type2, type3;
    int number1, number2, number3;
    std::cin >> type1 >> number1;
    std::cin >> type2 >> number2;
    std::cin >> type3 >> number3;
    if ((type1 == type2 && type2 == type3) && (number1 == number2 && number2 == number3))
    {
        std::cout << "Double Bonanza";
    }
    else if (type1 == type2 && type2 == type3)
    {
        std::cout << "Bonanza";
    }
    else if (number1 == number2 && number2 == number3)
    {

        std::cout << "Bonanza";
    }
    else
    {
        std::cout << "No Bonanza";
    }
    return 0;
}