//Cpp program to check password is correct or incorrect using switch-case.


#include<iostream>
using namespace std;

int main(){
    int pwd;
    cout<<"Enter password: ";
    cin>>pwd;

    switch(pwd){
        case 2023:
            cout<<"WELCOME.";
            break;
        
        default:
            cout<<"Invalid password!";
    }

    return 0;
}