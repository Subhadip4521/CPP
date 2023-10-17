#include <bits/stdc++.h>

using namespace std;

void rev(string s)
{
    int flag;
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        char leftChar = s[left];
        char rightChar = s[right];
        if(leftChar!=rightChar){
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }
        left++;
        right--;
    }
    if(flag==0){
        cout << "Not a palindrome";
    }
    else{
        cout << "Plaindrome";
    }
}

int main()
{
    string s;
    cin >> s;

    rev(s);

    return 0;
}