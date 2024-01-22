#include <iostream>
/*
* Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
BMI = masa/wzrost^2
poni�ej 16 - wyg�odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowag�
18.5 - 24.99 - wag� prawid�ow�
25.0 - 29.9 - nadwag�
30.0 - 34.99 - I stopie� oty�o�ci
35.0 - 39.99 - II stopie� oty�o�ci
powy�ej 40.0 - oty�o�� skrajn�

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
* Napisz program, kt�ry wczyta numer miesi�ca i wy�wietli jego s�owny odpowiednik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
* Napisz program, kt�ry poprosi u�ytkownika o podanie oceny w skali 100-punktowej i przeliczy j� na ocen� procentow� w przedziale od 0 do 100. Wy�wietl wynik.
* Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, kt�ry na podstawie wsp�czynnik�w r�wnania kwadratowego (a, b, c) sprawdzi, czy to r�wnanie ma rozwi�zania rzeczywiste, i je�li tak, to je obliczy.
* Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
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
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    task12();
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
void task7()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> thirdNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> fourthNumber;

    if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
    {
        std::cout << "Najwi�ksza warto�� to " << fourthNumber << "\n";
    }
    else 
    {
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
}
void task8() 
{
    int firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;

    std::cout << "Liczby w kolejno�ci rosn�cej: \n";
    std::cout << firstNumber;

    std::cout << "\n";
}
void task9()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> secondNumber;

    std::cout << "Liczby w kolejno�ci rosn�cej: \n";

    if (firstNumber > secondNumber)
        std::cout << secondNumber <<"," << firstNumber << "\n";
    else
        std::cout << firstNumber <<"," << secondNumber << "\n";
}
void task10()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> secondNumber;

    std::cout << "Liczby w kolejno�ci rosn�cej: \n";

    if (firstNumber > secondNumber)
        std::cout << secondNumber << "," << firstNumber << "\n";
    else
        std::cout << firstNumber << "," << secondNumber << "\n";
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.
void task11()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe \n";
    std::cin >> secondNumber;
    if (firstNumber == secondNumber)
        std::cout << "Liczby s� r�wne";
    else
        std::cout << "Liczby s� r�ne";
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona parzysta. Wy�wietl odpowiedni komunikat.
void task12() 
{
    int numberFromUser;
    std::cout << "Podaj liczbe, aby sprawdzi� czy ejst parzysta \n";
    std::cout << "Podaj liczbe \n";
    std::cin >> numberFromUser;
    if (numberFromUser % 2 == 0)
        std::cout << "Liczba jest parzysta";
    else
        std::cout << "Liczba nie jest parzaysta";
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task13() 
{
    int numberFromUser;
    std::cout << "Podaj liczbe, aby sprawdzi� czy jest podzielna przez 3 i 5 \n";
    std::cout << "Podaj liczbe \n";
    std::cin >> numberFromUser;
    if()
}