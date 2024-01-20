#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long int sum=0;
        int i=0;
        int prenum=1;
        while(i<50)
        {
            sum+=prenum;
            prenum=prenum+(1+n*i);
            i++;
        }
        cout<<sum<<endl;
    }
}