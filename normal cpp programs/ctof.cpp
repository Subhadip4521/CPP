//Write a Cpp program to enter temperature in Celsius and convert it into Fahrenheit.


#include<iostream>

using namespace std;

int main(){
    float c;
    cout<<"Enter temperature in celcius: ";
    cin>>c;

    float f=(c*1.8)+32;

    cout<<"The temperature in fahrenheit: "<<f<<"\n";
    
    return 0;
}