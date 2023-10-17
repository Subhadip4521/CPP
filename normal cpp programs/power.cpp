//Write a Cpp program to find power of any number x ^ y.


#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num, power;

    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>power;

    cout<<num<<" ^ "<<power<<" = "<<pow(num,power);

    return 0;
}