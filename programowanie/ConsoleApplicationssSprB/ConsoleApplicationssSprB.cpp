#include <iostream>

int main()
{
    float circleRadius;
    float circleArea;

    std::cout << "Podaj promien kola: ";
    std::cin >> circleRadius;

    circleArea = circleRadius * circleRadius * 3.14;

    std::cout << "Pole kola wynosi: " << circleArea;
}   