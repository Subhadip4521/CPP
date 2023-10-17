//Write a Cpp program to input month number and print number of days in that month.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number between 1 to 12: ";
    cin>>num;

    if(num==1){
            cout<<"The 1st month is January.\nIt has 31 days.";
    }
    else if(num==2){
            cout<<"The 2nd month is February.\nIt has 28 days (29 days in case of leap year).";
    }
    else if(num==3){
            cout<<"The 3rd month is March.\nIt has 31 days.";
    }
    else if(num==4){
            cout<<"The 4th month is April.\nIt has 30 days.";
    }
    else if(num==5){
            cout<<"The 5th month is May.\nIt has 31 days.";
    }
    else if(num==6){
            cout<<"The 6th month is June.\nIt has 30 days.";
    }
    else if(num==7){
            cout<<"The 7th month is July.\nIt has 31 days.";
    }
    else if(num==8){
            cout<<"The 8th month is August.\nIt has 31 days.";
    }
    else if(num==9){
            cout<<"The 9th month is September.\nIt has 30 days.";
    }
    else if(num==10){
            cout<<"The 10th month is October.\nIt has 31 days.";
    }
    else if(num==11){
            cout<<"The 11th month is November.\nIt has 30 days.";
    }
    else if(num==12){
            cout<<"The 12th month is December.\nIt has 31 days.";
    }
    else{
            cout<<"Error! Enter number between 1 to 12.";
    }

    return 0;
}