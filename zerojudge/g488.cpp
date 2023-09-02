#include<iostream>
#include<string>
using namespace std;

int f(int n)
{
    if(n==1)    return 1;
    else    return f(n-1)+n*n-n+1;
}




int main()
{
    int n;
    cin>>n;
    cout<<f(n);

}