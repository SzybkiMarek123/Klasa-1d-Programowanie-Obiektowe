#include <iostream>

int main()
{
	// stary kod, poniewa� nazwa klasy i metody jest z du�ej litery
	std::string text;
	text = "Ala ma kota";
	std::cout << "tekst na pocz�tku: " << text << "\n";

	size_t len = text.length();
	std::cout << "D�ugo��: " << len << "\n";

	std::string sub = text.substr(4, 2); 
	// 1 parametr od kt�rego znaku, 2 parametr ile znak�w
	std::cout << "Pod�a�cuch: " << sub;

	text.replace(0, 3, "Ola");
	std::cout << "Tekst po zmianie: " << text << "\n";
	// 1 parametr od kt�rego znaku, 2 parametr ile znak�w, 3 parametr na co zamieni�

	text.insert(3, " nie");
	std::cout << "Tekst po zmianie: " << text << "\n";
	// 1 parametr w kt�rym miejscu, 2 parametr co wstawi�, (spacja jest dodana po tek�cie do wstawienia, natomiast przed nie ma spacji)

	//alias counter to to samo co int, ale m�wi nam wi�cej ni� int
	using counter = int;
	counter sila = 2;

}