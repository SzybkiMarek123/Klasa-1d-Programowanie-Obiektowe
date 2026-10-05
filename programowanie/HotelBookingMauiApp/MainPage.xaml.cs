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
        public ObservableCollection<Room> RoomType { get; set; }

        private Room selectedRoom;

        public Room SelectedRoom
        {
            get { return selectedRoom; }
            set
            {
                selectedRoom = value;

                if (selectedRoom.Name.Contains("jednoosobowy"))
                {
                    MaxGuests = 1;
                }
                else if (selectedRoom.Name.Contains("dwuosobowy"))
                {
                    MaxGuests = 2;
                }
                else if (selectedRoom.Name.Contains("Apartament"))
                {
                    MaxGuests = 4;
                }

                if (GuestsCount > MaxGuests)
                {
                    GuestsCount = MaxGuests;
                }


                OnPropertyChanged();
            }
        }

        private int maxGuests;

        public int MaxGuests
        {
            get { return maxGuests; }
            set
            {
                maxGuests = value;
                OnPropertyChanged();
            }
        }


        private DateTime minimumDate;

        public DateTime MinimumDate
        {
            get { return minimumDate; }
            set
            {
                minimumDate = value;
                OnPropertyChanged();
            }
        }

        private int nightCount;

        public int NightCount
        {
            get { return nightCount; }
            set
            {
                nightCount = value;
                OnPropertyChanged();
            }
        }

        private int guestsCount;

        public int GuestsCount
        {
            get { return guestsCount; }
            set
            {
                guestsCount = value;
                OnPropertyChanged();
            }
        }

        private bool isBreakfast;

        public bool IsBreakfast
        {
            get { return isBreakfast; }
            set
            {
                isBreakfast = value;
                OnPropertyChanged();
            }
        }

        private bool isParking;

        public bool IsParking
        {
            get { return isParking; }
            set
            {
                isParking = value;
                OnPropertyChanged();
            }
        }

        public string FullName { get; set; }
        public string EmailAdress { get; set; }

        private DateTime arrivalDate;

        public DateTime ArrivalDate
        {
            get { return arrivalDate; }
            set
            {
                arrivalDate = value;
                OnPropertyChanged();
            }
        }

        private string summaryText;

        public string SummaryText
        {
            get { return summaryText; }
            set
            {
                summaryText = value;
                OnPropertyChanged();
            }
        }

        public void CreateSummary()
        {
            if (!string.IsNullOrWhiteSpace(FullName) &&
                !string.IsNullOrWhiteSpace(EmailAdress) &&
                SelectedRoom is not null)
            {
                double roomCost = NightCount * SelectedRoom.Price;

                double breakfastCost = 0;

                if (IsBreakfast)
                {
                    breakfastCost = NightCount * GuestsCount * 40;
                }

                double parkingCost = 0;

                if (IsParking)
                {
                    parkingCost = NightCount * 30;
                }

                double totalCost = roomCost + breakfastCost + parkingCost;

                string breakfast = IsBreakfast ? "Tak" : "Nie";
                string parking = IsParking ? "Tak" : "Nie";

                SummaryText =
                    $"Imię i nazwisko: {FullName}\n" +
                    $"Data przyjazdu: {ArrivalDate:dd.MM.yyyy}\n" +
                    $"Liczba nocy: {NightCount}\n" +
                    $"Liczba osób: {GuestsCount}\n" +
                    $"Pokój: {SelectedRoom.Name}\n" +
                    $"Śniadanie: {breakfast}\n" +
                    $"Parking: {parking}\n" +
                    $"Koszt pokoju: {NightCount} x {SelectedRoom.Price} zł = {roomCost} zł\n" +
                    $"Koszt śniadania: {NightCount} x {GuestsCount} x 40 zł = {breakfastCost} zł\n" +
                    $"Koszt parkingu: {NightCount} x 30 zł = {parkingCost} zł\n" +
                    $"Łączny koszt: {totalCost} zł";
            }
            else
            {
                SummaryText = "Wprowadź poprawne dane.";
            }
        }

        private Command summary;

        public Command Summary
        {
            get
            {
                if (summary == null)
                {
                    summary = new Command(CreateSummary);
                }

                return summary;
            }
        }

        public MainPage()
        {
            RoomType = new ObservableCollection<Room>
            {
                new Room
                {
                    Name = "Pokój jednoosobowy - 200zł / noc",
                    Price = 200
                },

                new Room
                {
                    Name = "Pokój dwuosobowy - 300zł / noc",
                    Price = 300
                },

                new Room
                {
                    Name = "Apartament - 500zł / noc",
                    Price = 500
                }
            };

            SelectedRoom = RoomType.First();
            MinimumDate = DateTime.Today;
            ArrivalDate = DateTime.Today;
            NightCount = 1;
            GuestsCount = 1;
            MaxGuests = 1;

            InitializeComponent();
        }
    }
}