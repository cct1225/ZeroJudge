#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n,i;
    while(cin>>n)
    {
        if(n<1){
            cout<<"NO";
            break;
        }
        bool    prime=true;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)  
            {
                prime=false;
                break;
            }
        }
        if(prime)    cout<<"prime"<<endl;
        else    cout<<"not prime"<<endl;
        




    }
}