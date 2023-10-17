//Write a Cpp program to enter radius of a circle and find its diameter, circumference and area.


#include<iostream>

using namespace std;

int main(){
    int r;
    cout<<"Enter radius of the circle: ";
    cin>>r;

    int d=2*r;
    float c=2*3.14*r;
    float a=3.14*r*r;

    cout<<"Diameter of the circle is: "<<d<<"\n";
    cout<<"Circumference of the circle is: "<<d<<"\n";
    cout<<"Area of the circle is: "<<a;

    return 0;
}