#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    //you can find so many functions of vector from "cplusplus.com"

    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of the vector: ";
    cin>>size;


    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the elements in the vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    // cout<<vec1.capacity()<<endl;

    vector<int> :: iterator iter=vec1.begin();
    vec1.insert(iter+1, 4, 5);

    display(vec1);
    

    return 0;
}