#include <iostream>
//Napisz program, który policzy sume cyfr podanej przez użytkownika liczby.
void task1() 
{
	int number, numberOfDigits = 1;	
	do{
		std::cout << "Podaj liczbe dodatnią \n";
		std::cin >> number;
	} while (number > 0);
/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigits++;
		//...
	}*/
	while (number > 9)
	{
		number = number / 10;
		numberOfDigits++;
	}
	std::cout << "Ilość cyfr w liczbie wynosi:" << numberOfDigits;

}
void task2()
{
	int a;
	std::cout << "Podaj liczbe dodatnią \n";
	std::cin >> a;

	int b;
	std::cout << "Podaj liczbe dodatnią \n";
	std::cin >> b;

	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;

	}
}
//Miasto T. ma obecnie 100 tys. mieszkańców, ale jego populacja rośnie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszkańców i ta liczba rośnie w tempie 2% na rok.
// Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, 
// gdy liczba mieszkańców miasta T. przekroczy liczbę z miasta B.
void task3()
{
	double CityT = 100000, CityB = 300000, years = 0;

	while (CityT < CityB)
	{
		CityT = CityT * 1.03;
		CityB = CityB * 1.02;
		years++;
	}
	std::cout << CityT << " Miasto T \n";
	std::cout << CityB << " Miasto B \n";
	std::cout << years << " Lat";
}
void task3() 
{
	int number;

	do
	{
		std::cout << "Podaj pierwszą liczbę dodatnią: \n";
		std::cin >> number;
	} while (number < 0);

	int tmpNumber = number;
	int reversNumber = 0;

	while (tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reversNumber = reversNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}

	if (number == reversNumber)
		std::cout << "Liczba jest palindromem";
	else
		std::cout << "Liczba jest nie palindromem";
}
void task4()
{ 
		int number, counter = 0;

		do
		{
			std::cout << "Podaj pierwszą liczbê dodatnią: \n";
			std::cin >> number;
		} while (number < 0);


		while (counter != number)
		{
			std::cout << "Hello World\n";
			counter++;
		}
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	task4();
}