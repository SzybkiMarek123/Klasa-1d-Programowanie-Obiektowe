
namespace PracticalTasksConsoleApp.Czerwiec2023_6
{
    /**************
    nazwa klasy: Film
    pola:
    -tytul- przechowujące tytuł filmu.
    -liczbaWypozyczen- przechowujące liczbę wypożyczeń filmu.
    
    metody: 
    -UstawTytul - ustawia tytuł filmu, jeśli długość tytułu nie przekracza 20 znaków, w przeciwnym razie wypisuje komunikat o błędzie.
    -Tytul -  zwraca tytuł filmu, tytul.
    -LiczbaWypozycen - zwraca liczbę wypożyczeń filmu, liczba wypożyczeń.
    -InkrementacjaWypozyczenia - nic nie zwraca, inkrementuje liczbę wypożyczeń filmu o 1.
    informacje: Klasa filmy.
    autor: Mateusz Papucki
    **************/

    internal class Film
    {
        protected string tytul;
        protected int liczbaWypozyczen;

        public Film()
        {
            tytul = "";
            liczbaWypozyczen = 0;
        }

        public void UstawTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
            {
                tytul = nowyTytul;
            }
            else
            {
                Console.WriteLine("Tytul nie mozę miec wiecej jak 20 znaków");
                
            }
        }

        public string Tytul()
        {
            return tytul;
        }

        public int LiczbaWypozyczen()
        {
            return liczbaWypozyczen;
        }

        public void InkrementacjaWypozyczenia()
        {
            liczbaWypozyczen++;
        }
    }
}