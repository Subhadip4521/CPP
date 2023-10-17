//Write a Cpp program print total number of days in a month using switch case.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter 1 for knowing the number of days of January\nEnter 2 for knowing the number of days of February\nEnter 3 for knowing the number of days of March\nEnter 4 for knowing the number of days of April\nEnter 5 for knowing the number of days of May\nEnter 6 for knowing the number of days of June\nEnter 7 for knowing the number of days of July\nEnter 8 for knowing the number of days of August\nEnter 9 for knowing the number of days of September\nEnter 10 for knowing the number of days of October\nEnter 11 for knowing the number of days of November\nEnter 12 for knowing the number of days of December\n: ";
    cin>>num;

    switch(num){
        case 1:
            cout<<"January has 31 days.";
            break;
        case 2:
            cout<<"February has 28 days (29 days in case of leap year).";
            break;
        case 3:
            cout<<"March has 31 days.";
            break;
        case 4:
            cout<<"April has 30 days.";
            break;
        case 5:
            cout<<"May has 31 days.";
            break;
        case 6:
            cout<<"June has 30 days.";
            break;
        case 7:
            cout<<"July has 31 days.";
            break;
        case 8:
            cout<<"August has 31 days.";
            break;
        case 9:
            cout<<"September has 30 days.";
            break;
        case 10:
            cout<<"October has 31 days.";
            break;
        case 11:
            cout<<"November has 30 days.";
            break;
        case 12:
            cout<<"December has 31 days.";
            break;
        default:
            cout<<"Error! Enter number between 1 to 12.";
    }

    return 0;
}