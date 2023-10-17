//Write a C program to find maximum between three numbers using conditional operator.


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

    int max;
    
    max=(num1>num2&&num1>num3?num1:num2>num3?num2:num3);
    cout<<"Maximum between "<<num1<<" , "<<num2<<" and "<<num3<<" is: "<<max;

    return 0;
}