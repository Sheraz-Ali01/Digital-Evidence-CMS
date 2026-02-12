#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <Windows.h>

//classes headers
#include "User.h"

using namespace std;


//Function declarations
int AdminLogin();





int main(){
int LoginChoise;


//Designing Menu system
system("cls");
cout << "**Digital Evidence and Case Management System**"<<endl;
Sleep(2000);

//Login Page
    start:
    cout << "**Login User**"<<endl;                 
    cout << "\t1. Login as Admin" << endl;          //Admin/Chief: Full access to re-open cases and view all logs.
    cout << "\t2. Login as Analyst" << endl;        //Analyst: Can view and add notes to assigned cases only.
    cout << "\t3. Login as Intake Officer" << endl; //Intake Officer: Can register cases but cannot modify evidence.
    cout << "Enter number to login... : "; 
    cin >> LoginChoise;


    if(LoginChoise  ==  1){
        if(AdminLogin() == 99) {
            system("cls");
            goto start;
        }
    }
    else if(LoginChoise == 2 ){

    }
    else if(LoginChoise == 3){

    }
    else{
        cout << "Choice must be from 1-3" <<endl;
        Sleep(2000);
        system("cls");
        goto start;
    }






}

int AdminLogin(){
    int choice;
    cout << "Enter\n";
    cout << "\t1. Enter Credentials\n";
    cout << "\t99. Back to Login page\n";
    cin >> choice;

    if(choice == 99) return choice;
    else {
        //Actual work such as authenticating user and pass first by reading admins info file
    }
}