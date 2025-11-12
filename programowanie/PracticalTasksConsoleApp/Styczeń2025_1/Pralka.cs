namespace PracticalTasksConsoleApp.Styczeń2025_1
{
    internal class Pralka : Urzadzenie
    {
        private int numerProgramu = 0;

        public int ustawprogram(int number)
        {
            if (number >= 1 && number <= 12)
            {
                numerProgramu = number;
                Informacje("Program został ustawiony");
            }
            else
            {
                numerProgramu = 0;
                Informacje("Podaj poprawny numer programu");
            }
            return numerProgramu;
        }
    }
}