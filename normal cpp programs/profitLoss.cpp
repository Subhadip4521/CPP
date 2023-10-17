//Write a Cpp program to calculate profit or loss.

#include<iostream>

using namespace std;

int main(){
    int income, outcome;
    cout<<"Enter your income: ";
    cin>>income;
    cout<<"Enter your outcome: ";
    cin>>outcome;
    int diff=income-outcome;

    if(diff>0){
        cout<<"The profit is "<<diff;
    }
    if(diff<0){
        cout<<"The loss is "<<diff;
    }

    return 0;
}