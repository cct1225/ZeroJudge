#include<iostream>
using namespace std;
int main()
{
    int n;
    int c=0;
    while(cin>>n&&n>=0)
    {  
        c++;
        int a[12], b[12] = {0};
        for(int i=0;i<12;i++)
        {
            cin>>a[i];
            if(i==0)    b[i]=n;
            else    b[i]=b[i-1]+a[i-1];
        }
        cout<<"Case "<<c<<":"<<endl;
        for(int i=0;i<12;i++)
        {
            int number;
            cin>>number;
            if(number<=b[i]) 
            {
                cout<<"No problem! :D"<<'\n';
                b[i+1]-=number;
            }
            else    cout<<"No problem. :("<<'\n';
            
        }
    }
}