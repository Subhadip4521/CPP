//Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<iostream>
using namespace std;

int main(){
    char alphbt;
    cout<<"Enter a character: ";
    cin>>alphbt;

    if(alphbt>='a' && alphbt<='z'){
        cout<<alphbt<<" is a lowercase character.";
    }       
    else if((alphbt>='A' && alphbt<='Z')){
        cout<<alphbt<<" is an uppercase character.";            
    }
    else{
        cout<<alphbt<<" is not an alphabet.";            
    }
    
    return 0;
}
