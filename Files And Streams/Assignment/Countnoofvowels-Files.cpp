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
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
    }

    cout << "Number of vowels in file are " << count;
    fin.close();
    return 0;
}