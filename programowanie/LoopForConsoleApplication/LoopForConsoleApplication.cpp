#include <iostream>

//Napisz program, który wyświetli "Hello World" tyle razy ile chce użytkownik
void task1()
{
	int number;

	do
	{
		std::cout << "Podaj liczbę dodatnią: \n";
		std::cin >> number;
	} while (number < 0);

	for (int i = 0; i != number; i++)
	{
		std::cout << "Hello World\n";
	}
}
//Napisz program na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << "\n";
	}
}
//Namaluj równoległobok z "X". Wysokość i szeokość wczytaj z klawiatury.
void task3()
{
	int width, height;

	do
	{
		std::cout << "Podaj szerokość: \n";
		std::cin >> width;
	} while (width < 0);

	do
	{
		std::cout << "Podaj wysokość: \n";
		std::cin >> height;
	} while (height < 0);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}
}
//* Program obliczający sumę liczb od 1 do 100
void task4() 
{
	int suma = 0, number;

	for (int i = 1; i <= 100; i++)
	{
		suma += i;
	}

	std::cout << "Suma liczb od 1 do 100 wynosi: " << suma;
}
//* Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task5() 
{
	int sum = 0, number;

	do
	{
		std::cout << "Podaj liczbę: \n";
		std::cin >> number;
	} while (number < 0);
}
//*Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task6() 
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i * i << ", ";
	}
}
//* Program obliczający n!.
void task7()
{
	int number, silnia = 1;

	do
	{
		std::cout << "Podaj liczbę dodatnią: ";
		std::cin >> number;
	} while (number < 0);

	for (int i = number; i > 1; i--)
	{
		silnia *= i;
	}

	std::cout << "Silnia z liczby " << number << " wynosi: " << silnia;
}
//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task8()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << "x" << j << "=" << i * j << "\n";
		}
	}
}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << ", ";
	}
}
//Program obliczający sumę kwadratów liczb od 1 do 10
void task10()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i * i;
	}
	std::cout << "Suma kwadratów liczb od 1 do 10 wynosi: " << sum;
}
//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task11()
{
	int result = 1, base, exponent;

	std::cout << "Podaj podstawę: ";
	std::cin >> base;
	std::cout << "Podaj wykładnik: ";
	std::cin >> exponent;

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	std::cout << "Wynik wynosi :" << result;
}
//*Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task12()
{
	int fibonacciNumber = 0, tmp = 1, tmpSecond = 0;

	for (int i = 0; i < 20; i++)
	{
		tmpSecond = fibonacciNumber;
		std::cout << fibonacciNumber << ", ";
		fibonacciNumber = fibonacciNumber + tmp;
		tmp = tmpSecond;
	}
}
//*Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task13()
{
	for (int i = 1; i <= 10; i++)
	{
		int silnia = 1;
		for (int j = 1; j <= i; j++)
		{
			silnia *= j;
		}
		std::cout << "Silnia z " << i << " to " << silnia << "\n";
	}
}
/**Program, kóry wyświetli poniższe wzory :
*****54321        121212        122333
* *****65432        212121        223334444
* ******76543        121212        333444455555
* *******87654        212121        444455555666666 */
void task14()
{
	std::cout << "**** \n***\n** \n* \n";
	std::cout << "\n   *\n  ***\n *****\n*******\n";
	std::cout << "\n54321\n 65432\n 76543\n 87654\n";
	std::cout << "\n121212\n 212121\n 121212\n 212121\n";
	std::cout << "\n122333\n 223334444\n 333444455555\n 444455555666666";
}
//*Napisz program, który rozkłoży liczbę na czynniki pierwsze.
void task15()
{

}
//*Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
void task16() 
{

}
int main()
{
	setlocale(LC_CTYPE, "polish");
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
	//task13();
	//task14();
	task15();
	//task16();

}