#include <iostream>
/*
* Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
* Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie oceny w skali 100-punktowej i przeliczy j¹ na ocenê procentow¹ w przedziale od 0 do 100. Wyœwietl wynik.
* Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
/*
Operatory porównania:
>   wiêkszoœci
<   mniejszoœci
>=  wiêksze lub równe
<=  mniejsze lub równe
== równe
!= ró¿ne
*/
/*
Priorytety operatorów
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
// Napisz program, który  pobierze liczbe od u¿ytkownika i wyœwietli czy jest ona dodatnia czy nie
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
	task17();
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
//Napisz program, który wczyta jedn¹ wartoœæ i wyœwietli najwiêksz¹ z nich.
void task4()
{
	int firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;

	std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";
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
		std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
	else
		std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";
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
		std::cout << "Najwiêksza wartoœæ to " << thirdNumber << "\n";
	else
	{
		if (secondNumber > firstNumber)
			std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
		else
			std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";
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
		std::cout << "Najwiêksza wartoœæ to " << fourthNumber << "\n";
	} else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwiêksza wartoœæ to " << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
			else
				std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";
		}
	}
}
void task8()
{
	int firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejnoœci rosn¹cej: \n";
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

	std::cout << "Liczby w kolejnoœci rosn¹cej: \n";

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

	std::cout << "Liczby w kolejnoœci rosn¹cej: \n";

	if (firstNumber > secondNumber)
		std::cout << secondNumber << "," << firstNumber << "\n";
	else
		std::cout << firstNumber << "," << secondNumber << "\n";
}
//* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task11()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> secondNumber;
	if (firstNumber == secondNumber)
		std::cout << "Liczby s¹ równe";
	else
		std::cout << "Liczby s¹ ró¿ne";
}
//* Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona parzysta. Wyœwietl odpowiedni komunikat.
void task12()
{
	int numberFromUser;
	std::cout << "Podaj liczbe, aby sprawdziæ czy ejst parzysta \n";
	std::cout << "Podaj liczbe \n";
	std::cin >> numberFromUser;
	if (numberFromUser % 2 == 0)
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba nie jest parzaysta";
}
//*Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task13()
{
	int numberFromUser;
	std::cout << "Podaj liczbe, aby sprawdziæ czy jest podzielna przez 3 i 5 \n";
	std::cout << "Podaj liczbe \n";
	std::cin >> numberFromUser;
	if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i 5";
	else
		std::cout << "Liczba nie jest podzielna";
}
/*Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.*/
void task14()
{
	float weightFromUser, heightFromUser, BMI;
	std::cout << "Podaj swoj¹ wage (kg):\n";
	std::cin >> weightFromUser;
	std::cout << "Pdoaj swój wzrost (m):\n";
	std::cin >> heightFromUser;
	BMI = weightFromUser / (heightFromUser * heightFromUser);

	if (BMI < 16)
		std::cout << "Wyg³odzony";
	else
		if (BMI >= 16 && BMI <= 16.99)
			std::cout << "wychudzenie";
		else
			if (BMI >= 17 && BMI <= 18.49)
				std::cout << "Niedowaga";
			else
				if (BMI >= 18.5 && BMI <= 24.99)
					std::cout << "Waga prawid³owa";
				else
					if (BMI >= 25 && BMI <= 29.99)
						std::cout << "Nadwaga";
					else
						if (BMI >= 30 && BMI <= 34.99)
							std::cout << "I stopieñ oty³oœci";
						else
							if (BMI >= 35 && BMI <= 39.99)
								std::cout << "II stopieñ oty³oœci";
							else
								std::cout << "Oty³oœæ skrajna";

}
//*Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task15()
{
	int numberFromUser;
	std::cout << "Podaj dzieñ tygodnia od 1 do 7:\n";
	std::cin >> numberFromUser;
	if (numberFromUser == 1)
		std::cout << "Poniedzia³ek";
	if (numberFromUser == 2)
		std::cout << "Wtorek";
	if (numberFromUser == 3)
		std::cout << "Œroda";
	if (numberFromUser == 4)
		std::cout << "Czwartek";
	if (numberFromUser == 5)
		std::cout << "Pi¹tek";
	if (numberFromUser == 6)
		std::cout << "Sobota";
	else
		std::cout << "Niedziela";
}
//*Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
void task16()
{
	int monthFromUser;
	std::cout << "Podaj miesi¹c od 1 do 12:\n";
	std::cin >> monthFromUser;
	if (monthFromUser == 1)
		std::cout << "Stycznieñ";
	else
		if (monthFromUser == 2)
			std::cout << "Luty";
		else
			if (monthFromUser == 3)
				std::cout << "Marzec";
			else
				if (monthFromUser == 4)
					std::cout << "Kwiecieñ";
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
									std::cout << "Sierpieñ";
								else
									if (monthFromUser == 9)
										std::cout << "Wrzesieñ";
									else
										if (monthFromUser == 10)
											std::cout << "Pa¿dziernik";
										else
											if (monthFromUser == 11)
												std::cout << "Listopad";
											else
												std::cout << "Grudzieñ";

}
//*Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny.Wyœwietl odpowiedni komunikat.
void task17() 
{

}