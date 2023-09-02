#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,sum=0;
        cin>>a>>b;
        for(int k=a;k<=b;k++)
        {
            if(sqrt(k)==int(sqrt(k)))
            {
                sum+=k;
            }
        }
        cout<<"Case"<<i<<":"<<sum<<endl;
    }






}