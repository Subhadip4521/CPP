//Write a Cpp program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<iostream>

using namespace std;

int main(){
    int unit;
    cout<<"Enter unit of electricity:";
    cin>>unit;

    int amount,total,surcharge;

    if(unit <= 50)
    {
        amount =unit*0.50;
        
    }
    else if(unit <= 150)
    {
        amount =25+ ((unit-50)*0.75);

    }
    else if(unit <= 250)
    {
        amount =100+ ((unit-150)*1.20);
    }
    else
    {
        amount =220+ ((unit-250)*1.5);
    }
    
    surcharge=amount*0.2;
    total=amount+surcharge;
    cout<<"Total electric bill: "<<total;

    return 0;
}