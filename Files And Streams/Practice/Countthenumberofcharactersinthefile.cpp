#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("sample.txt");
    // You are using GCC

    char str[300] = "Time is a great teacher but unfortunately it kills all its pupils\n";
    fout << str;
    fout.close();
    ifstream fin;
    fin.open("sample.txt");

    int count = 0;
    char ch;

    while (!fin.eof())
    {
        fin.get(ch);
        count++;
    }

    cout << "Number of characters in file are " << count;
    fin.close();
    return 0;
}