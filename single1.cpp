#include<iostream>
using namespace std;

class Animal{
public:
    void sound(){
        cout<<"Animal makes a sound."<<endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout<<"Dog barks."<<endl;
    }
};

int main(){
    Dog d;
    d.sound();
    d.bark();

    return 0;
}