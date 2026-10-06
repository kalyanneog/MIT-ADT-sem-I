#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary, bonus, totalSalary;
public:
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }
    Employee(int i, string n, float s, float b)
    {
        id = i;
        name = n;
        salary = s;
        bonus = b;
    }
    void calculateSalary()
    {
        totalSalary = salary + bonus;
    }
    void display()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary << endl;
    }
};
int main()
{
    Employee e1;
    Employee e2(101, "Rahul", 30000, 5000);
    e1.calculateSalary();
    e2.calculateSalary();
    cout << "--- Employee 1 ---";
    e1.display();
    cout << "\n--- Employee 2 ---";
    e2.display();
    return 0;
}
