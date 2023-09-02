#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,min,max,a[101],b[1001]={0},count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int number;
        cin>>number;
        if(i==0){
            min=number;
            max=number;
        }
        a[i]=number;
        if(number>max)  max=number; b[max]=2;
        if(number<min)  min=number; b[min]=2;
    }
   
    for(int i=0;i<n;i++)
    {
        if(a[i]<=max&&a[i]>=min)
        {
            b[a[i]]++;
        }    
    }
    for(int i=min;i<=max;i++)
    {
        if(b[i]==0) 
        {
            count=0;
            cout<<min<<" "<<max<<" no";
            break;
        }
        else    count++;
    }
    if(count!=0)    cout<<min<<" "<<max<<" yes";
    return 0;
}
