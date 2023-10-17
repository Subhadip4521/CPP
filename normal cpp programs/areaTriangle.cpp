//Write a Cpp program to enter base and height of a triangle and find its area.


#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int height, base;

    cout<<"Enter height of the triangle: ";
    cin>>height;
    cout<<"Enter base of the triangle: ";
    cin>>base;
    int area= 0.5*height*base;

    cout<<"The area of the triangle is: "<<area;

    return 0;
}