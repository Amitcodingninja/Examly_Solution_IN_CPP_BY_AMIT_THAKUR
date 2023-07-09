// You are using GCC

#include <iostream>
using namespace std;
class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Employee e;
    int s;
    cin >> s;
    e.setSalary(s);
    cout << e.getSalary() << endl;
}