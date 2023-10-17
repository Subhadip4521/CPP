//Write a Cpp program to find maximum between two numbers using switch case.

#include<iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    int num2;
    cout<<"Enter number 2: ";
    cin>>num2;


    switch(num1>num2){
        case 0:
            cout<<num2<<" is greater than "<<num1<<".";
            break;
        case 1:
            cout<<num1<<" is greater than "<<num2<<".";
            break;
    }

    return 0;
}