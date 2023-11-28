#include <iostream>
/*
Operatory porównania:
>   wiêkszoœci
<   mniejszoœci
>=  wiêksze lub równe
<=  mniejsze lub równe
== równe
!= ró¿ne
*/
// Napisz program, który  pobierze liczbe od u¿ytkownika i wyœwietli czy jest ona dodatnia czy nie
void task1()
{
    int number; 
    std::cout << "Podaj liczbe, ktora chcesz sprawdzic; "; "\n";
    std::cin >> number;
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia";
    }
    else
    {
        std::cout << "Liczba jest ujemna"; "\n";
    }
}
int main()
{
    task1();
}
