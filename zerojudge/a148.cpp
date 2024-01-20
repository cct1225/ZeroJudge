#include<iostream>
using namespace std;
int main()
{
    double n,num;
    while(cin>>n)
    {
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
        }
        if(sum/n>59)   cout<<"no"<<endl;
        else    cout<<"yes"<<endl;
    }
}