//Write a Cpp program to create Simple Calculator using switch case.

#include<iostream>
using namespace std;

int main(){
    int num1, num2, oprtn;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    cout<<"Enter 1 for +\nEnter 2 for -\nEnter 3 for *\nEnter 4 for /";

    cin>>oprtn;

    switch(oprtn){
        case 1:
            cout<<num1+num2;
            break;
        case 2:
            cout<<num1-num2;
            break;
        case 3:
            cout<<num1*num2;
            break;
        case 4:
            cout<<num1/num2;
            break;
        default:
            cout<<"Error";
            break;
        
    return 0;
    }



}