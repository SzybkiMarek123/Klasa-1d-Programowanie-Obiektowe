namespace PracticalTasksConsoleApp.Czerwiec2022_6
{
    internal class Osoba
    {
        public static int liczba = 0;
        private int id;
        private string imie;

        public Osoba()
        {
            liczba++;
            id = 0;
            imie = "";
        }

        public Osoba(string name, int id)
        {
            liczba++;
            this.id = id;
            this.imie = name;
        }

        public Osoba(Osoba osoba)
        {
            liczba++;
            id = osoba.id;
            imie = osoba.imie;
        }

        public void Witaj(string argument)
        {
            if (imie != null && imie != "")
            {
                Console.WriteLine($"Cześć {argument}, mam na imię {imie}");
            }
            else
            {
                Console.WriteLine("Brak danych");
            }
        }
    }
}