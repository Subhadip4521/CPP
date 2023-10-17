//Cpp program to print number between 1 to 10 in character format using switch-case.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number between 1 to 10: ";
    cin>>num;

    switch(num){
        case 1:
            cout<<"You have entered ONE.";
            break;
        case 2:
            cout<<"You have entered TWO.";
            break;
        case 3:
            cout<<"You have entered THREE.";
            break;
        case 4:
            cout<<"You have entered FOUR.";
            break;
        case 5:
            cout<<"You have entered FIVE.";
            break;
        case 6:
            cout<<"You have entered SIX.";
            break;
        case 7:
            cout<<"You have entered SEVEN.";
            break;
        case 8:
            cout<<"You have entered EIGHT.";
            break;
        case 9:
            cout<<"You have entered NINE.";
            break;
        case 10:
            cout<<"You have entered TEN.";
            break;
        default:
            cout<<"Error! Enter number between 1 to 10.";
    }

    return 0;
}