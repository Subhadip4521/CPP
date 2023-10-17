//Write a Cpp program to enter length in centimeter and convert it into meter and kilometer.


#include<iostream>

using namespace std;

int main(){
    float l;
    cout<<"Enter length in centimeter: ";
    cin>>l;

    float m=l/100;
    float km=l/100000;

    cout<<"Entered length in meter: "<<m<<"\n";
    cout<<"Entered length in kilometer: "<<km<<"\n";
    

    return 0;
}