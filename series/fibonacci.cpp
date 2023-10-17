#include <bits/stdc++.h>
using namespace std;
void fib(int num)
{
    int n1 = 0, n2 = 1, n3;
    cout << n1 << " " << n2 << " ";
    num = num - 2;
    // 0 1 1 2 3 5 8 13
    while (num--)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}
int main()
{
    int num;
    cin >> num;
    fib(num);

    return 0;
}