namespace PracticalTasksConsoleApp.Czerwiec2023_6
{
    internal class task3
    {
        public void Task()
        {
            Film film = new Film();
            Console.WriteLine("Początkowa liczba wypożyczeń: " + film.LiczbaWypozyczen());
            Console.WriteLine("Początkowy tytuł: " + film.Tytul());
            film.UstawTytul("Shrek");


            Console.WriteLine("Liczba wypożyczeń przed inkrementacją " + film.LiczbaWypozyczen());
            film.InkrementacjaWypozyczenia();


            Console.WriteLine("Liczba wypożyczeń po inkrementacji " + film.LiczbaWypozyczen());
            Console.WriteLine("Tytuł po ustawieniu: " + film.Tytul());
        }
    }
}