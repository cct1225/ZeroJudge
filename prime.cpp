#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int n,i;
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
        if(prime)    cout<<"質數"<<endl;
        else    cout<<"非質數"<<endl;
        




    }
}