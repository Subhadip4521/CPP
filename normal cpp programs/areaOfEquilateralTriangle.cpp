//Write a Cpp program to calculate area of an equilateral triangle.



#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float side;

    cout<<"Enter side of the triangle: ";
    cin>>side;
    
    float area= sqrt(3)*pow(side,2)/4;

    cout<<"The area of the equilateral triangle is: "<<area;

    return 0;
}