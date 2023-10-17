#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r, sum = 0, mul = 1;
    cin >> n;
    int num1 = n;
    while (num1 > 0)
    {
        r = num1 % 10;
        sum += r;
        num1 = num1 / 10;
    }

    int num2 = n;
    while (num2 > 0)
    {
        r = num2 % 10;
        mul *= r;
        num2 = num2 / 10;
    }

    if (sum == mul)
    {
        cout <<n<< " is a spy number";
    }
    else{
        cout << n << " is not a spy number";
    }
    return 0;
}