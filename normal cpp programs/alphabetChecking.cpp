//Write a Cpp program to check whether a character is alphabet or not.

#include<iostream>
using namespace std;

int main(){
    char alphbt;
    cout<<"Enter an alphabet: ";
    cin>>alphbt;

    if((alphbt>='a' && alphbt<='z')||(alphbt>='A' && alphbt<='Z')){
        cout<<alphbt<<" is an alphabet.";
    }       
    else{
        cout<<alphbt<<" is not an alphabet.";            
    }
    
    return 0;
}
