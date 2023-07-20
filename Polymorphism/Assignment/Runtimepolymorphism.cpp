// You are using GCC

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual int calculateArea() = 0;
};
class Rectangle : public Shape
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int calculateArea()
    {
        return length * breadth;
    }
};
int main()
{
    int l, b;
    cin >> l >> b;
    Rectangle r(l, b);
    cout << r.calculateArea() << endl;
    return 0;
}