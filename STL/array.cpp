#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int, 4> a= {1,2,54,3};
    int size= a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<a.at(3)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.size();

    return 0;
}