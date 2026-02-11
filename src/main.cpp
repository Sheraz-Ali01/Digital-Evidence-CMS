#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <Windows.h>

using namespace std;



int main(){
int LoginChoise;


//Designing Menu system 
cout << "**Digital Evidence and Case Management System**"<<endl;
Sleep(3000);
system("cls");

//Login Page
start:
cout << "**Login User**"<<endl;                 
cout << "\t1. Login as Admin" << endl;          //Admin/Chief: Full access to re-open cases and view all logs.
cout << "\t2. Login as Analyst" << endl;        //Analyst: Can view and add notes to assigned cases only.
cout << "\t3. Login as Intake Officer" << endl; //Intake Officer: Can register cases but cannot modify evidence.
cout << "Enter number to login... : "; 
cin >> LoginChoise;


if(LoginChoise  ==  1){

}
else if(LoginChoise == 2 ){

}
else if(LoginChoise == 3){

}
else{
    cout << "Choice must be from 1-3" <<endl;
    Sleep(3000);
    system("cls");;
    goto start;
}






}