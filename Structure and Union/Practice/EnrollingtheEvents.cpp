// You are using GCC

#include <iostream>
#include <string>
// Include the string header
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
    string e;
    string n;
    int p;
    float ex;
    getline(cin, e);
    getline(cin, n);
    cin >> p;
    cin >> ex;
    Event event;
    event.name = e;
    event.type = n;
    event.duration = p;
    event.expenses = ex;
    cout << event.name << " ";
    cout << event.type << " ";
    cout << event.duration << " ";
    cout << event.expenses << "L" << endl;
    return 0;
}