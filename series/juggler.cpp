#include<bits/stdc++.h>
using namespace std;
void juggler(int num){
    int a = num;
    cout << a<<" ";
    while(a!=1){
        int b = 0;
        if(a%2==0){
            b = floor(sqrt(a));
        }
        else{
            b= floor(sqrt(a)*sqrt(a)*sqrt(a));
        }
        cout << b << " ";
        a = b;
    }
}
int main()
{
    int num;
    cin >> num;
    juggler(num);
    return 0;
}