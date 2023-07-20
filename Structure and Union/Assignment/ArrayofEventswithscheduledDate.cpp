#include <iostream>
#include <cstring>
using namespace std;
struct Date
{
    int day;
    string month;
    int year;
};

struct Event
{
    string name;
    string type;
    int duration;
    float expenses;
    struct Date scheduledDate;
};
int main()
{
    int i, n, choice;
    cin >> n;
    struct Event e[n];
    for (i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, e[i].name);
        cin >> e[i].type >> e[i].duration >> e[i].expenses >> e[i].scheduledDate.day >> e[i].scheduledDate.month >> e[i].scheduledDate.year;
    }
    cin >> choice;
    cout << "1. Display all the events\n";
    cout << "2. Display the events on a specific month\n";
    cout << "3. Display the events on a specific date\n";
    switch (choice)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "\n";
            cout << e[i].scheduledDate.day << " " << e[i].scheduledDate.month << " " << e[i].scheduledDate.year << "\n";
        }
        break;
    case 2:
    {
        string m1;
        cin >> m1;
        for (i = 0; i < n; i++)
        {
            if (e[i].scheduledDate.month.compare(m1) == 0)
            {
                cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "\n";
                cout << e[i].scheduledDate.day << " " << e[i].scheduledDate.month << " " << e[i].scheduledDate.year << "\n";
            }
        }
        break;
    }
    case 3:
    {
        int d1;
        cin >> d1;
        for (i = 0; i < n; i++)
        {
            if (e[i].scheduledDate.day == d1)
            {
                cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "\n";
                cout << e[i].scheduledDate.day << " " << e[i].scheduledDate.month << " " << e[i].scheduledDate.year << "\n";
            }
        }
        break;
    }
    }

    return 0;
}
