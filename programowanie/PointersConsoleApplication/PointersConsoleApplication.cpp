#include <iostream>

int main()
{
    int firstVar = 5;
    int secondVar = 9;
    std::cout << "firstVar = " << firstVar << "\n";
    std::cout << "Adres firstVar: " << (&firstVar) << "\n";
    std::cout << "secondVar = " << secondVar << "\n";
    std::cout << "Adres secondVar: " << (&secondVar) << "\n";
    int* ptr = &firstVar;
    std::cout << "ptr = " << ptr << "\n";
    std::cout << "*ptr = " << *ptr << "\n";
    *ptr = 99;
    std::cout << "firstVar = " << firstVar << "\n";

    bool thirdVar = true;
,0

    bool* boolPtr = &thirdVar;

    int tab[3] = { 2, 98, 4 };
    std::cout << "tab[0] = " << tab[0] << "\n";
    std::cout << "tab[0] = " << *tab << "\n"; //*(tab + 0)
    std::cout << "tab[1] = " << tab[1] << "\n";
    std::cout << "tab[1] = " << *(tab + 1) << "\n";
    std::cout << "tab[2] = " << tab[2] << "\n";
    std::cout << "tab[2] = " << *(tab + 2) << "\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << i << ": " << tab[i] << "\n";
        std::cout << i << ": " << *(tab + i) << "\n";
    }
} 