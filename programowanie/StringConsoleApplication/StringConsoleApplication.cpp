#include <iostream>

int main()
{
	// stary kod, poniewa¿ nazwa klasy i metody jest z du¿ej litery
	std::string text;
	text = "Ala ma kota";
	std::cout << "tekst na pocz¹tku: " << text << "\n";

	size_t len = text.length();
	std::cout << "D³ugoœæ: " << len << "\n";

	std::string sub = text.substr(4, 2); 
	// 1 parametr od którego znaku, 2 parametr ile znaków
	std::cout << "Pod³añcuch: " << sub;

	text.replace(0, 3, "Ola");
	std::cout << "Tekst po zmianie: " << text << "\n";
	// 1 parametr od którego znaku, 2 parametr ile znaków, 3 parametr na co zamieniæ

	text.insert(3, " nie");
	std::cout << "Tekst po zmianie: " << text << "\n";
	// 1 parametr w którym miejscu, 2 parametr co wstawiæ, (spacja jest dodana po tekœcie do wstawienia, natomiast przed nie ma spacji)

	//alias counter to to samo co int, ale mówi nam wiêcej ni¿ int
	using counter = int;
	counter sila = 2;

}