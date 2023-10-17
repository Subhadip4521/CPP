#include<bits/stdc++.h>

using namespace std;

int main(){
    int num, r, sum=0;
    cin >> num;
    int temp = num;
    while(num>0){
        r = num % 10;
        sum = (sum*10) + r;
        num = num / 10;
    }

    if(sum==temp){
        cout << "Palindrome";
    }
    else{
        cout << "Not palindrome";
    }
    return 0;
}