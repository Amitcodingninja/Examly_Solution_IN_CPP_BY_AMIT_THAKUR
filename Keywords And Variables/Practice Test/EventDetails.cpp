
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string eventName;
    string eventType;
    int expectedCount;
    char paidEntry;
    double projectedExpense;

    getline(cin, eventName);

    getline(cin, eventType);

    cin >> expectedCount;

    cin >> paidEntry;

    cin >> projectedExpense;

    cout << "Event Name :" << eventName << endl;
    cout << "Event Type :" << eventType << endl;
    cout << "Expected Count :" << expectedCount << endl;
    cout << "Paid Entry : " << paidEntry << endl;
    cout << "Projected Expense :" << projectedExpense << "L" << endl;
    return 0;
}