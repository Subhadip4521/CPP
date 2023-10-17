#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    cin >> num;
    int temp = num;
    while(num>0){
        int r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if(sum==temp){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}