//***declaring headder files and main() function.***
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <string>
using namespace std;


// Function to print a calendar for the specified month and year

void printCalendar(int year, int month) 
{
    // Array to store the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year (February has 29 days)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[2] = 29;
    }

    // Determine the day of the week for the first day of the month (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    int firstDay = (year - 1 + year / 4 - year / 100 + year / 400 + daysInMonth[month] + 1) % 7;

    // Array to store the names of the days of the week
    string daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    // Array to store the names of the months
    string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Print the month and year
    cout << " " << left << setw(16) << months[month] << year << endl;

    // Print the days of the week
    for (const string& day : daysOfWeek) {
        cout << left << setw(4) << day;
    }
    cout << endl;

    // Print leading spaces to align the first day of the month
    for (int i = 0; i < firstDay; i++) {
        cout << "    ";
    }

    // Print the dates of the month
    for (int day = 1; day <= daysInMonth[month]; day++) {
        cout << setw(4) << day;
        // Move to the next line if it's the end of the week (Saturday)
        if ((day + firstDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int car_compact_suv()
{
    int company, name, model_year;
    cout<<"Compact SUV";
    cout<<"1. Maruti Suzuki\n 2. Tata Motors\n 3. Hyundai\n 4. Kia\n 5. Mahindra\n 6. Nissan\n 7. Renault\n 8. Toyota\n";
    cout<<"Select your company";
    cin>>company;
    switch(company)
    {
        case 1: // Maruti Suzuki
        {
            cout<<"1. Fronx\n 2. Brezza\n 3. Grand Vitara\n 4. Jimny\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 2: // Tata Motors
        {
           cout<<"1. Nexon\n 2. Punch\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 3: // Hyundai
        {
            cout<<"1. Venue\n 2. Exter\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 4: // Kia
        {
            cout<<"1. Sonet\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 5: // Mahindra
        {
            cout<<"1. XUV300\n 2. Bolero Neo\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 6: // Nissan
        {
            cout<<"1. Magnite\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 7: // Renault
        {
            cout<<"1. Kiger\n 2. Duster\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 8: // Toyota
        {
            cout<<"1. Urban Cruiser Hyryder\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        default:
        {
            break;
        }
    }
}
int car_suv()
{
    int company, name, model_year;
    cout<<"SUV";
    cout<<"1. Tata Motors\n 2. Hyundai\n 3. Mahindra\n 4. Kia\n 5. Toyota\n 6. Honda\n 7. MG\n 8. Skoda\n 9. Jeep\n";
    cin>>company;
    switch(company)
    {
        case 1: // Tata Motors
        {
            cout<<"1. Harrier\n 2. Safari\n 3. Storme\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 2: // Hyundai
        {
            cout<<"1. Creta\n 2. Alcazar\n 3. Tucson\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 3: // Mahindra
        {
            cout<<"1. XUV700\n 2. Scorpio-N\n 3. Thar\n 4. Scorpio Classic\n 5. Bolero\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 5:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 4: // Kia
        {
            cout<<"1. Seltos\n 2. EV6\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 5: // Toyota
        {
            cout<<"1. Fortuner\n 2. Fortuner Legender\n 3. Land Cruiser\n 4. Hilux\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 6: // Honda
        {
            cout<<"1. Elevate\n 2. CR-V\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 7: // MG
        {
            cout<<"1. Astor\n 2. Hector\n 3. Hector Plus\n 4. Gloster\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 8: // Skoda
        {
            cout<<"1. Kushaq\n 2. Kodiaq\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 9: // Jeep
        {
            cout<<"1. Compass\n 2. Meridian\n 3. Wrangler\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
    }
}
int car_sedan()
{
    cout<<"Sedan";
    int company, name, model_year;
    cout<<"1. Maruti Suzuki\n 2. Tata\n 3. Hyundai\n 4. Honda\n 5. Toyota\n 6. Volkswagen\n 7. Skoda\n 8. Audi\n 9. BMW\n 10. Lexus\n 11. Maserati\n 12. Kia\n 13. Renault\n 14. Mahindra\n";
    cout<<"Select your choice";
    cin>>company;
    switch(company)
    {
        case 1: // Maruti Suzuki
        {
            cout<<"1. Dzire\n 2. Ciaz\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 2: // Tata
        {
            cout<<"1. Tigor\n 2. Tigor EV\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 3: // Hyundai
        {
            cout<<"1. Aura\n 2. Verna\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 4: // Honda
        {
            cout<<"1. Amaze\n 2. Honda City\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 5: // Toyota
        {
            cout<<"1. Camry\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 6: //Volkswagen
        {
            cout<<"1. Virtus\n 2. Jetta\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 7: // Skoda
        {
            cout<<"1.Slavia\n 2. Superb\n 3. Octavia RS iV\n 4. Rapid\n";;
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 8: // Audi
        {
            cout<<"1.Audi A4\n 2. Audi A6\n 3. Audi S5 Sportback\n 4. Audi RS5\n 5. Audi A8 L\n";;
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 5:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 9: // BMW
        {
            cout<<"1. BMW 2 Series Gran Coupe\n 2. BMW 3 Series Gran Limousine\n 3. BMW 5 Series\n 4. BMW 6 Series Gran Turismo\n 5. BMW i4\n 6. BMW 7 Series\n 7. BMW i7\n";;
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 4:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 5:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 6:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                case 7:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 10: // Lexus
        {
            cout<<"1. Lexus ES\n 2. Lexus LS\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 11: // Maserati
        {
            cout<<"1. Maserati Ghibli\n 2. Maserati Quattroporte\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 12: // Kia
        {
            cout<<"1. Carens\n 2. Carnival\n 3. EV6\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 13: // Renault
        {
            cout<<"1. Fluence\n 2. Scala\n 3. Symbol\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 2:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 case 3:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
        case 14: // Mahindra
        {
            cout<<"1. eVerito\n";
            cin>>name;
            switch(name)
            {
                case 1:
                {
                    cout << name;
                    cout << "Model Year";
                    cin >> model_year;
                    break;
                }
                 default:
                 {
                    break;
                 }
            }
            break;
        }
    }
}
int car_hatchback()
{
    int company, name, model_year;
    cout<<"Select the company";
                        cout<<" 1. Maruti Suzuki\n 2. Tata\n 3. Mahindra\n 4. Hyundai\n 5. Toyota\n 6. Renault\n 7. Citroen\n 8. MG Motor\n 9. Volkswagen\n 10. Fiat\n 11. Nissan\n 12. Ford\n 13. Mercedes-Benz\n 14. Mini\n";
                        cout<<"Select your choice";
                        cin>>company;
                        switch(company)
                        {
                            case 1: // Maruti Suzuki
                            {
                                cout<<"1. Alto K10\n 2. S-Presso\n 3. Celerio\n 4. Wagon R\n 5. Ignis\n 6. Swift\n 7. Baleno\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 7:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 2: // Tata
                            {
                                cout<<"1. Tiago\n 2. Altroz\n 3. Tiago NRG\n 4. Tiago EV\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 3: //Mahindra
                            {
                                cout<<"1. KUV100 NXT\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 4: // Hyundai
                            {
                                cout<<"1. Grand i10 Nios\n 2. i20\n 3. i20 N Line\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 5: // Toyota
                            {
                                cout<<"1. Glanza\n 2. Etios Liva\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 6: // Renault
                            {
                                cout<<"1. Kwid\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 7: // Citroen
                            {
                                cout<<"1. Citroen C3\n 2. Citroen eC3\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 8: // MG Motors
                            {
                                cout<<"1. MG Comet EV\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 9: // Volkswagen
                            {
                                cout<<"1. Volkswagen Polo GT\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 10: // Fiat
                            {
                                cout<<"1. Punto\n 2. Avventura\n";
                                cin>>name;
                                 switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 11: // Nissan
                            {
                                cout<<"1. Magnite\n";
                                cin>>name;
                                 switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 12: // Ford
                            {
                                cout<<"1. Figo\n 2. Freestyle\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 13: // Mercedes-Benz
                            {
                                cout<<"1. Mercedes-AMG A-Class Hatchback\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                            case 14: // Mini
                            {
                                cout<<"1. MINI Cooper 3-door\n 2. MINI Cooper 5-door\n 3. MINI Cooper SE\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                     {
                                        break;
                                     }
                                }
                                break;
                            }
                        }
}

int bike()
{
    int company, name, model_year;
                            cout << "Select the company\n"
                            << " 1. Bajaj\n 2. Hero Motorcycle\n 3. TVS Motor\n 4. Yahama\n 5. Royal Enfield\n 6. Suzuki Motorcycle\n 7. KTM\n 8. Jawa Motorcycle\n 9. BMW Motorcycle\n 10. Ducati\n 11. Harley-Davidson\n 12. Honda\n 13. Kawasaki\n";
                            cin>>company;
                            switch (company)
                            {
                            case 1: // Bajaj
                            {
                                cout << "Select The Name :\n"
                                     << " 1. Pulsar\n 2. Avenger\n 3.  Dominar\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 2: // Hero Motorcycle
                            {
                                cout << "Select The Name :\n"
                                     << " 1. Splendor Plus\n 2. HF Deluxe\n 3.  Passion Pro\n 4. Xtreme 160R\n 5. Glamour Xtec\n 6. Xpulse(200 and 200T)\n 7.Hero Xtreme 200S\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 7:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 3: // TVS Motor
                            {
                                cout << "Select The Name :\n"
                                     << " 1. Apache\n 2. Ronin\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 4: // Yahama
                            {
                                cout << "Select The Name :\n"<< " 1. R15\n 2. FZ\n 3. MT-15\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 5: // Royal Enfield
                            {
                                cout << "Select The Name :\n"<< " 1. Standard 350\n 2. Classic 350\n 3. Meteor 350\n 4. Thunderbird 350\n 5. Hunter 350\n 6. Himalayan 350\n 7. Scram 411\n 8. Interceptor 650\n 9. Continental GT\n 10. Super Meteor 650\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 7:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 8:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 9:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 10:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 6: // Suzuki Motorcycle
                            {
                                cout << "Select The Name :\n"<< " 1. Gixxer\n 2. V-Strom\n 3. Hayabusa\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                             case 7: // KTM
                            {
                                cout << "Select The Name :\n"<< " 1. RC\n 2. Duke\n 3. Adventure\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                             case 8: // Jawa
                            {
                                cout << "Select The Name :\n"<< " 1. Jawa 42\n 2. Jawa Forty Two\n 3. Jawa Perak\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 9: // BMW
                            {
                                cout << "Select The Name :\n"<< " 1. BMW G 310 R\n 2. BMW G 310 GS\n 3. BMW F 850 GS\n 4. BMW R 1250 GS\n 5. BMW S 1000 R\n 6. BMW M 1000 R\n 7. BMW R 18\n 8. BMW R 18 Transcontinental\n 9. BMW R 18 Bagger\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 7:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 8:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 9:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 10: //Ducati
                            {
                                cout << "Select The Name :\n"<< " 1. Ducati Panigale V4\n 2. Ducati Streetfighter V4\n 3. Ducati Multistrada V4\n 4. Ducati Monster\n 5. Ducati Diavel\n 6. Ducati Scrambler\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 11: //Harley-Davidson
                            {
                                cout << "Select The Name :\n"<< " 1. Harley-Davidson Sportster S\n 2. Harley-Davidson Pan America 1250\n 3. Harley-Davidson Fat Bob\n 4. Harley-Davidson Fat Boy\n 5. Harley-Davidson Street Glide Special\n 6. Harley-Davidson Road Glide Special\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 12: //Honda
                            {
                                cout << "Select The Name :\n"<< " 1. Honda Hornet 2.0\n 2. Honda H'ness CB350\n 3. Honda CB350RS\n 4. Honda X-Blade\n 5. Honda CB Shine\n 6. Honda CD 110 Dream\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                             case 13: //Kawasaki
                            {
                                cout << "Select The Name :\n"<< " 1. Kawasaki Ninja 300\n 2. Kawasaki Ninja 400\n 3. Kawasaki Ninja 650\n 4. Kawasaki Z900\n 5. Kawasaki Versys 650\n 6. Kawasaki Ninja ZX-10R\n 7. Kawasaki Ninja H2";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                     case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 7:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            }//Termination of switch block; Bike category
}
int scooty()
{
    int company, name, model_year;
                        cout << "Select the company\n"
                             << " 1. Honda\n 2. Hero\n 3. TVS\n 4. Ola\n 5. Suzuki\n 6. Yahama\n";
                        cin>>company;
                        switch (company)
                        {
                            case 1: // Honda
                            {
                                cout << "Select The Name :\n"
                                     << " 1. Activa 6g\n 2. Activa 125\n 3. Avaitor\n 4. Grazia\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;
                            }
                            case 2: // Hero
                            {
                                cout << "Select The Name :\n"
                                     << " 1. Maestro Edge\n 2. Pleasure Plus\n 3. Destini 125\n 4. Duet\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        break;
                                    }
                                }
                                break;  
                            }
                            case 3: // TVS
                            {
                                cout << "Select The Name :\n"
                                     << " 1. Jupiter\n 2. Jupiter 125\n 3. Ntorq 125\n 4. Zest 110\n";
                                cin >> name;
                                switch (name)
                                {
                                    case 1:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << name;
                                        cout << "Model Year";
                                        cin >> model_year;
                                        break;
                                    }
                                    default:
                                    {
                                        cout<<"Invalid choice";
                                        break;
                                    }
                                }
                                break;
                            }
                            case 4: //OLA
                            {
                                cout<<"Select The Name :\n"<<" 1. S1\n 2. S1 Pro\n";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    case 2:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    default:
                                        {
                                            cout<<"Invalid choice";
                                            break;
                                        }        
                                }
                                break;

                            }    
                            case 5: //Suzuki
                            {
                                cout<<"Select The Name :\n"<<" 1. Access 125\n 2. Burgman Street 125\n 3. Avenis 125";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    case 2:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    case 3:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    default:
                                        {
                                            cout<<"Invalid choice";
                                            break;
                                        }        
                                }
                                break;
                            }
                            case 6: //Yahama
                            {
                                cout<<"Select The Name :\n"<<" 1. Aerox 155\n 2. RayZR 125\n 3. Fascino 125 ";
                                cin>>name;
                                switch(name)
                                {
                                    case 1:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    case 2:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    case 3:
                                        {
                                            cout<<name;
                                            cout<<"Model Year";
                                            cin>>model_year;
                                            break;
                                        }
                                    default:
                                        {
                                            cout<<"Invalid choice";
                                            break;
                                        }        
                                }
                                break;
                            }
                        }
}

int host_fun()
{
    string h_name, h_email, h_address, h_veh_name, h_veh_rc, ans, h_aadhar, h_bankacc, h_mob;
    int h_veh_catg, h_veh_catg_type;
    //***page for new registration of a Host.***
                cout << "\nSTART YOUR JOURNEY AS A HOST NOW!" << endl
                     << endl
                     << "Please register before getting started. Quickly Add up few fields." << endl
                     << "Let's begin by adding your PERSONAL DETAILS." << endl
                     << endl;
                cout << ">Enter your full name: " << endl
                     << ">>";
                cin.ignore();
                getline(cin, h_name);
                cout << ">Enter your E-mail id: " << endl
                     << ">>";
                cin >> h_email;
                cout << ">Enter your Mobile Number: " << endl
                     << ">>";
                cin >> h_mob;
                cout << ">Enter your Aadhar no: " << endl
                     << ">>";
                cin >> h_aadhar;
                cout << ">Enter your Address: " << endl
                     << ">>";
                cin.ignore();
                getline(cin, h_address);
                cout << ">Enter your Bank Account Number: " << endl
                     << ">>";
                cin >> h_bankacc;
                cout << "\n\nNow let's move towards some quick details of your Vehicle." << endl
                     << endl;
                cout << ">Choose your Vehicle category which you want to give on rent: " << endl
                     << ">1. 2-Wheeler\n>2. 4-Wheeler\n"
                     << ">>";
                cin >> h_veh_catg;
                if (h_veh_catg == 1)//Two wheeler category started
                {
                    cout << "Choose The Vehicle Type:\n"
                         << "1. Scooty\n"
                         << "2. Motorcycle\n"
                         << endl;
                    cin >> h_veh_catg_type;
                    if (h_veh_catg_type == 1)//scooty category started
                    {
                        scooty();
                    }
                    else if (h_veh_catg_type == 2)//starting of bike category
                    {
                         bike();
                    }
                    else
                    {
                         cout<<"Please Enter a valid category";
                    }
                       
                    /*HERE I WANT THAT THE PROGRAM WILL SHOW ALL THE FILLED DETAILS OF THE HOST. E.G. NAME, ACC, VEHICLE CATG ETC. AND ASK SAVE OR EDIT. IF SAVE THEN SHOW THE BELOW STATEMENT OF THANKYOU FOR REGISTRATION AND IF EDIT THEN WHERE? AND THEN ALLOWING THE USER TO EDIT THE SPECIFIC PLACE.*/
                     cout << "That's all. Thankyou for registration.";              
                        // Termination of else if block of bike category      
                } // Termination of 2-Wheeler category of if block
                else if(h_veh_catg == 2)// Four Wheeler category st
                {
                     cout << "Choose The Vehicle Type:\n"
                         << "1. Hatchback\n"
                         << "2. Sedan\n"
                         << "3. Compact SUV\n"
                         << "4. SUV"
                         << endl;
                    cin >> h_veh_catg_type;
                    if(h_veh_catg_type == 1) // Hatchback category started
                    {
                        car_hatchback();
                    }
                    else if(h_veh_catg_type == 2) // Sedan category started
                    {
                        car_sedan();
                    }  
                    else if(h_veh_catg_type == 3) // Compact SUV category started
                    {
                        car_compact_suv();
                    }
                    else if(h_veh_catg_type == 4) // SUV category started
                    {
                        car_suv();
                    }
                    else
                    {
                        cout<<"Please enter a valid expression";
                    }          
                } // Termination of else if block of Four Wheeler category
} // Termination of host function block

int client_fun()
{
    //***declare variables for client.***
                string c_name, c_email, c_address, c_aadhar, c_veh_name, c_veh_rc, ans, c_bankacc, c_mob;
                int c_veh_catg, c_veh_catg_type;
    cout << "START YOUR JOURNEY AS A CLIENT NOW!" << endl<< "Please register before getting started" << endl;
                    cout<<"Let's fill up your personal details\n\n";

                    cout << ">Enter your full name: " << endl
                     << ">>";
                    cin.ignore();
                    getline(cin, c_name);
                    cout << ">Enter your E-mail id: " << endl
                     << ">>";
                    cin >> c_email;
                    cout << ">Enter your Mobile Number: " << endl
                     << ">>";
                    cin >> c_mob;
                    cout << ">Enter your Aadhar no: " << endl
                     << ">>";
                    cin >> c_aadhar;
                    cout << ">Enter your Address: " << endl
                     << ">>";
                    cin.ignore();
                    getline(cin, c_address);
                    cout << ">Enter your Bank Account Number: " << endl
                     << ">>";
                    cin >> c_bankacc;

                    int c_aft_booking;//variable
                    cout<<"\nCongratulations! You have successfully registered as a Client.\n";
                    cout<<">Enter 0 to quit\n>Enter 1 to proceed for booking.\n>>";
                    cin>>c_aft_booking;

                    if(c_aft_booking==0)
                    {
                        cout<<"Thankyou";
                    }
                    else if(c_aft_booking==1)
                    {
                        cout<<"\n\nLet's move towards the booking\n";

                        int year;
                        int month;
                        // Get user input for the year and month 
                        cout<<">Please Enter the Year: \n>>";
                        cin>>year;
                        cout<<"\n>Please select the month: \n";
                        cout<<"1.  January \n2.  February \n3.  March \n4.  April \n5.  May \n6.  June \n7.  July \n8.  August \n9.  September \n10. October \n11. November \n12. December\n>>";
                        cin>>month;

                        // Call the function to print the calendar for the selected month and year
                        printCalendar(year, month);

                        return 0;
                    
                    }

                }

int main()
{
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t--------------------THE VEHICLE RENTAL SYSTEM--------------------\t\t\t\t\t\t";
    cout<<"\n\nHey There! We welcome you to our Program. ";
    //***HomePage for selecting the Catagory as Host or Client.***
    string category_h_c;
    cout << "\nPlease select your category." << endl
         << ">HOST" << endl
         << ">CLIENT" << endl
         << ">>";
    cin >> category_h_c;
    cout << endl;

    //***for loop if catagory = HOST.***
    if (category_h_c == "Host" || category_h_c == "host" || category_h_c == "HOST" || category_h_c == "hOst" || category_h_c == "hoSt" || category_h_c == "hosT")
    {

        int h_key;
        //***steps for the Host.***
        cout << "Enter the designated Host Key: ";
        cin >> h_key;

        if (h_key == 180504)
        {
            string isRegstHost;

            cout << "\nAlready registered as a host?" << endl;
            cout << ">Yes\n>No\n>>";
            cin >> isRegstHost;
            if (isRegstHost == "YES" || isRegstHost == "yes" || isRegstHost == "Yes")
            {
                //***declearing local variables for Head Host.***
                string isHeadHost;

                cout << "\nAre you Head Host?" << endl;
                cout << ">YES\n>NO\n>>";
                cin >> isHeadHost;

                if (isHeadHost == "YES" || isHeadHost == "Yes" || isHeadHost == "yes")
                {
                    int h_securityKey, h_per_key;

                    cout << "\nEnter the Host's security key: ";
                    cin >> h_securityKey;

                    if (h_securityKey == 1805)
                    {
                        cout << "Enter your Personal Host KEY: ";
                        cin >> h_per_key;

                        // personal host key: 18 belongs to Saksham Gupta.
                        // personal host key: 05 belongs to Gandharv Kaloo.
                        if (h_per_key == 18)
                        {
                            cout << "Welcome Saksham Gupta!";
                        }
                        else if (h_per_key == 05)
                        {
                            cout << "Welcome Gandharv Kaloo";
                        }
                        else
                        {
                            cout << "Invalid personal Host KEY!";
                        }
                    }//Termination of security key - 1805
                    else
                    {
                        cout << "Invalid Host's security Key";
                    }
                }//Termination for if block; headhost = YES

                //***if you are not a Head Host***
                else if (isHeadHost == "NO" || isHeadHost == "No" || isHeadHost == "no")
                {
                    string h_id;

                    cout << "Please enter your Host ID: ";
                    cin >> h_id;

                    // make a function for predefined hosts named: demo1, demo2 & demo3 make their dummy accounts and add up their details in the function. Then call those functions in this block.
                }
            }//Termination of If block\;registered host = YES

            //***if you are not registered as a Host***
            else if (isRegstHost == "NO" || isRegstHost == "no" || isRegstHost == "No")
            {
                host_fun();
            }
                else
                {
                    cout << "ERROR! Please enter a valid designated Host key.";
                }
            }//Termination of else if block; registered as host = NO 
    } 
            else if (category_h_c == "Client" || category_h_c == "client" || category_h_c == "CLIENT" || category_h_c == "cLient" || category_h_c == "clIent" || category_h_c == "cliEnt" || category_h_c == "clieNt" || category_h_c == "clienT")
            {
                int c_key;
                

                cout << "Enter the designated key for the client: ";
                cin >> c_key;
                cout<<endl;

                if (c_key == 0)
                {
                    client_fun();
                }
                    
                else
                {
                    cout << "Please enter a valid key.";
                }
            }
            else
            {
            cout << "Invalid Catagory! Try again.";
            }
        }
        hello ji 
