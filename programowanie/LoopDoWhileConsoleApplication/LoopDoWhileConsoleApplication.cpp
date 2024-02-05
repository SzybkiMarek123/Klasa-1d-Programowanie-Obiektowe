#include <iostream>
void task1()
{
	int number;
	/* std::cout << "Podaj liczbê \n";
	std::cin >> number; */

	do
	{
		std::cout << "Podaj liczbê \n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczbe" << number;
}
void task2()
{
	int randomNumber, numberFromUser;

	srand(time(0));
	randomNumber = rand() % 101;
	//std::cout << "Liczba:" << randomNumber;
	do
	{
		std::cout << "Podaj liczbe";
		std::cin >> numberFromUser;
		if (numberFromUser < randomNumber);
		std::cout << "Liczba jest za ma³a";
		if (numberFromUser > randomNumber);
		std::cout << "Liczba jest za du¿a";			
	} while (numberFromUser != randomNumber);
	std::cout << "Zgad³eœ" << randomNumber;


}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task2();
}