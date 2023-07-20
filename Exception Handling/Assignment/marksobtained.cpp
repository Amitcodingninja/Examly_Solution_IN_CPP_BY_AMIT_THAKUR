// You are using GCC

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int physics, chemistry, mathematics;
    cin >> name >> physics >> chemistry >> mathematics;
    try
    {
        if (physics < 0 || physics > 100 || chemistry < 0 || chemistry > 100 || mathematics < 0 || mathematics > 100)
        {
            throw "Invalid Marks";
        }
        cout << physics << endl
             << chemistry << endl
             << mathematics << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}