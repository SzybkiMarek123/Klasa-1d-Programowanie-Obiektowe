#include <iostream>

/*
Funkcja - zbiór instrukcji. Definicja/deklaracja funkcji składa się z dwóch czêœci:
* nagówek - sposób użycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametrów w nawiasie (nieobowiązkowe)
* ciało - zbiór instrukcji

typZwracany nazwaFuncji(parametry)
{
	//ciało funkcji
}
*/

void showHello()
{
	std::cout << "Hello World";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	showHello();
}