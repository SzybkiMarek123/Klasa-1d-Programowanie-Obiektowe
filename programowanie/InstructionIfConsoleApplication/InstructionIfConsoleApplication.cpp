#include <iostream>
/*
Operatory porównania:
>   większości
<   mniejszości
>=  większe lub równe
<=  mniejsze lub równe
== równe
!= różne

Priorytety operatorów
* /
+ -
> < >= <= !=
&&
||

Operatory logiczne:
A B     A || B      A && B      !A
f f       f            f         t
f t       t            f
t f       t            f         f
t t       t            t
*/
// Napisz program, który  pobierze liczbe od użytkownika i wyświetli czy jest ona dodatnia czy nie
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
	//task12();
	//task13();
	//task14();
	//task15();
	//task16();
	//task17();
	//task18();
	//task19();
	//task20();
	//task21();
	//task22();
	//task23();
}
void task1()
{
	int number;
	std::cout << "Podaj liczbe, ktora chcesz sprawdzic; "; "\n";
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia";
	} else
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
		} else
		{
			std::cout << "Liczba nie jest w zakresie";
		}
	} else
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
	} else
	{
		std::cout << "Liczba nie jest w zakresie";
	}
}
//Napisz program, który wczyta jedną wartość i wyświetli największą z nich.
void task4()
{
	int firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;

	std::cout << "Największa wartość to " << firstNumber << "\n";
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
		std::cout << "Największa wartość to " << secondNumber << "\n";
	else
		std::cout << "Największa wartość to " << firstNumber << "\n";
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
		std::cout << "Największa wartość to " << thirdNumber << "\n";
	else
	{
		if (secondNumber > firstNumber)
			std::cout << "Największa wartość to " << secondNumber << "\n";
		else
			std::cout << "Największa wartość to " << firstNumber << "\n";
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
		std::cout << "Największa wartość to " << fourthNumber << "\n";
	} else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Największa wartość to " << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Największa wartość to " << secondNumber << "\n";
			else
				std::cout << "Największa wartość to " << firstNumber << "\n";
		}
	}
}
void task8()
{
	int firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejności rosnącej: \n";
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

	std::cout << "Liczby w kolejności rosnącej: \n";

	if (firstNumber > secondNumber)
		std::cout << secondNumber << "," << firstNumber << "\n";
	else
		std::cout << firstNumber << "," << secondNumber << "\n";
}
void task10()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> secondNumber;

	std::cout << "Liczby w kolejności rosnącej: \n";

	if (firstNumber > secondNumber)
		std::cout << secondNumber << "," << firstNumber << "\n";
	else
		std::cout << firstNumber << "," << secondNumber << "\n";
}
//* Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe. Wyświetl odpowiedni komunikat.
void task11()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> secondNumber;
	if (firstNumber == secondNumber)
		std::cout << "Liczby są równe";
	else
		std::cout << "Liczby są różne";
}
//* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta. Wyświetl odpowiedni komunikat.
void task12()
{
	int numberFromUser;
	std::cout << "Podaj liczbe, aby sprawdzić czy ejst parzysta \n";
	std::cout << "Podaj liczbe \n";
	std::cin >> numberFromUser;
	if (numberFromUser % 2 == 0)
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba nie jest parzaysta";
}
//*Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
void task13()
{
	int numberFromUser;
	std::cout << "Podaj liczbe, aby sprawdzić czy jest podzielna przez 3 i 5 \n";
	std::cout << "Podaj liczbe \n";
	std::cin >> numberFromUser;
	if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i 5";
	else
		std::cout << "Liczba nie jest podzielna";
}
/*Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.*/
void task14()
{
	float weightFromUser, heightFromUser, BMI;
	std::cout << "Podaj swoją wage (kg):\n";
	std::cin >> weightFromUser;
	std::cout << "Pdoaj swój wzrost (m):\n";
	std::cin >> heightFromUser;
	BMI = weightFromUser / (heightFromUser * heightFromUser);

	if (BMI < 16)
		std::cout << "Wygłodzony";
	else
		if (BMI >= 16 && BMI <= 16.99)
			std::cout << "wychudzenie";
		else
			if (BMI >= 17 && BMI <= 18.49)
				std::cout << "Niedowaga";
			else
				if (BMI >= 18.5 && BMI <= 24.99)
					std::cout << "Waga prawidłowa";
				else
					if (BMI >= 25 && BMI <= 29.99)
						std::cout << "Nadwaga";
					else
						if (BMI >= 30 && BMI <= 34.99)
							std::cout << "I stopień otyłości";
						else
							if (BMI >= 35 && BMI <= 39.99)
								std::cout << "II stopień otyłości";
							else
								std::cout << "Otyłość skrajna";

}
//*Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
void task15()
{
	int numberFromUser;
	std::cout << "Podaj dzień tygodnia od 1 do 7:\n";
	std::cin >> numberFromUser;
	if (numberFromUser == 1)
		std::cout << "Poniedziałek";
	if (numberFromUser == 2)
		std::cout << "Wtorek";
	if (numberFromUser == 3)
		std::cout << "Środa";
	if (numberFromUser == 4)
		std::cout << "Czwartek";
	if (numberFromUser == 5)
		std::cout << "Piątek";
	if (numberFromUser == 6)
		std::cout << "Sobota";
	else
		std::cout << "Niedziela";
}
//*Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
void task16()
{
	int monthFromUser;
	std::cout << "Podaj miesiąc od 1 do 12:\n";
	std::cin >> monthFromUser;
	if (monthFromUser == 1)
		std::cout << "Stycznień";
	else
		if (monthFromUser == 2)
			std::cout << "Luty";
		else
			if (monthFromUser == 3)
				std::cout << "Marzec";
			else
				if (monthFromUser == 4)
					std::cout << "Kwiecień";
				else
					if (monthFromUser == 5)
						std::cout << "Maj";
					else
						if (monthFromUser == 6)
							std::cout << "Czerwiec";
						else
							if (monthFromUser == 7)
								std::cout << "Lipiec";
							else
								if (monthFromUser == 8)
									std::cout << "Sierpień";
								else
									if (monthFromUser == 9)
										std::cout << "Wrzesień";
									else
										if (monthFromUser == 10)
											std::cout << "Pażdziernik";
										else
											if (monthFromUser == 11)
												std::cout << "Listopad";
											else
												std::cout << "Grudzień";

}
//*Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
void task17()
{
	long yearFromUser;
	std::cout << "Podaj rok\n";
	std::cin >> yearFromUser;

	if (yearFromUser % 4 == 0 && yearFromUser % 100 != 0)
		std::cout << "Przestępny";
	else
		std::cout << "Nieprzestępny";
}
//*Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną.Wyświetl wynik.
void task18()
{
	int number;
	std::cout << "Podja liczbê ca³kowit¹, aby obliczyæ wartoœæ bezwzglêdn¹\n";
	std::cin >> number;

	if (number < 0)
		std::cout << "Wartość bezwzględna tej liczby to: " << number * (-1);
	else
		std::cout << "Wartość bezwzględna tej liczby to:" << number;
}
//*Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia.Wyświetl odpowiedni komunikat.
void task19()
{
	int ageFromUser;
	std::cout << "Podaj swój wiek\n";
	std::cin >> ageFromUser;

	if (ageFromUser >= 18)
		std::cout << "Jesteś pełnoletni";
	else
		std::cout << "Nie jesteś pełnoletni";
}
//*Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.
void task20()
{
	float firstSide, secondSide, thirdSide;
	std::cout << "Podaj długość pierwszego odcinka\n";
	std::cin >> firstSide;
	std::cout << "Podaj długość drugiego\n";
	std::cin >> secondSide;
	std::cout << "Podaj długość trzeciego odcinka\n";
	std::cin >> thirdSide;

	if (firstSide < secondSide + thirdSide && secondSide < firstSide + thirdSide && thirdSide < firstSide + secondSide)
		std::cout << "Da się stworzyć taki trójkąt";
	else
		std::cout << "Nie da się stworzyć takiego trójkąta";
}
//*Napisz program, który poprosi użytkownika o podanie oceny w skali 100 - punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.
void task21()
{
	float amountOfPoints, Rating;
	std::cout << "Podaj ilość punktów\n";
	std::cin >> amountOfPoints;

	Rating = amountOfPoints / 100 * 100;

	std::cout << "Ocena: " << Rating << "%";
}
//*Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task22()
{
	int numerFromUser;
	std::cout << "Podaj swoją ocene\n";
	std::cin >> numerFromUser;

	if (numerFromUser == 6)
		std::cout << "Celujący";
	else if (numerFromUser == 5)
		std::cout << "Bardzo dobry";
	else if (numerFromUser == 4)
		std::cout << "Dobry";
	else if (numerFromUser == 3)
		std::cout << "Dostateczny";
	else if (numerFromUser == 2)
		std::cout << "Dopuszczający";
	else
		std::cout << "Niedostateczny";
}
//* Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task23()
{
	int day, month, year;
	std::cout << "Program sprawdzi czy podana data jest poprawna\n";
	std::cout << "Podaj dzień:\n";
	std::cin >> day;
	std::cout << "Podaj miesiąc:\n";
	std::cin >> month;
	std::cout << "Podaj rok:\n";
	std::cin >> year;

	std::cout << "Oto twoja data:\n";
	std::cout << day << "." << month << "." << year;

	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day >= 1 && day <= 31)
		std::cout << "Poprawna data\n";
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		std::cout << "Poprawna data\n";
	else if (month == 2 && day >= 1 && day <= 28 && ((year % 4) != 0 || ((year % 100) == 0 && (year % 400) != 0)))
		std::cout << "Poprawna data\n";
	else if (month == 2 && day >= 1 && day <= 29)
		std::cout << "Poprawna data\n";
	else
		std::cout << "Niepoprawna data\n";
}