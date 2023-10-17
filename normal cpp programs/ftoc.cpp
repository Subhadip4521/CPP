//Write a Cpp program to enter temperature in Fahrenheit and convert to Celsius


#include<iostream>

using namespace std;

int main(){
    float f;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>f;

    float c=(f-32)/1.8;

    cout<<"The temperature in celcius: "<<c<<"\n";
    
    return 0;
}