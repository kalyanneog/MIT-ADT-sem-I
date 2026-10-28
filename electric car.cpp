#include <iostream>
using namespace std;

class Vehicle
{
public:
    void Display_Vehicle()
    {
        cout << "It is vehicle class." << endl;
    }
};

class Car : public Vehicle
{
public:
    void Display_Car()
    {
        cout << "It is car class." << endl;
    }
};

class Electric_Car : public Car
{
public:
    void Display_Electric()
    {
        cout << "It is electric car class." << endl;
    }
};

int main()
{
    Electric_Car EV;

    EV.Display_Electric();
    EV.Display_Car();
    EV.Display_Vehicle();

    return 0;
}
