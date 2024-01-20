#include<iostream>
#include<string>
using namespace std;

int rec(int n)
{
    int sum=1;
    if(n==1||n==0)    return 1;
    else    return n*rec(n-1);
}


int main(){
    int n,i;
    while(cin>>n){
    if(n==0){
        cout<<"0! = 1";
    }
    
    else{
        cout<<n<<"! = ";
        for(i=n;i>=1;i--)
    {
        
        cout<<i;
        if(i!=1)    cout<<" * ";
    }
        }
    cout<<" = "<<rec(n);
}
}