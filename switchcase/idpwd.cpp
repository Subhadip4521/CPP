//Write a id and password validation program in Cpp



#include<iostream>
using namespace std;

int main(){
    int id;
    cout<<"Enter id number: ";
    cin>>id;
    int pwd;
    

    switch(id){
        case 1:
            cout<<"Department: CSE\n";
            cout<<"Enter password: ";
            cin>>pwd;
            switch(pwd){
                case 202301:
                    cout<<"WELCOME to CSE.";
                    break;
        
                default:
                    cout<<"Invalid password!";
            }
            break;
        case 2:
            cout<<"Department: ECE\n";
            cout<<"Enter password: ";
            cin>>pwd;
            switch(pwd){
                case 202302:
                    cout<<"WELCOME to ECE.";
                    break;
        
                default:
                    cout<<"Invalid password!";
            }
            break;
        case 3:
            cout<<"Department: EE\n";
            cout<<"Enter password: ";
            cin>>pwd;
            switch(pwd){
                case 202303:
                    cout<<"WELCOME to EE.";
                    break;
        
                default:
                    cout<<"Invalid password!";
            }
            break;
        case 4:
            cout<<"Department: CE\n";
            cout<<"Enter password: ";
            cin>>pwd;
            switch(pwd){
                case 202304:
                    cout<<"WELCOME to CE.";
                    break;
        
                default:
                    cout<<"Invalid password!";
            }
            break;
        case 5:
            cout<<"Department: ME\n";
            cout<<"Enter password: ";
            cin>>pwd;
            switch(pwd){
                case 202305:
                    cout<<"WELCOME to ME.";
                    break;
        
                default:
                    cout<<"Invalid password!";
            }
            break;
        case 6:
            cout<<"Department: BE\n";
            cout<<"Enter password: ";
            cin>>pwd;
            switch(pwd){
                case 202306:
                    cout<<"WELCOME to BE.";
                    break;
        
                default:
                    cout<<"Invalid password!";
            }
            break;
        
        default:
            cout<<"Error! Enter id number between 1 to 6.";
    }

    return 0;
}