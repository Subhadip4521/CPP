// 10 8 7 1 0

#include <bits/stdc++.h>
using namespace std;
void aliquot(int num)
{
    int d = 0;
    while(num!=0){
    cout << num << " ";

    for (int i = 1; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            d += i;
        }
    }
    num = d;
    d = 0;
    }
    cout << num << " ";
}
int main()
{
    int num;
    cin >> num;
    aliquot(num);

    return 0;
}