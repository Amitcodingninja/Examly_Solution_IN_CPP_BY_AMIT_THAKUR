// You are using GCC

#include <iostream>
#include <string>
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
    Event event;
    getline(cin, event.name);
    getline(cin, event.type);
    cin >> event.duration;
    cin >> event.expenses;
    cin >> event.scheduledDate.day >> event.scheduledDate.month >> event.scheduledDate.year;
    cout << event.name << " " << event.type << " " << event.duration << " " << event.expenses << "L" << endl;
    cout << event.scheduledDate.day << " " << event.scheduledDate.month << " " << event.scheduledDate.year << endl;
    return 0;
}