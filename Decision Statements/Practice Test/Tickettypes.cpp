// You are using GCC

#include <iostream>
using namespace std;
string getTicketType(char ticketChar)
{
    string ticketType;
    switch (ticketChar)
    {
    case 'E':
    case 'e':
        ticketType = "Early Bird Ticket";
        break;
    case 'D':
    case 'd':
        ticketType = "Discount Ticket";
        break;
    case 'V':
    case 'v':
        ticketType = "VIP Ticket";
        break;
    case 'S':
    case 's':
        ticketType = "Standard Ticket";
        break;
    case 'C':
    case 'c':
        ticketType = "Child Ticket";
        break;
    default:
        ticketType = "Invalid Ticket";
        break;
    }
    return ticketType;
}
int main()
{
    char ticketChar;
    cin >> ticketChar;
    string ticketType = getTicketType(ticketChar);
    cout << ticketType << endl;
    return 0;
}