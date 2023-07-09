// You are using GCC

#include <iostream>
#include <vector>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
};
void display(vector<Employee> employees)
{
    for (Employee employee : employees)
    {
        cout << employee.id << "  " << employee.name << "  " << employee.salary << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<Employee> employees;
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        float salary;
        cin >> id >> name >> salary;
        employees.push_back(Employee(id, name, salary));
    }
    display(employees);
}