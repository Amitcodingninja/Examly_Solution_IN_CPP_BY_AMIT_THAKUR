#include <iostream>
#include <iomanip>
using namespace std;
class Shape
{
protected:
    double area;

public:
    void computeArea()
    {
        area = 0;
    }

public:
    double getArea()
    {
        return area;
    }

public:
    void setArea(double area)
    {
        area = area;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    double getRadius()
    {
        return radius;
    }

public:
    void setRadius(double r)
    {
        radius = r;
    }

public:
    void computeArea()
    {

        area = 3.14 * (radius * radius);
        cout << fixed << setprecision(2) << area;
    }
};
class Rectangle : public Shape
{
private:
    double length;

private:
    double breadth;

public:
    double getLength()
    {
        return length;
    }

public:
    void setLength(double l)
    {
        length = l;
    }

public:
    double getBreadth()
    {
        return breadth;
    }

public:
    void setBreadth(double b)
    {
        breadth = b;
    }

public:
    void computeArea()
    {

        area = length * breadth;
        cout << fixed << setprecision(2) << area;
    }
};
class Triangle : public Shape
{
private:
    double base;

private:
    double height;

public:
    double getBase()
    {
        return base;
    }

public:
    void setBase(double ba)
    {
        base = ba;
    }

public:
    double getHeight()
    {
        return height;
    }

public:
    void setHeight(double he)
    {
        height = he;
    }

public:
    void computeArea()
    {
        area = 0.5 * base * height;
        cout << fixed << setprecision(2) << area;
    }
};
int main()
{

    int n;
    double radius, length, breadth, base, height;
    cin >> n;
    Circle c;
    Rectangle r;
    Triangle t;
    if (n == 1)
    {
        cin >> radius;
        c.setRadius(radius);
        // cout<< c.getRadius();
        c.computeArea();
    }
    if (n == 2)
    {
        cin >> length;
        cin >> breadth;
        r.setLength(length);
        r.setBreadth(breadth);
        r.computeArea();
    }
    if (n == 3)
    {
        cin >> base;
        cin >> height;
        t.setBase(base);
        t.setHeight(height);
        t.computeArea();
    }
    if (n > 3)
    {
        cout << "Invalid Input";
    }
}
