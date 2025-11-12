namespace PracticalTasksConsoleApp.Styczeń2025_1
{
    internal class Task4
    {
        public void Task()
        {
            Pralka pralka = new Pralka();
            Odkurzacz odkurzacz = new Odkurzacz();

            Console.WriteLine("Podaj numer prania");
            int numerProgramu = int.Parse(Console.ReadLine());
            pralka.ustawprogram(numerProgramu);

            odkurzacz.on();
            odkurzacz.on();
            odkurzacz.on();
            odkurzacz.Informacje("Odkurzacz rozładował się");
            odkurzacz.off();
        }
    }
}