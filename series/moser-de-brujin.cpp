// 0 1 4 5 16 17 20 21 64 65 68 69 80 81

#include <bits/stdc++.h>
using namespace std;
int mdb(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else if (num % 2 == 0)
    {
        return 4 * mdb(num / 2);
    }
    else if (num % 2 == 1)
    {
        return 4 * mdb(num / 2) + 1;
    }
}
void oddeve(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << mdb(i) << " ";
    }
}
int main()
{
    int num;
    cin >> num;
    oddeve(num);
    return 0;
}