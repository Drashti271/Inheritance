#include<iostream>
using namespace std;

class A{
public:
    void showA(){
        cout<<"Show A"<<endl;
    }
};

class B : public A{
public:
    void showB(){
        cout<<"Show B"<<endl;
    }
};

class C : public B{
public:
    void showC(){
        cout<<"Show C"<<endl;
    }
};

int main(){

    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
}