#include<iostream>
using namespace std;

class Drive{
public: 
    virtual void drive()=0;
    virtual ~Drive(){}
};
class Fly{
public: 
    virtual void fly()=0;
    virtual ~Fly(){}
};

class Car : public Drive{
public:
    void drive() override{
        cout<< "Driving a car"<<endl;
    }

};

class FlyCar: public Drive, public Fly{
public:
    void drive() override{
        cout<<"Driving a flycar"<<endl;
    }
    void fly() override{
        cout<< "Flying a flying car"<<endl;
    }
};
int main(){
    Car car;
    car.drive();

    FlyCar flycar;
    flycar.drive();
    flycar.fly();

    return 0;

}