#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    unordered_map<string, int> mp;
    int n;
    string str;
    while(cin>>n)
    {   
        mp.clear();
        int id=0;
        for(int i=0;i<n;i++)
        {
            cin>>str;
            
            if(!mp[str]){
                cout<<"New! ";
                
                mp[str]=++id;
            }
            else{
               cout << "Old! ";
            }
            cout << mp[str] << '\n';
        }
    }
}