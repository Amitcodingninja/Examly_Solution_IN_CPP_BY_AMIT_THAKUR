
#include <iostream>
using namespace std;
double calculateTotalExpenses(double ticketCost, int numTickets)
{
    double totalExpenses = ticketCost * numTickets;
    if (numTickets >= 50 && numTickets <= 100)
    {
        totalExpenses -= totalExpenses * 0.10;
    }
    else if (numTickets >= 101 && numTickets <= 200)
    {

        totalExpenses -= totalExpenses * 0.20;
    }
    else if (numTickets >= 201 && numTickets <= 400)
    {
        totalExpenses -= totalExpenses * 0.30;
    }
    else if (numTickets >= 401 && numTickets <= 500)
    {
        totalExpenses -= totalExpenses * 0.40;
    }
    else if (numTickets > 500)
    {
        totalExpenses -= totalExpenses * 0.50;
    }
    return totalExpenses;
}
int main()
{
    double ticketCost;
    int numTickets;
    cin >> ticketCost;
    cin >> numTickets;
    double totalExpenses = calculateTotalExpenses(ticketCost, numTickets);
    cout << static_cast<int>(totalExpenses) << endl;
    return 0;
}