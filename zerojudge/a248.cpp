#include <iostream>
using namespace std;

int main(){ 
    long int c,b;
    int n,a[10001];
    while(cin>>c>>b>>n)
    {
        int num=c%b;
        cout<<c/b<<"."; //整數部分
        for(int i=0;i<n;i++)
        {
            num*=10;
            a[i]=num/b;
            num=num-a[i]*b;
            cout<<a[i];
        }
        cout<<endl;
    }
}