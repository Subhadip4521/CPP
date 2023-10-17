//Write a Cpp program to enter two angles of a triangle and find the third angle.


#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int angle1, angle2;

    cout<<"Enter angle 1: ";
    cin>>angle1;
    cout<<"Enter angle 2: ";
    cin>>angle2;
    int angle3=180-(angle1+angle2);

    cout<<"The third angle of the triangle is: "<<angle3;

    return 0;
}