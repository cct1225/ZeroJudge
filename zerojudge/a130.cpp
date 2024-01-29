#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        string str;
        int num;
        vector<string>vec1;
        vector<int>vec2;
        vector<string>record;
        int max=0;
        for(int i=0;i<10;i++)
        {
            cin>>str;
            vec1.push_back(str);
            cin>>num;
            vec2.push_back(num);
            if(num>max) max=num;
        }
        for(int i=0;i<10;i++)
        {
            if(vec2.at(i)>=max) 
            {
                record.push_back(vec1.at(i));
            }
        }
        cout<<"Case #"<<j+1<<":"<<endl;
        for(int i=0;i<record.size();i++)
        {
            cout<<record.at(i)<<endl;
        }
    }
}