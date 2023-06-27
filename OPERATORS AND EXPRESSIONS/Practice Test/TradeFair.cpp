#include <iostream>
using namespace std;
int main()
{
    int total_guests;
    // cout<<"Enter total number of guests: " << endl;
    cin >> total_guests;
    int guests_on_day1 = (2 * total_guests) / 7;
    int guests_on_day2 = 2 * guests_on_day1;
    int guests_on_day3 = guests_on_day1 / 2;
    cout << "Number of attendees on day 1 : " << guests_on_day1 << endl;
    cout << "Number of attendees on day 2 : " << guests_on_day2 << endl;
    cout << "Number of attendees on day 3 : " << guests_on_day3 << endl;
    return 0;
}