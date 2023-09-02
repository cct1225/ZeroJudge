#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m)
    {   
        int sum=0,count=0;
        int i=n;
        while(1)
        {
            count++;
            sum+=i;
            if(sum>m)   
            {
                cout<<count<<endl;
                break;
            }
            i++;
        }
    }
}