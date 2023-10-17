//Write a Cpp program to print day of week name.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number(1 to 7) of the day: ";
    cin>>num;

    if(num==1){
            cout<<"The 1st day of the week is Sunday.";
    }
    else if(num==2){
            cout<<"The 2nd day of the week is Monday.";
    }
    else if(num==3){
            cout<<"The 3rd day of the week is Tuesday.";
    }
    else if(num==4){
            cout<<"The 4th day of the week is Wednesday.";
    }
    else if(num==5){
            cout<<"The 5th day of the week is Thursday.";
    }
    else if(num==6){
            cout<<"The 6th day of the week is Friday.";
    }
    else if(num==7){
            cout<<"The 7th day of the week is Saturday.";
    }
    else{
            cout<<"Error! Enter number between 1 to 7.";
    }

    return 0;
}