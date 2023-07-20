// You are using GCC

#include <iostream>
#include <string>
using namespace std;
struct Event
{
    string name;
    string type;
    int duration;
    float expenses;
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
        cin >> e[i].type;
        cin >> e[i].duration;
        cin >> e[i].expenses;
    }
    cout << "1. Display all events\n";
    cout << "2. Search for an event by name\n";
    cout << "3. List all the events of a particular type\n";
    cout << "4. Display the details of the most expensive event\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "L\n";
        }
        break;
    case 2:
    {
        string name1;
        cin.ignore();
        getline(cin, name1);
        for (i = 0; i < n; i++)
        {
            if ((e[i].name.compare(name1)) == 0)
            {
                cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "L\n";
            }
        }
        break;
    }
    case 3:
    {
        char type1[50];
        cin >> type1;
        for (i = 0; i < n; i++)
        {
            if ((e[i].type.compare(type1)) == 0)
            {
                cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "L\n";
            }
        }
        break;
    }
    case 4:
    {
        float max = e[0].expenses;
        for (i = 0; i < n; i++)
        {
            if (e[i].expenses > max)
            {
                max = e[i].expenses;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (e[i].expenses == max)
            {
                cout << e[i].name << " " << e[i].type << " " << e[i].duration << " " << e[i].expenses << "L\n";
            }
        }
        break;
    }
    }
    return 0;
}