#include <iostream>
#include <fstream>
using std::ofstream;
using namespace std;

int main()
{
    fstream file;
    // You are using GCC

    file.open("sample.dat", ios::out);
    ofstream outdata;
    int i, n, sum = 0;
    cin >> n;
    int num[n];
    for (i = 0; i < n; ++i)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    cout << sum;
    outdata.open("sample.dat");
    for (i = 0; i < n; ++i)
        outdata << num[i] << endl;
    outdata.close();
    file.close();

    return 0;
}