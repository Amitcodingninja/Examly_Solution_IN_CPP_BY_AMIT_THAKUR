#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    cout << "Welcome to the show" << endl;
    if (age < 15)
    {
        cout << "Please note that you should be accompanied by an adult" << endl;
    }
    return 0;
}