//Write a Cpp program to check whether an alphabet is vowel or consonant using switch case.


#include<iostream>
using namespace std;

int main(){
    char alphbt;
    cout<<"Enter any alphabet: ";
    cin>>alphbt;

    
    switch(alphbt){
        case 'A':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'a':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'E':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'e':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'I':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'i':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'O':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'o':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'U':
            cout<<alphbt<<" is Vowel.";
            break;
        case 'u':
            cout<<alphbt<<" is Vowel.";
            break;
        default:
            cout<<alphbt<<" is Consonent.";
            break;
    }

    return 0;
}