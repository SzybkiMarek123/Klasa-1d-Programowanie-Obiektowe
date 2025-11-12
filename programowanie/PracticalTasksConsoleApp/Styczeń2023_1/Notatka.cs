namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    /**********************************************
    klasa: Notatka
    pola: 
    -id- identyfikator notatki
    -tytul- tytuł notatki
    -tresc- treść notatki
    -licznikNotatek- licznik notatek
    informacje: Klasa notatka reprezentuje system do tworzenia notatek.
    autor: Mateusz Papucki
    ***********************************************/

    internal class Notatka
    {
        private int licznik = 0;
        private int id;
        protected string tytul;
        protected string tresc;

        public Notatka(string tytul1, string tresc1)
        {
            licznik++;
            id = licznik;
            tytul = tytul1;
            tresc = tresc1;
        }

        public void Wyswietl()
        {
            Console.WriteLine($"Tytuł: {tytul}\nTreść: {tresc}");
        }

    }
}