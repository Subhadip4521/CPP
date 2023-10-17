//Write a Cpp program to display user details using their id.


#include<iostream>
using namespace std;

int main(){
    int id;
    cout<<"Enter id number: ";
    cin>>id;

    switch(id){
        case 1:
            cout<<"Name: Sir SD\n";
            cout<<"Department: CSE\n";
            cout<<"Age: 22\n";
            break;
        case 2:
            cout<<"Name: Sexy Shila\n";
            cout<<"Department: ECE\n";
            cout<<"Age: 21\n";
            break;
        case 3:
            cout<<"Name: Layla\n";
            cout<<"Department: EE\n";
            cout<<"Age: 22\n";
            break;
        case 4:
            cout<<"Name: Pinky\n";
            cout<<"Department: CSE\n";
            cout<<"Age: 23\n";
            break;
        
        default:
            cout<<"Invalid ID";
    }

    return 0;
}