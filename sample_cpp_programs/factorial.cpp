#include <iostream>
#include <cstdint>

std::int32_t find_factorial(std::int32_t number)
{
    std::int32_t result{1};

    while(number > 0)
    {
        result = result*number;
        number = number-1;
    }

    return result;
}

int main()
{
    std::int32_t fact_num{};
    std::cout << "Enter the number who factorial shall be calculated" << std::endl;
    while(true)
    {
        std::cin >> fact_num;

        if(fact_num < 0)
        {
            std::cout << "Entered number is invalid, Enter the number again" << std::endl;
        }
        else
        {
            std::cout << "Factorial of a given number : " << find_factorial(fact_num) << std::endl;
            break;
        }

    }
}