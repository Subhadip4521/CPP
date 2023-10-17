//Write a Cpp program to check whether an alphabet is vowel or consonant.


#include<iostream>
using namespace std;

int main(){
    char alphbt;
    cout<<"Enter any alphabet: ";
    cin>>alphbt;

    
    if(alphbt=='a'||alphbt=='e'||alphbt=='i'||alphbt=='o'||alphbt=='u'||alphbt=='A'||alphbt=='E'||alphbt=='I'||alphbt=='O'||alphbt=='U'){
            cout<<alphbt<<" is Vowel.";
    }        
    else{
        cout<<alphbt<<" is Consonent.";
    }
    

    return 0;
}