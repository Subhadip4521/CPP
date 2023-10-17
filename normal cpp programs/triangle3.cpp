//Write a Cpp program to check whether the triangle is equilateral, isosceles or scalene triangle.


#include<iostream>

using namespace std;

int main(){
    int side1,side2,side3;
    cout<<"Enter side 1:";
    cin>>side1;
    cout<<"Enter side 2:";
    cin>>side2;
    cout<<"Enter side 3:";
    cin>>side3;


    if((side1==side2)&&(side2==side3))
    {
        cout<<"The triangle is equilateral.";
    }
    else if((side1==side2)||(side2==side3)||(side3==side1))
    {
        cout<<"The triangle is isosceles.";
    }
    else{
        cout<<"Triangle is scalene.";
    }


    return 0;
}