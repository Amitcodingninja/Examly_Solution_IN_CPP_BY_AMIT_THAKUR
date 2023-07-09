// You are using GCC

#include <iostream>
using namespace std;
class Add
{
private:
    int a, b;

public:
    Add(int x, int y)
    {
        a = x;
        b = y;
    }
    virtual void display() = 0;
};
class Sum : public Add
{
public:
    Sum(int x, int y) : Add(x, y) {}
    void display()
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
};
int main()
{
    int x, y;
    cin >> x >> y;
    Sum s(x, y);
    s.display();
    return 0;
}