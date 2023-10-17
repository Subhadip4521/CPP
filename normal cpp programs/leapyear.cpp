//Write a C program to check whether year is leap year or not using conditional operator.

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;

    (year%4==0 && year%100!=0) ? printf("LEAP YEAR") : (year%400 ==0 ) ? printf("LEAP YEAR") : printf("Not LEAP YEAR");
    
    return 0;
}
