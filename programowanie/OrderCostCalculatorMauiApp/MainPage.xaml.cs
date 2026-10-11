/*
Zadanie – Kalkulator kosztu zamówienia
Napisz aplikację w .NET MAUI, która pozwala obliczyć koszt prostego zamówienia.

Aplikacja powinna zawierać:
- pole Nazwa produktu (Entry),
- pole Cena za sztukę (Entry),
- wybór liczby sztuk za pomocą kontrolki Stepper (od 1 do 10),
- Label wyświetlający aktualnie wybraną liczbę sztuk,
- przełącznik Dostawa ekspresowa (Switch),
- przycisk Oblicz,
- Label wyświetlający podsumowanie zamówienia i końcową cenę.

Zasady obliczeń:
Koszt zamówienia oblicz według wzoru:
cena za sztukę × liczba sztuk
Jeśli użytkownik włączy dostawę ekspresową, do ceny zamówienia należy doliczyć 15 zł.

Przykład:
Produkt: Słuchawki
Cena za sztukę: 120 zł
Liczba sztuk: 3
Dostawa ekspresowa: TAK  
Wynik: 375 zł



Dla chętnych: zamiast przełącznika dostawy ekspresowej dodaj Picker, który pozwala wybrać sposób dostawy:
- Odbiór osobisty – 0 zł
- Kurier – 12 zł
- Paczkomat – 10 zł
Wybrany sposób dostawy uwzględnij podczas obliczania końcowej ceny zamówienia.
*/
using OrderCostCalculatorMauiApp.Data;
using System.Collections.ObjectModel;

namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public ObservableCollection<Dostawa> DostepneDostawy { get; set; }
        private Dostawa wybranaDostawa;
        public Dostawa WybranaDostawa
        {
            get { return wybranaDostawa; }
            set
            {
                wybranaDostawa = value;
                OnPropertyChanged();
            }
        }

        private string nazwaProduktu;
        public string NazwaProduktu
        {
            get { return nazwaProduktu; }
            set
            {
                nazwaProduktu = value;
                OnPropertyChanged();
            }
        }

        private double cenaZaSztuke;
        public double CenaZaSztuke
        {
            get { return cenaZaSztuke; }
            set
            {
                cenaZaSztuke = value;
                OnPropertyChanged();
            }
        }

        private int liczbaSztuk;
        public int LiczbaSztuk
        {
            get { return liczbaSztuk; }
            set
            {
                liczbaSztuk = value;
                OnPropertyChanged();
            }
        }

        private string podsumowanie;
        public string Podsumowanie
        {
            get { return podsumowanie; }
            set
            {
                podsumowanie = value;
                OnPropertyChanged();
            }
        }

        public void ObliczKoszt()
        {
            if (string.IsNullOrWhiteSpace(NazwaProduktu) ||
                CenaZaSztuke <= 0 ||
                WybranaDostawa is null)
            {
                Podsumowanie = "Wprowadź poprawne dane.";
                return;
            }

            double kosztProduktu = LiczbaSztuk * CenaZaSztuke;
            double kosztDostawy = WybranaDostawa.Cena;
            double kosztCalkowity = kosztProduktu + kosztDostawy;

            Podsumowanie =
                $"Produkt: {NazwaProduktu}\n" +
                $"Cena za sztukę: {CenaZaSztuke} zł\n" +
                $"Liczba sztuk: {LiczbaSztuk}\n" +
                $"Dostawa: {WybranaDostawa.Nazwa}\n" +
                $"Łączny koszt: {kosztCalkowity} zł";
        }

        private Command polecenieObliczania;
        public Command PolecenieObliczania
        {
            get
            {
                if (polecenieObliczania == null)
                {
                    polecenieObliczania = new Command(ObliczKoszt);
                }

                return polecenieObliczania;
            }
        }

        public MainPage()
        {
            DostepneDostawy = new ObservableCollection<Dostawa>
            {
                new Dostawa
                {
                    Nazwa = "Odbiór osobisty - 0 zł",
                    Cena = 0
                },

                new Dostawa
                {
                    Nazwa = "Kurier - 12 zł",
                    Cena = 12
                },

                new Dostawa
                {
                    Nazwa = "Paczkomat - 10 zł",
                    Cena = 10
                }
            };

            LiczbaSztuk = 1;
            WybranaDostawa = DostepneDostawy.First();
            InitializeComponent();
        }
    }
}