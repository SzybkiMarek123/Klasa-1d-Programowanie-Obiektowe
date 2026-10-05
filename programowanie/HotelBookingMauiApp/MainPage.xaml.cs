/*
Zadanie – Rezerwacja pokoju hotelowego
Napisz aplikację w .NET MAUI, która pozwala przygotować prostą rezerwację pokoju hotelowego.

Użytkownik powinien podać następujące informacje:
- Imię i nazwisko – Entry,
- Adres e-mail – Entry,
- Data przyjazdu – DatePicker,
- Liczba nocy – Stepper (od 1 do 14),
- Liczba osób – Stepper (od 1 do 4),
- Rodzaj pokoju – Picker:
 - Pokój jednoosobowy – 200 zł / noc,
 - Pokój dwuosobowy – 300 zł / noc,
 - Apartament – 500 zł / noc,
- Śniadanie – Switch – dodatkowo 40 zł za osobę za każdą noc,
- Miejsce parkingowe – CheckBox – dodatkowo 30 zł za każdą noc,
- przycisk Oblicz koszt – Button,
- Label wyświetlający podsumowanie rezerwacji.

Aktualna liczba nocy oraz liczba osób powinna być wyświetlana obok odpowiednich kontrolek Stepper. Wykorzystaj do tego binding, tak aby wartości zmieniały się automatycznie.
Po naciśnięciu przycisku Oblicz koszt aplikacja powinna obliczyć całkowity koszt pobytu.

Przykład:
Imię i nazwisko: Jan Kowalski
Data przyjazdu: 15.10.2026
Liczba nocy: 3
Liczba osób: 2
Pokój: Pokój dwuosobowy
Śniadanie: TAK
Parking: TAK
Koszt pokoju: 3 × 300 zł = 900 zł
Śniadanie: 3 × 2 × 40 zł = 240 zł
Parking: 3 × 30 zł = 90 zł
Łącznie: 1230 zł
W podsumowaniu wyświetl imię i nazwisko klienta, datę przyjazdu, wybrany rodzaj pokoju, liczbę nocy, liczbę osób oraz całkowity koszt rezerwacji.

Dodatkowe wymagania:
- użytkownik nie może wybrać daty przyjazdu wcześniejszej niż dzisiejsza,
- przed wykonaniem obliczeń sprawdź, czy użytkownik podał imię i nazwisko oraz wybrał rodzaj pokoju,
- jeśli dane są niepoprawne lub niekompletne, wyświetl odpowiedni komunikat.

Dla chętnych: dodaj Slider pozwalający ustawić rabat od 0% do 20%. Aktualna wartość rabatu powinna być wyświetlana za pomocą Label i bindingu. Rabat należy uwzględnić w końcowej cenie rezerwacji.

*/
using HotelBookingMauiApp.Data;
using System.Collections.ObjectModel;
namespace HotelBookingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public ObservableCollection<Pokoj> ListaPokoi { get; set; }

        private Pokoj pokojWybrany;

        public Pokoj PokojWybrany
        {
            get { return pokojWybrany; }
            set
            {
                pokojWybrany = value;

                if (pokojWybrany.Nazwa.Contains("jednoosobowy"))
                {
                    MaksymalnaLiczbaGosci = 1;
                }
                else if (pokojWybrany.Nazwa.Contains("dwuosobowy"))
                {
                    MaksymalnaLiczbaGosci = 2;
                }
                else if (pokojWybrany.Nazwa.Contains("Apartament"))
                {
                    MaksymalnaLiczbaGosci = 4;
                }

                if (LiczbaGosci > MaksymalnaLiczbaGosci)
                {
                    LiczbaGosci = MaksymalnaLiczbaGosci;
                }


                OnPropertyChanged();
            }
        }

        private int maksymalnaLiczbaGosci;

        public int MaksymalnaLiczbaGosci
        {
            get { return maksymalnaLiczbaGosci; }
            set
            {
                maksymalnaLiczbaGosci = value;
                OnPropertyChanged();
            }
        }


        private DateTime minimalnaData;

        public DateTime MinimalnaData
        {
            get { return minimalnaData; }
            set
            {
                minimalnaData = value;
                OnPropertyChanged();
            }
        }

        private int liczbaNocy;

        public int LiczbaNocy
        {
            get { return liczbaNocy; }
            set
            {
                liczbaNocy = value;
                OnPropertyChanged();
            }
        }

        private int liczbaGosci;

        public int LiczbaGosci
        {
            get { return liczbaGosci; }
            set
            {
                liczbaGosci = value;
                OnPropertyChanged();
            }
        }

        private bool sniadanie;

        public bool Sniadanie
        {
            get { return sniadanie; }
            set
            {
                sniadanie = value;
                OnPropertyChanged();
            }
        }

        private bool parking;

        public bool CzyParking
        {
            get { return parking; }
            set
            {
                parking = value;
                OnPropertyChanged();
            }
        }

        public string ImieINazwisko { get; set; }
        public string AdresEmail { get; set; }

        private DateTime dataPrzyjazdu;

        public DateTime DataPrzyjazdu
        {
            get { return dataPrzyjazdu; }
            set
            {
                dataPrzyjazdu = value;
                OnPropertyChanged();
            }
        }

        private string tekstPodsumowania;

        public string TekstPodsumowania
        {
            get { return tekstPodsumowania; }
            set
            {
                tekstPodsumowania = value;
                OnPropertyChanged();
            }
        }

        public void UtworzPodsumowanie()
        {
            if (!string.IsNullOrWhiteSpace(ImieINazwisko) &&
                !string.IsNullOrWhiteSpace(AdresEmail) &&
                PokojWybrany is not null)
            {
                double kosztPokoju = LiczbaNocy * PokojWybrany.Cena;

                double kosztSniadania = 0;

                if (Sniadanie)
                {
                    kosztSniadania = LiczbaNocy * LiczbaGosci * 40;
                }

                double kosztParkingu = 0;

                if (CzyParking)
                {
                    kosztParkingu = LiczbaNocy * 30;
                }

                double kosztCalkowity = kosztPokoju + kosztSniadania + kosztParkingu;

                string statusSniadania = Sniadanie ? "Tak" : "Nie";
                string statusParkingu = CzyParking ? "Tak" : "Nie";

                TekstPodsumowania =
                    $"Imię i nazwisko: {ImieINazwisko}\n" +
                    $"Data przyjazdu: {DataPrzyjazdu:dd.MM.yyyy}\n" +
                    $"Liczba nocy: {LiczbaNocy}\n" +
                    $"Liczba osób: {LiczbaGosci}\n" +
                    $"Pokój: {PokojWybrany.Nazwa}\n" +
                    $"Śniadanie: {statusSniadania}\n" +
                    $"Parking: {statusParkingu}\n" +
                    $"Koszt pokoju: {LiczbaNocy} x {PokojWybrany.Cena} zł = {kosztPokoju} zł\n" +
                    $"Koszt śniadania: {LiczbaNocy} x {LiczbaGosci} x 40 zł = {kosztSniadania} zł\n" +
                    $"Koszt parkingu: {LiczbaNocy} x 30 zł = {kosztParkingu} zł\n" +
                    $"Łączny koszt: {kosztCalkowity} zł";
            }
            else
            {
                TekstPodsumowania = "Wprowadź poprawne dane.";
            }
        }

        private Command poleceniePodsumowania;

        public Command PoleceniePodsumowania
        {
            get
            {
                if (poleceniePodsumowania == null)
                {
                    poleceniePodsumowania = new Command(UtworzPodsumowanie);
                }

                return poleceniePodsumowania;
            }
        }

        public MainPage()
        {
            ListaPokoi = new ObservableCollection<Pokoj>
            {
                new Pokoj
                {
                    Nazwa = "Pokój jednoosobowy - 200zł / noc",
                    Cena = 200
                },

                new Pokoj
                {
                    Nazwa = "Pokój dwuosobowy - 300zł / noc",
                    Cena = 300
                },

                new Pokoj
                {
                    Nazwa = "Apartament - 500zł / noc",
                    Cena = 500
                }
            };

            PokojWybrany = ListaPokoi.First();
            MinimalnaData = DateTime.Today;
            DataPrzyjazdu = DateTime.Today;
            LiczbaNocy = 1;
            LiczbaGosci = 1;
            MaksymalnaLiczbaGosci = 1;

            InitializeComponent();
        }
    }
}