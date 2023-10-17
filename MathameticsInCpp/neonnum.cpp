#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sq, sum = 0, r;
    sq = n * n;
    
    while(sq>0){
        r = sq % 10;
        sum =sum + r;
        sq = sq / 10;
    }
    if(sum==n){
        cout << "Neon number" << endl;
    }
    else{
        cout << "Not neon number" << endl;
    }
    return 0;
}