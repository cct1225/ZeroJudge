#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str,ans;
    int count=0;
    int i;
    while(cin>>str){
        
    reverse(str.begin(),str.end());
    
    for(i=0;i<str.size();i++)
    {
        if(str[i]!='0')
        {
            ans = str.substr(i);
            break;
        }
    }
    cout<<i<<" ";
    if(ans.empty()) cout<<"0";
    else    cout<<ans;
}
}