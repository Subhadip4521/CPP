//Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%


#include<iostream>
using namespace std;

int main(){
    int salary;
    cout<<"Enter your salary: ";
    cin>>salary;

    if(salary<=10000){
        cout<<"Basic Salary:"<< salary<<", "<<"HRA:"<<salary*0.2<<", "<<"DA: "<<salary*0.8;
    }
    else if(salary<=20000){
        cout<<"Basic Salary:"<< salary<<", "<<"HRA:"<<salary*0.25<<", "<<"DA: "<<salary*0.9;
    }
    else if(salary>20000){
        cout<<"Basic Salary:"<< salary<<", "<<"HRA:"<<salary*0.3<<", "<<"DA: "<<salary*0.95;
    }

    return 0;
}
