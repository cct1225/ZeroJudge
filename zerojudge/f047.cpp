#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str;
    vector<string>vec;
    int n=0;
    while(cin>>str)
    {
        vec.push_back(str);
        n++;
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<n/3;i++)
        {
            cout<<vec[j+i*3]<<" ";
        }
        cout<<endl;
    }
}