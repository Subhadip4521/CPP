#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){
    
    list<int> l1;

    l1.push_back(3);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(8);
    l1.push_back(8);
    l1.push_back(13);
    l1.push_back(12);
    
    display(l1);
    // l1.pop_back();
    // l1.pop_front();
    l1.remove(1);
    display(l1);


    l1.sort();
    display(l1);
    l1.reverse();
    display(l1);



    list<int> l2(3);
    list<int>::iterator iter;
    iter=l2.begin();
    *iter=6;
    iter++;
    *iter=1;
    iter++;
    *iter=8;
    iter++;

    display(l2);

    cout<<"l1 after merging: ";
    l1.merge(l2);
    display(l1);


    return 0;
}