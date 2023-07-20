// You are using GCC

#include <iostream>
using namespace std;
class Complex
{
public:
    int real, imag;
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};
int main()
{

    int r1, i1, r2, i2;
    cin >> r1 >> i1 >> r2 >> i2;
    Complex c1(r1, i1), c2(r2, i2);
    Complex c3 = c1 + c2;
    cout << c3.real << " + i" << c3.imag << endl;
    return 0;
}