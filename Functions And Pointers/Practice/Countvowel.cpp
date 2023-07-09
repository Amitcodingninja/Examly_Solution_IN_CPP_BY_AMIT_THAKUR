// You are using GCC

#include <iostream>
using namespace std;
int findNumberOfVowels(char *a)
{
    int i, vow = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
            vow = vow + 1;
    }
    return vow;
}
int main()
{
    char a[100];
    int k;

    cin.getline(a, 100);
    k = findNumberOfVowels(a);
    cout << k << endl;
    return 0;
}