//Write a Cpp program to find maximum between two numbers using conditional operator.


#include<iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    int num2;
    cout<<"Enter number 2: ";
    cin>>num2;

    int max;
    
    max=(num1>num2)?num1:num2;
    cout<<"Maximum between "<<num1<<" and "<<num2<<" is: "<<max;

    return 0;
}
