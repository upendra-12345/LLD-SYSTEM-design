#include<iostream>
using namespace std;
// INterface SEGREGATION PRINCIPLE
class Printer{
public:
    virtual void print()=0;
    virtual ~Printer(){}

};
class Flex{
public:
    virtual void flex()=0;
    virtual ~Flex(){}
};
class Scanner{
public:
    virtual void scan()=0;
    virtual ~Scanner(){}
};

class Staple{
public:
    virtual void staple()=0;
    virtual ~Staple(){}
};

class SimplePrinter: public Printer{
public:
    void print() override{
        cout<<"printing"<<endl;

    }
};
class AdvPrinter: public Printer,public Flex{
public:
    void print() override{
        cout<<"printing"<<endl;

    }
    void  flex() override{
        cout<<"flaxing"<<endl;
    }
};
class MultiPrinter: public Printer,public Flex,public Scanner,public Staple{
public:
    void print() override{
        cout<<"printing"<<endl;

    }
    void  flex() override{
        cout<<"flaxing"<<endl;
    }
    void  scan() override{
        cout<<"scanning"<<endl;
    }
    void  staple() override{
        cout<<"stapling"<<endl;
    }
};
int main(){
    SimplePrinter simpleprinter;
    simpleprinter.print();

    AdvPrinter advprint;
    advprint.print();
    advprint.flex();

    MultiPrinter mulprint;
    mulprint.print();
    mulprint.flex();
    mulprint.scan();
    mulprint.staple();

    return 0;
}