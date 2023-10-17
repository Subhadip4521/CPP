#include <bits/stdc++.h>

using namespace std;

void happy(int num)
{
    int r, sum = 0;
    while (num > 0)
    {
        r = num % 10;
        sum += (r * r);
        num = num / 10;
    }
    if (sum != 1)
    {
        happy(sum);
    }
    else
    {
        cout << "Happy number";
    }
}

int main()
{
    int n;
    cin >> n;

    happy(n);

    return 0;
}