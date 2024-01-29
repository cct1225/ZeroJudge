#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string a[100],b[100];
    int people;
    cin>>n;
    string ans;
    cin>>ans;
    for(int i=0;i<n;i++)
    {
        a[i]=ans.at(i);
    }
    int point=100/n;
    cin>>people;
    string name;
    for(int i=0;i<people;i++)
    {
        int score=0;
        cin>>name;
        for(int j=0;j<n;j++)
        {
            b[j]=name.at(j);
            if(b[j]==a[j]) 
            {
                score+=point;
            }
        }
        cout<<score<<endl;
    }
    

    
}