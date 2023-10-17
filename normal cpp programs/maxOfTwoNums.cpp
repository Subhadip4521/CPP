//Write a Cpp program to find maximum between two numbers

#include<iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    int num2;
    cout<<"Enter number 2: ";
    cin>>num2;


    if(num1<num2){
        cout<<num2<<" is greater than "<<num1<<".";
    }
    else{
        cout<<num1<<" is greater than "<<num2<<".";
    }

    return 0;
}