#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class TicketBooking
{
private:
    string stageEvent;

private:
    string customer;

private:
    int noOfSeats;

public:
    TicketBooking(string stageEvent1, string customer1, int noOfSeats1)
    {
        stageEvent = stageEvent1;
        customer = customer1;
        noOfSeats = noOfSeats1;
    }

public:
    void makePayment(string creditCard, string ccv, string name, double amount)
    {
        cout << stageEvent << " " << customer << " " << noOfSeats << " " << name << " " << fixed << setprecision(2) << amount << " " << creditCard << " " << ccv;
    }

public:
    void makePayment(string walletNumber, double amount)
    {
        cout << stageEvent << " " << customer << " " << noOfSeats << " " << fixed << setprecision(2) << amount << " " << walletNumber;
    }

public:
    void makePayment(double amount)
    {
        cout << stageEvent << " " << customer << " " << noOfSeats << " " << fixed << setprecision(2) << amount;
    }

public:
    string getStageEvent()
    {
        return stageEvent;
    }

public:
    void setStageEvent(string stageEv)
    {
        stageEvent = stageEv;
    }

public:
    string getCustomer()
    {
        return customer;
    }

public:
    void setCustomer(string cust)
    {
        customer = cust;
    }

public:
    int getNoOfSeats()
    {
        return noOfSeats;
    }

public:
    void setNoOfSeats(int noOfS)
    {
        noOfSeats = noOfS;
    }
};
int main()
{
    string details;
    string stageEvent, customer;
    int noOfSeats;
    cin >> stageEvent >> customer >> noOfSeats;
    TicketBooking t = TicketBooking(stageEvent, customer, noOfSeats);
    int n;
    cin >> n;
    if (n == 1)
    {
        double amount;
        cin >> amount;
        t.makePayment(amount);
    }
    if (n == 2)
    {
        double amount;
        cin >> amount;
        string walletNumber;
        cin >> walletNumber;
        t.makePayment(walletNumber, amount);
    }
    if (n == 3)
    {
        string name;
        cin >> name;
        double amount;
        cin >> amount;
        string type;
        cin >> type;
        string ccv;
        cin >> ccv;
        t.makePayment(type, ccv, name, amount);
    }
    if (n > 3)
    {
        cout << "Invalid Choice";
    }
}