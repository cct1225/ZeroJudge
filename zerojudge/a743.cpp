#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> mp;
    int n;
    cin>>n;
    string str;
    string name;
    int id=0;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        getline(cin,name);
        mp[str]=id++;
    }
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }








}