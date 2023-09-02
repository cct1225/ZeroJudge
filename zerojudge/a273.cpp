#include <iostream>
using namespace std;

int main(){ 
    long long int n,k;
    int i=1;
    while(cin>>n>>k)
    {
        if(k==0&&n!=0)
        {
            cout<<"Impossib1e!"<<endl;
            
        }
        else if(k==0&&n==0)
        {
            cout<<"Ok!"<<endl;
            
        }
        else if(n==0&&k!=0)
        {
            cout<<"Ok!"<<endl;
            
        }
        else if(n%k==0) cout<<"Ok!"<<endl;
        else cout<<"Impossib1e!"<<endl;   
    }
}