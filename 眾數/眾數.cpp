#include <iostream>
using namespace std ;
int main() {
    int n,a[30001]={0},maxCount=0,b[30001],max=0;//b 鎮列為儲存眾數用    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int number;
        if(number>max)  max=number;
        cin>>number;
        a[number]+=1;
        if (a[number] > maxCount) {
            maxCount = a[number];
        }
    }
    int modecount = 0;
    for(int i=0;i<=max;i++)
    {
        if(a[i]==maxCount)
        {
            b[modecount]=i;
            modecount++;
        }
    }
    for(int i=0;i<modecount;i++)
    {
        cout<<b[i]<<" "<<maxCount;
        cout<<endl;
    }
}