#include<iostream>
using namespace std;
//Agregation relationship
class Employee{
public: 
    string name;
    Employee(){}
    Employee(string name){
        this->name=name;
    }

};
class Department{
public:
    string name;
    Employee emp;

    Department(string name, Employee emp){
        this->name=name;
        this->emp=emp;
    }
    void show(){
        cout<<name <<" has a " <<emp.name<<endl;
    }

};
// composition relationship
class CPU{
public:
    void process(){
        cout<<"CPU is processing..."<<endl;
    }

};
class Computer{
private: 
    CPU cpu;
public:
    void run(){
        cpu.process();
        cout<<"computer is running .."<<endl;
    }

};
int main(){
    // Employee e("Upendra yadav");
    // Department d( "Alta",e);
    // d.show();
    Computer computer;
    computer.run();
    return 0;
}
