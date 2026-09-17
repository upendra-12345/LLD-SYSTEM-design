#include<iostream>
using namespace std;



// NOT FOLLOWING OCP
// class paymentProcessor{
// public:
//     void processPayment(string type, double amount){
//         if(type== "credit_card"){
//             cout<<"processing credit card: ₹"<< amount;
//         }else if(type== "debit_card"){
//             cout<<"processing debit card: ₹"<< amount;

//         }else if(type== "upi"){
//             cout<<"processing upi payment: ₹"<< amount;
//         }

//     }
// };

// OPEN/CLOSE PRINCIPLE

class paymentMethod{
public:
    virtual void pay(double amount)=0;
    virtual ~paymentMethod(){}
};

class CreditCardPayment : public paymentMethod{
public:
    void pay(double amount) override{
        cout<<"processing payment using credit card: ₹"<< amount<<endl;
    }
};

class DebitCardPayment : public paymentMethod{
public:
    void pay(double amount) override{
        cout<<"processing payment using debit card: ₹"<< amount<<endl;
    }
};

class UPIPayment : public paymentMethod{
public:
    void pay(double amount) override{
        cout<<"processing payment using upi payment: ₹"<< amount<<endl;
    }
};

class PaymentProcessor {
public:

    void process(paymentMethod & payment, double amount) {

        payment.pay(amount);

    }

};

int main(){
    PaymentProcessor processor;

    CreditCardPayment credit;
    DebitCardPayment debit;
    UPIPayment upi;

    processor.process( credit, 10000);
    processor.process( debit, 5000);
    processor.process( upi , 2000);
    
    return 0;


}
