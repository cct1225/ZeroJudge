#include<iostream>
using namespace std;
int main()
{
    int h,m,s,t;
    int h1,m1,s1,currentsum;
    cin>>h>>m>>s>>t;
    int sum=h*60*60+m*60+s;
    if(t>0){
        sum+=5400*t;
        h1=sum/3600;
        sum=sum-((h1)*3600);
        m1=sum/60;
        sum=sum-((m1)*60);
        s1=sum;
    }
    cout<<h1<<" "<<m1<<" "<<s1;




}