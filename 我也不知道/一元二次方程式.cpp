#include <iostream>  
#include <cmath>  
#include<iomanip>
using namespace std;  
int main()  
{  
    int a,b,c,D;
    cin>>a>>b>>c;
    D=pow(b,2)-4*a*c;
    if(D>0)
    {
        cout<<"Two different roots ";
        cout<<"x1="<<((b*-1)+sqrt(D))/(2*a)<<" , ";
        cout<<"x2="<<((b*-1)-sqrt(D))/(2*a);
    }
    else if(D==0)  
    {
        cout<<"Two same roots ";
        cout<<"x="<<-b/(2*a);
    }
    else cout<<"No real root";
    return 0;  
}  