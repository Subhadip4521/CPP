//Write a Cpp program to input angles of a triangle and check whether triangle is valid or not.


#include<iostream>

using namespace std;

int main(){
    int angle1,angle2,angle3;
    cout<<"Enter angle 1:";
    cin>>angle1;
    cout<<"Enter angle 2:";
    cin>>angle2;
    cout<<"Enter angle 3:";
    cin>>angle3;

    int sum=angle1+angle2+angle3;

    if(sum ==180)
    {
        cout<<"The triangle is possible.";
    }
    else{
        cout<<"Triangle is not possible.";
    }


    return 0;
}