using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    internal class task1
    {
        /**********************************************
            nazwa funkcji: Task
            opis funkcji: Oblicza największy wspólny dzielnik (NWD).
            parametry: Brak.
            zwracany typ i opis:Int, Funkcja wypisuje wynik w konsoli.
            autor: Mateusz Papucki
           ***********************************************/
        public void Task() 
        {
            int a, b;
            string aa, bb;
            Console.WriteLine("Podaj pierwszą liczbę");
            aa = Console.ReadLine();    

            Console.WriteLine("Podaj drugą liczbę");
            bb = Console.ReadLine();

            a = int.Parse(aa);
            b = int.Parse(bb);

            while (a != b) {
                if (a > b)
                {
                    a = a - b;
                }
                else { 
                    b = b - a;
                }

            }
            Console.WriteLine(a);
        }
    }
}
