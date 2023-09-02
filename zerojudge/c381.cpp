#include<iostream>
#include<string>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m&&n!=0&&m!=0)
    {
        string str2;
        string str1="";
        for(int i=0;i<n;i++)
        {
            cin>>str2;
            str1+=str2;
        }
        for(int j=0;j<m;j++)
        {
            int number;
            cin>>number;
            cout<<str1[number-1];
        }
    }

}