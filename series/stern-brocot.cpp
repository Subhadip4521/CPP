// 1 1 2 1 3 2 3 1 4 3 5 2 5 3 4 1

#include<bits/stdc++.h>
using namespace std;
void stern_brocot(int num){
    int n1, n2, n3, n4;
    n1 = n2 = 1;
    cout << n1 << " " << n2 << " ";
    num = num - 2;
    while(num--){
        n3 = n1 + n2;
        n4 = n2;
        cout << n3 << " " << n4 << " ";
        n1 = n2;
        n2 = n3;
    }
}
int main()
{
    int num;
    cin >> num;
    stern_brocot(num);
    return 0;
}