
namespace PracticalTasksConsoleApp.Czerwiec2023_6
{
    /**************
    nazwa klasy: Film
    pola:
    *tytul - pole chronione przechowujące tytuł filmu, string
    *liczbaWypozyczen - pole chronione przechowujące liczbę wypożyczeń filmu, int
    
    metody: 
    *UstawTytul - ustawia tytuł filmu, jeśli długość tytułu nie przekracza 20 znaków, w przeciwnym razie wypisuje komunikat o błędzie.
    *PobierzTytul - metoda zwraca tytuł filmu, string
    *PobierzLiczbeWypozycen - metoda zwraca liczbę wypożyczeń filmu, int
    *InkrementacjaWypozyczenia - metoda nic nie zwraca (void), inkrementuje liczbę wypożyczeń filmu o 1.\
    informacje: Klasa reprezentuje filmy,
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

        public int LiczbeaWypozyczen()
        {
            return liczbaWypozyczen;
        }

        public void InkrementacjaWypozyczenia()
        {
            liczbaWypozyczen++;
        }
    }
}