#include<iostream>
using namespace std;
class Order{
public:
    double price;
    int quantity;
     
    Order(double price, int quantity){
        this->price= price;
        this->quantity= quantity;
    }
    double calculateTotalPrice(){
        return price*quantity;

    }

};
class Db{
public:
    void saveToDb(Order& o){
        cout<< "you price " << o.calculateTotalPrice()<<" is saved to database"<<endl;
    }

};
class generateInvoice{
public:
    void invoice(Order& o){
        cout<< "your total bill amount is " << o.calculateTotalPrice()<<endl;
    }

};
class sendEmail{
public:
    void sendMail(){
        cout<< "email send to customer" <<endl;
    }

};
int main(){
    Order order(50, 6);
    cout<<order.calculateTotalPrice()<<endl;

    Db data;
    data.saveToDb(order);

    generateInvoice in;
    in.invoice(order);

    sendEmail email;
    email.sendMail();
    

}