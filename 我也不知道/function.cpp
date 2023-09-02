#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,sum=0,max,min,a[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(i==0){
            min=a[i];
            max=a[i];
        }
        else{
        if(a[i]>max)  max=a[i]; 
        if(a[i]<min)  min=a[i]; 
        }

    }
    
    sort(a,a+n);
    if(((a[0]+a[n])*n)/2==sum)
    {
        cout<<min<<" "<<max<<" yes";
    }
    else{
        cout<<min<<" "<<max<<" no";
    }
    

}