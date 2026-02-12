#include <iostream>
#include <string>


using namespace std;

class User{
    private:
        string name;
        string userID;
        string userCode;
        string userRole;
    public:
        User(string name, string userId, string userCode, string userRole): name(name), userID(userId), userCode(userCode), userRole(userRole){}
    
};
class Admin: public User {

};
class Analyst: public User {

};
class IntakeOfficer: public User {

};