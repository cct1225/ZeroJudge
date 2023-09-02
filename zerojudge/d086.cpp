#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str&&str!="0")
    {
        int l,sum=0;
        int c=0;
        l=str.size();
        for(int i=0;i<l;i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                str[i]+=32;
            }
            else if(str[i]>='a'&&str[i]<='z')
            {
            }
            else{
                c++;
                cout<<"Fail"<<endl;
                break;
            }
            sum+=str[i]-96;
        }
        if(c==0) cout<<sum<<endl;
}
}