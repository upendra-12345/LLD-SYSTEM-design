#include<iostream>
using namespace std;

class EmailNotification{
public:
    void send(const string& message){
        cout<<"sending an email notification " << message <<endl;
    }


};
class SMSNotification{
public:
    void send(const string& message){
        cout<<"sending an sms notification " << message <<endl;
    }


};

class NotificationService{
public:
    void sendNotification(const string& type,const string& message){
        if(type== "Email"){
            EmailNotification email;
            email.send(message);
        }
        if(type== "SMS"){
            SMSNotification sms;
            sms.send(message);
        }

    }
};



int main(){
    NotificationService service;
    service.sendNotification("Email", "Welcome to our platform");
    service.sendNotification("SMS", "your otp for alta login is 5649");
    return 0;
}