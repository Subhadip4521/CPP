#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){

    map<string, int> marksMap;
    marksMap["subha"]=99;
    marksMap["dip"]=100;
    marksMap["any"]=69;

    marksMap.insert({{"abc", 78}, {"xyz", 98}});

    map<string, int> :: iterator itr;
    for (itr=marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    

    return 0;
}