#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){

    int arr[]={50,1,6,33,7,2};
    sort(arr, arr+3);
    sort(arr, arr+6, greater<int>());       //greater<int>() is a function object or functor
    for(int i=0; i <6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}