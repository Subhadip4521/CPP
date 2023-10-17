//Write a Cpp program to find maximum between three numbers.

#include<iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    int num2;
    cout<<"Enter number 2: ";
    cin>>num2;
    int num3;
    cout<<"Enter number 3: ";
    cin>>num3;


    if(num1>num2 && num1>num3){
        cout<<num1<<" is greater.";
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is greater.";
    }
    else{
        cout<<num3<<" is greater.";
    }

    return 0;
}