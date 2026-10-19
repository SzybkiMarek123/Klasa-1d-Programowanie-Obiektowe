/*
Zadanie – Wypożyczalnia sprzętu sportowego

Napisz aplikację w .NET MAUI, która oblicza koszt wypożyczenia
wybranego sprzętu. Całość umieść na jednej stronie MainPage,
bez nawigacji.

Przygotuj w programie kolekcję sprzętu:
- Rower – 40 zł za dzień,
- Hulajnoga – 30 zł za dzień,
- Rolki – 20 zł za dzień,
- Kajak – 50 zł za dzień.

Aplikacja powinna zawierać:
- listę sprzętu – CollectionView z możliwością wyboru jednej pozycji;
 każdy element wyświetla nazwę sprzętu i cenę za dzień,
- imię i nazwisko klienta – Entry,
- liczbę dni wypożyczenia – Stepper od 1 do 7,
- Label pokazujący aktualną liczbę dni,
- ubezpieczenie – CheckBox,
- przycisk „Oblicz koszt”,
- Label wyświetlający podsumowanie.

Aktualna liczba dni powinna być wyświetlana za pomocą bindingu,
tak aby zmieniała się automatycznie wraz z wartością Steppera.

Ubezpieczenie kosztuje dodatkowo 5 zł za każdy dzień wypożyczenia.

Po naciśnięciu przycisku oblicz koszt i wyświetl:
- imię i nazwisko klienta,
- nazwę wybranego sprzętu,
- liczbę dni,
- informację o ubezpieczeniu,
- łączny koszt wypożyczenia.

Przed obliczeniem sprawdź, czy podano imię i nazwisko oraz wybrano
sprzęt. W razie brakujących danych wyświetl odpowiedni komunikat.

Przykład:
Klient: Jan Kowalski
Sprzęt: Rower
Liczba dni: 3
Ubezpieczenie: TAK
Koszt sprzętu: 3 × 40 zł = 120 zł
Ubezpieczenie: 3 × 5 zł = 15 zł
Łącznie: 135 zł
*/
using SportsEquipmentRentalMauiApp.Data;
using System.Collections.ObjectModel;
namespace SportsEquipmentRentalMauiApp
{
    public partial class MainPage : ContentPage
    {
        public ObservableCollection<Itemy> Itemy { get; set; }
        private Itemy wybranyItem;
        public Itemy WybranyItem
        {
            get
            {
                return wybranyItem;
            }
            set
            {
                wybranyItem = value;
                OnPropertyChanged();
            }
        }
        private string imieINazwisko;
        public string ImieINazwisko
        {
            get 
            {
            return imieINazwisko;
            }
            set
            {
            imieINazwisko = value;
                OnPropertyChanged();
            }
        }
        private short liczbaDni;
        public short LiczbaDni
        {
            get
            {
                return liczbaDni;
            }
            set
            {
                liczbaDni = value;
                OnPropertyChanged();
            }
        }
        private bool ubiezpieczony;
        public bool Ubiezpieczony
        {
            get
            {
                return ubiezpieczony;
            }
            set
            {
                ubiezpieczony = value;
                OnPropertyChanged();
            }
        }
        private string podsumowanie;
        public string Podsumowanie
        {
            get
            {
                return podsumowanie;
            }
            set
            {
                podsumowanie = value;
                OnPropertyChanged();
            }
        }
        public void UtworzPodsumowanie()
        {
            if (!string.IsNullOrWhiteSpace(ImieINazwisko) &&
                WybranyItem is not null)
            {
                double kosztItemow = LiczbaDni * WybranyItem.Cena;

                double kosztUbezpieczenia = 0;


                if (Ubiezpieczony)
                {
                    kosztUbezpieczenia = LiczbaDni * 5;
                }

                double kosztCalkowity = kosztItemow + kosztUbezpieczenia;

                string statusUbezpieczenia = Ubiezpieczony ? "Tak" : "Nie";

                Podsumowanie =
                    $"Imię i nazwisko: {ImieINazwisko}\n" +
                    $"Sprzet: {WybranyItem.Nazwa}\n" +
                    $"Liczba Dni: {LiczbaDni}\n" +
                    $"Ubezpieczenie: {statusUbezpieczenia}\n" +
                    $"Koszt sprzetu: {LiczbaDni} x {WybranyItem.Cena} zł = {kosztItemow} zł\n" +
                    $"Koszt Ubezpieczenia: {LiczbaDni} x 5 zł = {kosztUbezpieczenia} zł\n" +
                    $"Łączny koszt: {kosztCalkowity} zł";
            }
            else
            {
                Podsumowanie = "Wprowadź poprawne dane.";
            }
        }
        private Command podsumowanieC;

        public Command PodsumowanieC
        {
            get
            { 
            if(podsumowanieC == null)
                {
                    podsumowanieC = new Command(UtworzPodsumowanie);
                }
                return podsumowanieC;
            }
        }
        public MainPage()
        {
            Itemy = new ObservableCollection<Itemy>
            {
            new Itemy{
                Nazwa = "Rower – 40 zł za dzień",
                Cena = 40
            },
            new Itemy{
                Nazwa = "Hulajnoga – 30 zł za dzień",
                Cena = 30
            },
            new Itemy{
                Nazwa = "Rolki – 20 zł za dzień",
                Cena = 20
            },
            new Itemy{
                Nazwa = "Kajak – 50 zł za dzień",
                Cena = 50
            }
            };

            InitializeComponent();
            WybranyItem = Itemy.First();
            LiczbaDni = 1;

        }


    }
}
