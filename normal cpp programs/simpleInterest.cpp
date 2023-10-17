//Write a C program to enter P, T, R and calculate Simple Interest and compound interest.


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float p,t,r;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter time in year: ";
    cin>>t;
    cout<<"Enter rate of interest: ";
    cin>>r;

    float si=(p*t*r)/100;
    cout<<"Simple interest: "<<si<<"\n";
    long ci= p*(pow(1+(r/100),t));
    cout<<"Compound interest: "<<ci;

    return 0;
}