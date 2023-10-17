//Write a Cpp program to check whether a number is even or odd using conditional operator.

#include<iostream>
using namespace std;

int main(){
    int n;
    char* arr[2] = {"Even", "Odd"};
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number is: "<<arr[n%2];

   return 0;
}