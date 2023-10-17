//Cpp program to read gender (M/F) and print corresponding gender using switch


#include<iostream>
using namespace std;

int main(){
    char gender;
    cout<<"Enter your gender (M/F): ";
    cin>>gender;

    switch(gender){
        case 'M':
            cout<<"You are male.";
            break;
        case 'F':
            cout<<"You are female.";
            break;
        
        default:
            cout<<"Invalid input!";
    }

    return 0;
}