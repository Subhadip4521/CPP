//Write a Cpp program to input sides of a triangle and check whether triangle is valid or not.


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


    if((side1+side2>side3)&&(side2+side3>side1)&&(side3+side1>side2))
    {
        cout<<"The triangle is possible.";
    }
    else{
        cout<<"Triangle is not possible.";
    }


    return 0;
}