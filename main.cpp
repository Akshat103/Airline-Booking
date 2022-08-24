#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main();
class Management
{
public:
    Management()
    {
        main();
    }
};

class Details
{
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\nEnter the customer ID: ";
        cin >> cId;
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the age: ";
        cin >> age;
        cout << "\nEnter address: ";
        cin >> add;
        cout << "\nEnter gender: ";
        cin >> gender;
        cout << "\nYour details are saved with us" << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia"};

        for (int i = 0; i < 5; i++)
        {
            cout << (i + 1) << ". Flight to " << flightN[i] << endl;
        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country which you want to book the flight: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "__________________Welcome to Dubai Emirates__________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the jurney!" << endl;
            cout << "Following are the flights\n"
                 << endl;

            cout << "1. DUB - 476" << endl;
            cout << "\t08-01-2022   08:00 AM   10 hrs   Rs. 140000" << endl;
            cout << "2. DUB - 586" << endl;
            cout << "\t09-01-2022   05:00 AM   11 hrs   Rs. 130000" << endl;
            cout << "3. DUB - 787" << endl;
            cout << "\t10-01-2022   11:00 AM   9 hrs   Rs. 150000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                charges = 140000;
                cout << "\nYou have successfully booked the flight DUB -476" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;
            case 2:
                charges = 130000;
                cout << "\nYou have successfully booked the flight DUB -586" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            case 3:
                charges = 150000;
                cout << "\nYou have successfully booked the flight DUB -787" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            default:
                cout << "Invalid input, shifting to previous menu" << endl;
                flights();
                break;
            }

            cout << "Press any key to back to main menu:" << endl;
            getch();
            main();
        }
        break;

        case 2:
        {
            cout << "__________________Welcome to Canadian Airlines__________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the jurney!" << endl;
            cout << "Following are the flights\n"
                 << endl;

            cout << "1. CA - 489" << endl;
            cout << "\t09-01-2022   02:00 AM   24 hrs   Rs. 180000" << endl;
            cout << "2. CA - 586" << endl;
            cout << "\t10-01-2022   08:00 AM   24 hrs   Rs. 160000" << endl;
            cout << "3. CA - 787" << endl;
            cout << "\t11-01-2022   05:00 AM   23 hrs   Rs. 150000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                charges = 180000;
                cout << "\nYou have successfully booked the flight CA - 489" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;
            case 2:
                charges = 160000;
                cout << "\nYou have successfully booked the flight CA - 586" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            case 3:
                charges = 150000;
                cout << "\nYou have successfully booked the flight CA - 787" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            default:
                cout << "Invalid input, shifting to previous menu" << endl;
                flights();
                break;
            }

            cout << "Press any key to back to main menu:" << endl;
            getch();
            main();
        }
        break;

        case 3:
        {
            cout << "__________________Welcome to Royal Airways__________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the jurney!" << endl;
            cout << "Following are the flights\n"
                 << endl;

            cout << "1. UK - 476" << endl;
            cout << "\t05-01-2022   10:00 AM   14 hrs   Rs. 150000" << endl;
            cout << "2. UK - 586" << endl;
            cout << "\t07-01-2022   01:00 AM   15 hrs   Rs. 140000" << endl;
            cout << "3. UK - 787" << endl;
            cout << "\t04-01-2022   05:00 PM   13 hrs   Rs. 180000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                charges = 150000;
                cout << "\nYou have successfully booked the flight UK -476" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;
            case 2:
                charges = 140000;
                cout << "\nYou have successfully booked the flight UK -586" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            case 3:
                charges = 180000;
                cout << "\nYou have successfully booked the flight UK -787" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            default:
                cout << "Invalid input, shifting to previous menu" << endl;
                flights();
                break;
            }

            cout << "Press any key to back to main menu:" << endl;
            getch();
            main();
        }
        break;

        case 4:
        {
            cout << "__________________Welcome to US Airlines__________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the jurney!" << endl;
            cout << "Following are the flights\n"
                 << endl;

            cout << "1. US - 476" << endl;
            cout << "\t05-01-2022   10:00 AM   14 hrs   Rs. 180000" << endl;
            cout << "2. US - 586" << endl;
            cout << "\t07-01-2022   01:00 AM   15 hrs   Rs. 190000" << endl;
            cout << "3. US - 787" << endl;
            cout << "\t04-01-2022   05:00 PM   13 hrs   Rs. 200000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                charges = 180000;
                cout << "\nYou have successfully booked the flight UK -476" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;
            case 2:
                charges = 190000;
                cout << "\nYou have successfully booked the flight US -586" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            case 3:
                charges = 200000;
                cout << "\nYou have successfully booked the flight US -787" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            default:
                cout << "Invalid input, shifting to previous menu" << endl;
                flights();
                break;
            }

            cout << "Press any key to back to main menu:" << endl;
            getch();
            main();
        }
        break;

        case 5:
        {
            cout << "__________________Welcome to Australian Airlines__________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the jurney!" << endl;
            cout << "Following are the flights\n"
                 << endl;

            cout << "1. AUS - 476" << endl;
            cout << "\t05-01-2022   10:00 AM   8 hrs   Rs. 100000" << endl;
            cout << "2. AUS - 586" << endl;
            cout << "\t07-01-2022   01:00 AM   9 hrs   Rs. 120000" << endl;
            cout << "3. AUS - 787" << endl;
            cout << "\t04-01-2022   05:00 PM   7 hrs   Rs. 90000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                charges = 100000;
                cout << "\nYou have successfully booked the flight AUS -476" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;
            case 2:
                charges = 120000;
                cout << "\nYou have successfully booked the flight AUS -586" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            case 3:
                charges = 90000;
                cout << "\nYou have successfully booked the flight AUS -787" << endl;
                cout << "\nYou can go back to menu and take the ticket" << endl;
                break;

            default:
                cout << "Invalid input, shifting to previous menu" << endl;
                flights();
                break;
            }

            cout << "Press any key to back to main menu:" << endl;
            getch();
            main();
        }
        break;

        default:
        {
            cout << "Invalid input, Shifting you to the main menu!" << endl;
            main();
        }
        break;
        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "___________XYZ Airlines___________" << endl;
            outf << "______________Ticket______________" << endl;
            outf << "__________________________________" << endl;

            outf << "Customer ID: " << Details::cId << endl;
            outf << "Customer Name: " << Details::name << endl;
            outf << "Customer Gender : " << Details::gender << endl;
            outf << "\nDiscription" << endl;

            if (Registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (Registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (Registration::choice == 3)
            {
                destination = "UK";
            }
            else if (Registration::choice == 4)
            {
                destination = "USA";
            }

            outf << "Destination\t\t" << destination << endl;
            outf << "Flight cost: \t\t" << Registration::charges << endl;
        }
        outf.close();
    }
    void disBill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "File Error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

int main()
{
    system("cls");
    int lchoice, schoice, back;

    cout << "\n\t                   Aakash Airline \n"
         << endl;
    cout << "\t_________________Main Menut_________________" << endl;
    cout << "___________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t\t" << endl;
    cout << "\t|\t Press 1 to add Customer Details     \t|" << endl;
    cout << "\t|\t Press 2 to add Flight Registration  \t|" << endl;
    cout << "\t|\t Press 3 to add Ticket and Charges   \t|" << endl;
    cout << "\t|\t Press 4 to add Exit                 \t|" << endl;
    cout << "___________________________________________________" << endl;

    cout << "Enter the choice: ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "_________________Customers_________________\n"
             << endl;
        d.information();
        cout << "Press any key to go back to Main Menu";
        getch();
        main();
        break;
    }
    case 2:
    {
        cout << "_____Book a flight using this system_____\n"
             << endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout << "_____GET YOUR TICKET_____\n"
             << endl;
        t.Bill();
        cout << "Your ticket is printed, you can collect it \n"
             << endl;
        cout << "Press 1 to display your ticket ";
        cin >> back;
        if (back == 1)
        {
            t.disBill();
            cout << "Press any key to go back to main menu:";
            getch();
        main();
        }
        else
        {
            main();
        }
        break;
    }
    case 4:
    {
        cout << "\n\n\t__________Thank-You__________" << endl;
        break;
    }

    default:
    {
        cout << "Invalid input, Please try again\n"
             << endl;
        main();
        break;
    }
    }
}