#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Insert elements in the array: ";

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you want to search in the array: ";
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            cout << s << " found at index: " << i <<" and position: "<<i+1<<endl;
        }
        }
    return 0;
}
