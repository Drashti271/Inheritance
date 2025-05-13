#include<iostream>
using namespace std;

class Vehicle{
public:
    void wheels(){
        cout<<"vehicle has wheels"<<endl;
    }
};

class Car: public Vehicle{
public:
    void engine(){
        cout<<"car has an engine"<<endl;
    }
};

class SportsCar : public Car{
public:
    void speed(){
        cout<<"Sports car is fast"<<endl;
    }
};

int main()
{
    SportsCar s;
    s.wheels();
    s.engine();
    s.speed();

    return 0;
}