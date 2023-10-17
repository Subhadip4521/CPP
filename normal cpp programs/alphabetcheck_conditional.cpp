//Write a Cpp program to check whether a character is alphabet or not using conditional operator.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;

    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");
    
    return 0;
}
