#include<iostream>
using namespace std;

class Teacher{
public:
    void teach(){
        cout<<"Teaching..."<<endl;
    }
};

class Researcher{
public:
    void research(){
        cout<<"Researching..."<<endl;
    }
};

class Faculty : public Teacher , public Researcher{
public:
    void guide(){
        cout<<"Guiding students."<<endl;
    }
};


int main(){

    Faculty f;
    f.teach();
    f.research();
    f.guide();
    return 0;
}