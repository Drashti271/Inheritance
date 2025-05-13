#include<iostream>
using namespace std;

class University{
public:
    void displayUniversity(){
        cout<<"University class."<<endl;
    }
};

class College : public University{
public:
    void displayCollege(){
        cout<<"College class."<<endl;
    }
};

class Department{
public:
    void displayDepartment(){
        cout<<"Department class."<<endl;
    }
};

class Student : public College , public Department{
public:
    void displayStudent(){
        cout<<"Student class."<<endl;
    }
};

int main(){
    Student s;
    s.displayUniversity();
    s.displayCollege();
    s.displayDepartment();
    s.displayStudent();

    return 0;
}