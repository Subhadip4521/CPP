// //Write a Cpp program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade 
//Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F


#include<iostream>

using namespace std;

int main(){
    int phy, chem,bio,math,comp;
    cout<<"Enter marks of physics: ";
    cin>>phy;
    cout<<"Enter marks of chemistry: ";
    cin>>chem;
    cout<<"Enter marks of biology: ";
    cin>>bio;
    cout<<"Enter marks of mathematics: ";
    cin>>math;
    cout<<"Enter marks of computer: ";
    cin>>comp;
    
    int total=phy+chem+bio+math+comp;
    int percent=(total/5);
    if(percent>=90){
        cout<<"Your grade is A";
    }
    else if(percent>=80){
        cout<<"Your grade is B";
    }
    else if(percent>=70){
        cout<<"Your grade is C";
    }
    else if(percent>=60){
        cout<<"Your grade is D";
    }
    else if(percent>=50){
        cout<<"Your grade is E";
    }
    else if(percent<40){
        cout<<"Your grade is F";
    }

    return 0;
}