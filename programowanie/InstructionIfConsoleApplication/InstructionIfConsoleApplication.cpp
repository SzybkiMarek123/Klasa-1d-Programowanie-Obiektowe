#include <iostream>
/*
Operatory por�wnania:
>   wi�kszo�ci
<   mniejszo�ci
>=  wi�ksze lub r�wne
<=  mniejsze lub r�wne
== r�wne
!= r�ne
*/
/*
Priorytety operator�w 
* /
+ -
> < >= <= !=
&&
||
/*
Operatory logiczne:
A B     A || B      A && B      !A
f f       f            f         t
f t       t            f
t f       t            f         f
t t       t            t
*/
// Napisz program, kt�ry  pobierze liczbe od u�ytkownika i wy�wietli czy jest ona dodatnia czy nie
int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
    task5();
}
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
void task2()
{
    int number;
    std::cout << "Podaj liczbe, ktora chcesz sprawdzic; "; "\n";
    std::cin >> number;
    if (number >= 1)
    {
        if (number < 10)
        {
            std::cout << "Liczba jest w zakresie";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie";
        }
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie";     
    }

}
void task3()
{
    int number;
    std::cout << "Podaj liczbe, ktora chcesz sprawdzic; "; "\n";
    std::cin >> number;
    if (number >= 1 && number < 10)
    {
        std::cout << "Liczba jest w zakresie";
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie";
    }
}
//Napisz program, kt�ry wczyta jedn� warto�� i wy�wietli najwi�ksz� z nich.
void task4()
{
    int firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;

    std::cout << "Najwi�ksza warto�� to " << firstNumber << "\n";
}
void task5()
{
    int firstNumber;
    int secondNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> secondNumber;

    if (secondNumber > firstNumber)
    std::cout << "Najwi�ksza warto�� to " << secondNumber << "\n";
    else
    std::cout << "Najwi�ksza warto�� to " << firstNumber << "\n";
}
void task6()
{
    int firstNumber, secondNumber, thirdNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> thirdNumber;

    if (thirdNumber > firstNumber && thirdNumber > secondNumber)
        std::cout << "Najwi�ksza warto�� to " << thirdNumber << "\n";
    else
    {
        if (secondNumber > firstNumber)
            std::cout << "Najwi�ksza warto�� to " << secondNumber << "\n";
        else
            std::cout << "Najwi�ksza warto�� to " << firstNumber << "\n";
    }
}
//aa
