#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5, x = 5, pos = 3;

    int arr[20] = {2, 6, 1, 7, 9};

    // traversing--->>
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // n++;
    // insertion at any position---->>

    // for (int i = n - 1; i >= pos; i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[pos - 1] = x;

    // insertion at the begining--->>

    // for (int i = n - 1; i >= 0; i--){
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = x;

    // insertion at the end--->>
    //  arr[n-1] = x;

    // deletion from any position--->>
    // for (int i = pos; i <= n - 1; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }

    // deletion from 1st position--->>
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }


    // deletion from last position--->>
    // arr[n-1] = arr[n];
    

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    // searching--->>
    //  cout << endl;
    //  int s = 1;
    //  for (int i = 0; i < n; i++)
    //  {
    //      if(arr[i]==s){
    //          cout <<s << " found at index: " << i;
    //      }
    //  }

    return 0;
}