#include<iostream>
using namespace std;

class Person{
public:
    string name;
    void inputName(){
        cout<<"Enter name: ";
        cin>>name;
    }
};

class Student : public Person{
public:
    void display(){
        cout<<"Student name: "<<name<<endl;
    }
};

int main()
{
    Student s;
    s.inputName();
    s.display();
}