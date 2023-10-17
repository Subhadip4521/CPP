//1 1 1 2 2 3 4 5 7 9 12 

#include<bits/stdc++.h>
using namespace std;
int pad(int num){
    int n1, n2, n3, n4;
    n1 = n2 = n3 = 1;
    cout << n1 << " " << n2 << " " << n3 << " ";
    num = num - 3;
    while(num--){
        n4 = n2 + n1;
        cout << n4 << " ";
        n1 = n2;
        n2 = n3;
        n3 = n4;
    }
}
int main()
{
    int num;
    cin >> num;
    pad(num);

    return 0;
}