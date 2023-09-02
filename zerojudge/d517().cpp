#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,j;
    string  a[10001];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            int count=0;
            cin>>a[i];
            for(j=0;j<i;j++)
            {
                if(a[i]==a[j])  
                {
                    cout<<"Old! "<<j+1<<endl;
                    break;
                }
                else count++;
            }
            if(count==i)    cout<<"New! "<<i+1<<endl;
        }
    }
}