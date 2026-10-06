#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};
class Student : public Person
{
    int rollNo;
public:
    void getStudent()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void displayStudent()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
class Vehicle
{
protected:
    string brand;
public:
    void getVehicle()
    {
        cout << "\nEnter vehicle brand: ";
        cin >> brand;  }
};
class Car : public Vehicle
{
protected:
    string model;
public:
    void getCar()
    {
        cout << "Enter car model: ";
        cin >> model;  }
};
class ElectricCar : public Car
{
    int battery;
public:
    void getElectricCar()
    {
        cout << "Enter battery capacity: ";
        cin >> battery;
    }
    void displayCar()
    {
        cout << "\n--- Electric Car Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Battery: " << battery << " kWh" << endl;
    }
};
int main()
{
    Student s;
    s.getPerson();
    s.getStudent();
    s.displayStudent();
    ElectricCar e;
    e.getVehicle();
    e.getCar();
    e.getElectricCar();
    e.displayCar();
    return 0;
}
