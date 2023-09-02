#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l;i++)
    {
        for(int j=i;j<l;j++)
        {
            cout<<str[j];
        }
        for(int k=0;k<i;k++)
        {
            cout<<str[k];
        }
        cout<<endl;
    }
}