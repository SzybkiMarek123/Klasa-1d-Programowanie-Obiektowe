#include <iostream>
//Napisz program który, wczyta od użytkownika liczbę dodatnią
void task1()
{
	int number;
	do
	{
		std::cout << "Podaj liczbę\n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczbę " << number << "\n";
}

//Napisz program, który wylosuje liczbę, a następnie użytkownik będzie musiał odgadnąć
void task2()
{
	int randomNumber, numberFromUser, userAttempt;

	userAttempt = 0;
	srand(time(0));
	randomNumber = rand() % 101;

	std::cout << "Wylosowano liczbę z zakresu od 0 do 100 odgadnij.\n";

	do
	{
		std::cout << "Podaj liczbę: \n";
		std::cin >> numberFromUser;
		userAttempt++;

		if (numberFromUser < randomNumber)
			std::cout << "Liczba jest za mała\n";
		else if (numberFromUser > randomNumber)
			std::cout << "Liczba jest za duża\n";
		else
			std::cout << "Zgadłeś " << "po " << userAttempt << " próbach.\n" << "Wylosowana liczba jest: " << randomNumber << "\n";
	} while (numberFromUser != randomNumber);
}

//Napisz program wyświetlający liczby całkowite z przediału <0; x>, x podaje użytkownik;
void task3()
{
	long long upperRange;

	std::cout << "Podaj górny zakres: ";
	std::cin >> upperRange;

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	} while (upperRange >= number);
}
//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task4()
{
	int number, rest, sumOfDigits = 0;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);

	do
	{
		rest = number % 10;
		std::cout << rest << ", ";
		sumOfDigits = sumOfDigits + rest;
		number = number / 10;
	} while (number > 0);

	std::cout << "\nSuma cyfr wynosi: " << sumOfDigits;
}

//Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
void task5()
{
	int number, number2 = 0;

	do
	{
		std::cout << "Podaj liczbę dodatnią: \n";
		std::cin >> number;
	} while (number < 0);

	do
	{
		number = number / 10;
		number2++;
	} while (number != 0);

	std::cout << "Ilość cyfr wynosi: " << number2;
}

//Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task6()
{
	int number, evenNumbers = 0, oddNumbers = 0, digit;

	do
	{
		std::cout << "Podaj liczbę dodatnią: \n";
		std::cin >> number;
	} while (number < 0);

	do
	{
		digit = number % 10;

		if (digit % 2 == 0)
			evenNumbers++;
		else
			oddNumbers++;
		number = number / 10;
	} while (number != 0);

	if (evenNumbers > oddNumbers)
		std::cout << "Więcej jest cyfr parzystych. Oto ile ich jest:" << evenNumbers;
	else if (oddNumbers > evenNumbers)
		std::cout << "Więcej jest liczb nieparzystych. Oto ile ich jest:" << oddNumbers;
	else
		std::cout << "liczb parzystych i nieparzystych jest tyle samo.";

}

//Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.
void task7()
{
	int number, suma = 0, arithmetic, divider = 0;

	do
	{
		std::cout << "Podaj liczby dodatnie: \n";
		std::cin >> number;
		suma = suma + number;
		divider++;
	} while (number > 0);

	arithmetic = suma / divider;

	std::cout << "Suma liczb wynosi \n" << suma << "\n";
	std::cout << "Średnia artmetyczna wynosi\n" << arithmetic;


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
	task7();
}