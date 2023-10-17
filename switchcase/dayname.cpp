//Write a Cpp program to print day of week name using switch case.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number(1 to 7) of the day: ";
    cin>>num;

    switch(num){
        case 1:
            cout<<"The 1st day of the week is Sunday.";
            break;
        case 2:
            cout<<"The 2nd day of the week is Monday.";
            break;
        case 3:
            cout<<"The 3rd day of the week is Tuesday.";
            break;
        case 4:
            cout<<"The 4th day of the week is Wednesday.";
            break;
        case 5:
            cout<<"The 5th day of the week is Thursday.";
            break;
        case 6:
            cout<<"The 6th day of the week is Friday.";
            break;
        case 7:
            cout<<"The 7th day of the week is Saturday.";
            break;
        default:
            cout<<"Error! Enter number between 1 to 7.";
    }

    return 0;
}