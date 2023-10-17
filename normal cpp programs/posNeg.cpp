//Write a Cpp program to check whether a number is positive, negative or zero


#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(num>0){
        cout<<num<<" is a positive number.";
    }
    else if(num<0){
        cout<<num<<" is a negative number.";
    }
    else{
        cout<<num<<" is zero.";
    }

    return 0;
}
