#include<iostream>
using namespace std;

class Account{
public:
    void display(){
        cout<<"This is a bank account."<<endl;
    }
};

class Saving : public Account {
public:
    void interest(){
        cout<<"Saving account interest Calculated."<<endl;
    }
};

class Current : public Account {
public:
    void overdraft(){
        cout<<"Current account with overdraft."<<endl;
    }
};

int main(){

    Saving s;
    Current c;
    s.display();
    s.interest();
    c.display();
    c.overdraft();

    return 0;
}