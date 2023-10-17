//Write a Cpp program to check whether a number is positive, negative or zero using switch case.


#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    switch(num>0){
        case 0:
            if(num<0){
                cout<<num<<" is negative number.";
                break;
            }
            else{
                cout<<num<<" is zero.";
                break;
            }
        case 1:
            cout<<num<<" is a positive number.";
            break;
    }

    return 0;
}
