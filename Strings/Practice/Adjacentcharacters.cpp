// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    string str;
    // cout<<"Enter the string"<<endl;
    cin >> str;
    string str1 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            str1 += str[i];
        }
        else if (str[i] == str[i - 1])
        {
            str1 += "*";
            str1 += str[i];
        }
        else
        {
            str1 += str[i];
        }
    }
    cout << str1 << endl;
    return 0;
}