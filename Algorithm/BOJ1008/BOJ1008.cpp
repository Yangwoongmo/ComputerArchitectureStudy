#include <iostream>

int main()
{
    double a, b;
    double result;

    std::cin >> a >> b;

    result = a / b;
    std::cout.precision(9);
    std::cout << std::fixed;
    std::cout << result;

    return 0;
}
