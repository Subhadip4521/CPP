#include <bits/stdc++.h>

using namespace std;

int binary(int arr[], int s, int start, int end)
{
    int mid = (start + end) / 2;
    if (arr[mid] == s)
    {
        return mid;
    }
    else if (arr[mid] > s)
    {
        binary(arr, s, start, mid);
    }
    else if (arr[mid] < s)
    {
        binary(arr, s, mid + 1, end);
    }
}

int main()
{
    int s, n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Insert elements in the array in a sorting order: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search in the array: ";
    cin >> s;

    int b = binary(arr, s, 0, n - 1);

    cout << s << " found at the index: " << b;

    return 0;
}
