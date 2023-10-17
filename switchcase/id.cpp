//Cpp program to accept id from user to confirm department using switch-case.


#include<iostream>
using namespace std;

int main(){
    int id;
    cout<<"Enter id number: ";
    cin>>id;

    switch(id){
        case 1:
            cout<<"Your department is CSE.";
            break;
        case 2:
            cout<<"Your department is ECE.";
            break;
        case 3:
            cout<<"Your department is EE.";
            break;
        case 4:
            cout<<"Your department is CE.";
            break;
        case 5:
            cout<<"Your department is ME.";
            break;
        case 6:
            cout<<"Your department is BE.";
            break;
        
        default:
            cout<<"Error! Enter id number between 1 to 6.";
    }

    return 0;
}