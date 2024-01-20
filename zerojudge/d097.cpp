#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int a[3001],b[3001];
    while(cin>>n)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            b[i]=abs(a[i]-a[i+1]);
        }
        sort(b,b+n-1);
        for(int i=0;i<n-1;i++)
        {
            if(b[i]==i+1)
            {
                cnt++;
            }
        }
        if(cnt==n-1)    cout<<"Jolly"<<endl;
        else    cout<<"Not jolly"<<endl;
    }
}