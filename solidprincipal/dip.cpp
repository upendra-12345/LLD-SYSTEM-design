#include<iostream>
using namespace std;
// DEPENDENCY INVERSION PRINCIPLE
// Abstraction
class UserRepository{
public:
    virtual void  save(string user)=0;
    virtual ~ UserRepository(){}

};
// LOW-LEVEL IMPLEMENTATION
class MYSQLRepository : public UserRepository{
public:
    void save(string user) override{
        cout<<"saving "<<user<<" to MYSQL"<<endl;
    }
};
// ANOTHER IMPLEMENTATION
class PostgresSQLRepository : public UserRepository{
public:
    void save(string user) override{
        cout<<"saving "<<user<<" to postgresSQL"<<endl;
    }
};

// HIGH-LEVEL MODULE
class UserService{
private:
    UserRepository& repository;
public:
    UserService(UserRepository& repository): repository(repository){}
    void saveUser(string user){
        repository.save(user);
    }

};
int main(){
    MYSQLRepository mysql;
    UserService service(mysql);
    service.saveUser("Upendra");

    return 0;
}