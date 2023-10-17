//Write a Cpp program to convert days into years, weeks and days.


#include<iostream>

using namespace std;

int main(){
    int day;
    cout<<"Enter number of days:";
    cin>>day;

    int year,week;

    year = (day / 365);
    week = (day % 365) / 7;
    day  = (day % 365) %7;
    

    cout<<"Total number of year,week and days: \n";
    cout<<year<<"\n";
    cout<<week<<"\n";
    cout<<day<<"\n";


    return 0;
}