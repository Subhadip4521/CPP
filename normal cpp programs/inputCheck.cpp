//Write a Cpp program to input any character and check whether it is alphabet, digit or special character


#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<ch<<" is an alphabet.";
    }       
    else if(ch>='1' && ch<='9'){
        cout<<ch<<" is a digit.";
    }       
    else{
        cout<<ch<<" is a special character.";            
    }
    
    return 0;
}
