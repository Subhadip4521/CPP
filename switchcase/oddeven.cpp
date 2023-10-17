//Write a Cpp program to check whether a number is even or odd using switch case.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    switch(num%2==0){
        case 0:
            cout<<num<<" is an odd number.";
            break;
        case 1:
            cout<<num<<" is an even number.";
            break;
        
        default:
            cout<<"Error!";
    }

    return 0;
}
