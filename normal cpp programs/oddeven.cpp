//Write a Cpp program to check whether a number is even or odd.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(num%2==0){
        cout<<num<<" is an even number.";
    }       
    else{
        cout<<num<<" is an odd number.";            
    }
    
    return 0;
}
