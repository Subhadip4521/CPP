//Write a Cpp program to enter length and breadth of a rectangle and find its perimeter and area.


#include<iostream>

using namespace std;

int main(){
    int l, b, p, a;
    cout<<"Enter length of the rectangle: ";
    cin>>l;
    cout<<"Enter breadth of the rectangle: ";
    cin>>b;

    p=2*(l+b);
    a=(l*b);
    cout<<"Perimeter of the rectangle is: "<<p<<"\n";
    cout<<"Area of the rectangle is: "<<a;

    return 0;
    
}